/**
 * @file ciot_decoder.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __CIOT_DECODER__H__
#define __CIOT_DECODER__H__

#include <inttypes.h>

#include "ciot_err.h"

typedef struct ciot_decoder *ciot_decoder_t;
typedef ciot_err_t (ciot_decoder_decode_fn)(ciot_decoder_t base, uint8_t byte);
typedef ciot_err_t (ciot_decoder_encode_fn)(ciot_decoder_t base, uint8_t *data, int size);

typedef enum ciot_decoder_type
{
    CIOT_DECODER_TYPE_NONE,
    CIOT_DECODER_TYPE_SLIP,
    CIOT_DECODER_TYPE_S,
    CIOT_DECODER_TYPE_CUSTOM,
} ciot_decoder_type_t;

typedef enum ciot_decoder_state
{
    CIOT_DECODER_STATE_ERROR=-1,
    CIOT_DECODER_STATE_IDLE,
    CIOT_DECODER_STATE_DECODING,
    CIOT_DECODER_STATE_DONE,
} ciot_decoder_state_t;

typedef struct ciot_decoder_buffer
{
    uint8_t *buf;
    int size;
} ciot_decoder_buffer_t;

typedef struct ciot_decoder_cfg
{
    ciot_decoder_buffer_t decoder;
    ciot_decoder_buffer_t encoder;
} ciot_decoder_cfg_t;

struct ciot_decoder
{
    ciot_decoder_type_t type;
    ciot_decoder_state_t state;
    ciot_decoder_buffer_t decoder;
    ciot_decoder_buffer_t encoder;
    ciot_decoder_decode_fn *decode;
    ciot_decoder_encode_fn *encode;
    void *self;
};

ciot_decoder_t ciot_decoder_new(ciot_decoder_cfg_t *cfg);
ciot_err_t ciot_decoder_decode(ciot_decoder_t base, uint8_t byte);
ciot_err_t ciot_decoder_encode(ciot_decoder_t base, uint8_t *data, int size);

#endif  //!__CIOT_DECODER__H__
