/**
 * @file ciot_decoder.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>

#include "ciot_decoder.h"

ciot_decoder_t ciot_decoder_new(ciot_decoder_cfg_t *cfg)
{
    ciot_decoder_t base = calloc(1, sizeof(struct ciot_decoder));
    base->decoder = cfg->decoder;
    base->encoder = cfg->encoder;
    return base;
}

ciot_err_t ciot_decoder_decode(ciot_decoder_t base, uint8_t byte)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(base->decode);
    CIOT_NULL_CHECK(base->decoder.buf);
    return base->decode(base, byte);
}

ciot_err_t ciot_decoder_encode(ciot_decoder_t base, uint8_t *data, int size)
{
    CIOT_NULL_CHECK(base);
    CIOT_NULL_CHECK(base->encode);
    CIOT_NULL_CHECK(base->encoder.buf);
    return base->encode(base, data, size);
}
