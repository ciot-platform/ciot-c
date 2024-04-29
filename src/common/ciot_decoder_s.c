/**
 * @file ciot_decoder_s.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>

#include "ciot_decoder_s.h"

#define CIOT_S_BASE_ERR 0x0  /*!< Starting number of ciot_s error codes */
#define CIOT_S_START_CH '{'  /*!< Message start character */
#define CIOT_S_LENGHT_SIZE 2 /*!< Number of bytes used to receive message length */
#define CIOT_S_END_CH '}'    /*!< Message end character */
#define CIOT_S_HEADER_SIZE 3 /*!< Header size */

typedef struct ciot_decoder_s *ciot_decoder_s_t;

typedef enum ciot_decoder_s_state
{
    CIOT_DECODER_S_STATE_WAIT_START_DATA,
    CIOT_DECODER_S_STATE_WAIT_SIZE,
    CIOT_DECODER_S_STATE_READ_DATA,
    CIOT_DECODER_S_STATE_TIMEOUT,
} ciot_decoder_s_state_t;

struct ciot_decoder_s
{
    ciot_decoder_s_state_t state;
    uint32_t decoder_buf_size;
    uint32_t encoder_buf_size;
    uint32_t idx;
};

ciot_decoder_t ciot_decoder_s_new(ciot_decoder_cfg_t *cfg)
{
    ciot_decoder_t base = ciot_decoder_new(cfg);
    ciot_decoder_s_t self = calloc(1, sizeof(struct ciot_decoder_s));
    base->type = CIOT_DECODER_TYPE_S;
    base->encode = ciot_decoder_s_encode;
    base->decode = ciot_decoder_s_decode;
    base->self = self;
    self->decoder_buf_size = cfg->decoder.size;
    self->encoder_buf_size = cfg->encoder.size;
    return base;
}

ciot_err_t ciot_decoder_s_decode(ciot_decoder_t base, uint8_t byte)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(base->self);
    CIOT_NULL_CHECK(base->decoder.buf);
    CIOT_PTYPE_CHECK(base, CIOT_DECODER_TYPE_S);

    ciot_decoder_s_t self = (ciot_decoder_s_t)base->self;

    base->state = CIOT_DECODER_STATE_DECODING;

    if(self->idx < self->decoder_buf_size)
    {
        base->decoder.buf[self->idx] = byte;
    }
    else
    {
        self->idx = 0;
        self->state = CIOT_DECODER_S_STATE_WAIT_START_DATA;
        base->state = CIOT_DECODER_STATE_ERROR;
        return CIOT_ERR_OVERFLOW;
    }

    switch (self->state)
    {
        case CIOT_DECODER_S_STATE_WAIT_START_DATA:
            self->idx = 0;
            base->decoder.size = 0;
            if(byte == CIOT_S_START_CH)
            {
                base->decoder.buf[self->idx] = byte;
                self->state = CIOT_DECODER_S_STATE_WAIT_SIZE;
            }
            break;
        case CIOT_DECODER_S_STATE_WAIT_SIZE:
            base->decoder.size++;
            if (base->decoder.size == CIOT_S_LENGHT_SIZE)
            {
                base->decoder.size = base->decoder.buf[2] << 8 | base->decoder.buf[1];
                self->idx = 0;
                self->state = CIOT_DECODER_S_STATE_READ_DATA;
                return CIOT_OK;
            }
            break;
        case CIOT_DECODER_S_STATE_READ_DATA:
            if(self->idx == base->decoder.size && byte == CIOT_S_END_CH)
            {
                base->state = CIOT_DECODER_STATE_DONE;
                self->state = CIOT_DECODER_S_STATE_WAIT_START_DATA;
                CIOT_LOG_BUFFER_HEX("ciot_s", base->decoder.buf, self->idx);
                return CIOT_OK;
            }
            if(self->idx == base->decoder.size)
            {
                self->idx = 0;
                self->state = CIOT_DECODER_S_STATE_WAIT_START_DATA;
                base->state = CIOT_DECODER_STATE_ERROR;
                return CIOT_ERR_PROTOCOL_VIOLATION;
            }
            break;
    default:
        break;
    }

    self->idx++;

    return CIOT_OK;
}

ciot_err_t ciot_decoder_s_encode(ciot_decoder_t base, uint8_t *data, int size)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(base->self);
    CIOT_NULL_CHECK(base->encoder.buf);
    CIOT_PTYPE_CHECK(base, CIOT_DECODER_TYPE_S);

    ciot_decoder_s_t self = (ciot_decoder_s_t)base->self;

    if(self->encoder_buf_size < size + 4)
    {
        return CIOT_ERR_OVERFLOW;
    }

    base->encoder.buf[0] = CIOT_S_START_CH;
    base->encoder.buf[1] = size & 0xFF;
    base->encoder.buf[2] = (size >> 8) & 0xFF;

    for (size_t i = 0; i < size; i++)
    {
        base->encoder.buf[i+3] = data[i];
    }
    
    base->encoder.buf[size+3] = CIOT_S_END_CH;
    base->encoder.size = size+4;

    return CIOT_OK;
}
