/**
 * @file ciot_decoder_slip.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>

#include "ciot_decoder_slip.h"

#define SLIP_BYTE_END             0xc0    /* indicates end of packet */
#define SLIP_BYTE_ESC             0xdb    /* indicates byte stuffing */
#define SLIP_BYTE_ESC_END         0xdc    /* ESC ESC_END means END data byte */
#define SLIP_BYTE_ESC_ESC         0xdd    /* ESC ESC_ESC means ESC data byte */

typedef struct ciot_decoder_slip *ciot_decoder_slip_t;

typedef enum ciot_decoder_slip_read_state
{
    CIOT_DECODER_SLIP_STATE_DECODING,
    CIOT_DECODER_SLIP_STATE_ESC_RECEIVED,
    CIOT_DECODER_SLIP_STATE_CLEARING_INVALID_PACKET
} ciot_decoder_slip_read_state_t;

struct ciot_decoder_slip
{
    ciot_decoder_slip_read_state_t state;
    uint32_t decoder_buf_size;
    uint32_t encoder_buf_size;
    uint32_t idx;
};

ciot_decoder_t ciot_decoder_slip_new(ciot_decoder_cfg_t *cfg)
{
    ciot_decoder_t base = ciot_decoder_new(cfg);
    ciot_decoder_slip_t self = calloc(1, sizeof(struct ciot_decoder_slip));
    base->type = CIOT_DECODER_TYPE_SLIP;
    base->encode = ciot_decoder_slip_encode;
    base->decode = ciot_decoder_slip_decode;
    base->self = self;
    self->decoder_buf_size = cfg->decoder.size;
    self->encoder_buf_size = cfg->encoder.size;
    return base;
}

ciot_err_t ciot_decoder_slip_decode(ciot_decoder_t base, uint8_t byte)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(base->self);
    CIOT_NULL_CHECK(base->decoder.buf);
    CIOT_PTYPE_CHECK(base, CIOT_DECODER_TYPE_SLIP);

    ciot_decoder_slip_t self = (ciot_decoder_slip_t)base->self;

    if (self->idx == self->decoder_buf_size)
    {
        return CIOT_ERR_OVERFLOW;
    }

    base->state = CIOT_DECODER_STATE_DECODING;

    switch (self->state)
    {
        case CIOT_DECODER_SLIP_STATE_DECODING:
            switch (byte)
            {
                case SLIP_BYTE_END:
                    // finished reading packet
                    self->state = CIOT_DECODER_STATE_DONE;
                    base->decoder.size = self->idx;
                    self->idx = 0;
                    return CIOT_OK;

                case SLIP_BYTE_ESC:
                    // wait for
                    self->state = CIOT_DECODER_SLIP_STATE_ESC_RECEIVED;
                    break;

                default:
                    // add byte to buffer
                    base->decoder.buf[self->idx++] = byte;
                    break;
            }
            break;

        case CIOT_DECODER_SLIP_STATE_ESC_RECEIVED:
            switch (byte)
            {
                case SLIP_BYTE_ESC_END:
                    base->decoder.buf[self->idx++] = SLIP_BYTE_END;
                    self->state = CIOT_DECODER_SLIP_STATE_DECODING;
                    break;

                case SLIP_BYTE_ESC_ESC:
                    base->decoder.buf[self->idx++] = SLIP_BYTE_ESC;
                    self->state = CIOT_DECODER_SLIP_STATE_DECODING;
                    break;

                default:
                    // protocol violation
                    self->state = CIOT_DECODER_SLIP_STATE_CLEARING_INVALID_PACKET;
                    self->state = CIOT_DECODER_STATE_ERROR;
                    return CIOT_ERR_PROTOCOL_VIOLATION;
            }
            break;

        case CIOT_DECODER_SLIP_STATE_CLEARING_INVALID_PACKET:
            if (byte == SLIP_BYTE_END)
            {
                self->state = CIOT_DECODER_SLIP_STATE_DECODING;
                self->idx = 0;
            }
            break;
    }

    return CIOT_OK;
}

ciot_err_t ciot_decoder_slip_encode(ciot_decoder_t base, uint8_t *data, int size)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(data);
    CIOT_NULL_CHECK(base->self);
    CIOT_NULL_CHECK(base->encoder.buf);
    CIOT_PTYPE_CHECK(base, CIOT_DECODER_TYPE_SLIP);

    ciot_decoder_slip_t self = (ciot_decoder_slip_t)base->self;

    uint32_t input_index;

    base->encoder.size = 0;

    for (input_index = 0; input_index < size; input_index++)
    {
        switch (data[input_index])
        {
            case SLIP_BYTE_END:
                if(base->encoder.size == self->encoder_buf_size) return CIOT_ERR_OVERFLOW;
                base->encoder.buf[(base->encoder.size)++] = SLIP_BYTE_ESC;
                base->encoder.buf[(base->encoder.size)++] = SLIP_BYTE_ESC_END;
                break;

            case SLIP_BYTE_ESC:
                if(base->encoder.size == self->encoder_buf_size) return CIOT_ERR_OVERFLOW;
                base->encoder.buf[(base->encoder.size)++] = SLIP_BYTE_ESC;
                base->encoder.buf[(base->encoder.size)++] = SLIP_BYTE_ESC_ESC;
                break;

            default:
                if(base->encoder.size == self->encoder_buf_size) return CIOT_ERR_OVERFLOW;
                base->encoder.buf[(base->encoder.size)++] = data[input_index];
        }
    }
    
    base->encoder.buf[(base->encoder.size)++] = SLIP_BYTE_END;

    return CIOT_OK;
}
