/**
 * @file ciot_decoder_slip.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __CIOT_DECODER_SLIP__H__
#define __CIOT_DECODER_SLIP__H__

#include "ciot_decoder.h"

ciot_decoder_t ciot_decoder_slip_new(ciot_decoder_cfg_t *cfg);
ciot_err_t ciot_decoder_slip_decode(ciot_decoder_t base, uint8_t byte);
ciot_err_t ciot_decoder_slip_encode(ciot_decoder_t base, uint8_t *data, int size);

#endif  //!__CIOT_DECODER_SLIP__H__
