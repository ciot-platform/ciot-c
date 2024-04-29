/**
 * @file ciot_decoder_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>

#include "unity.h"

#include "ciot_decoder.h"

ciot_err_t ciot_decoder_decode_callback(ciot_decoder_t base, uint8_t byte)
{
    return CIOT_OK;
}

ciot_err_t ciot_decoder_encode_callback(ciot_decoder_t base, uint8_t *data, int size)
{
    return CIOT_OK;
}

void test_ciot_decoder_decode_decoder_null()
{
    ciot_err_t err = ciot_decoder_decode(NULL, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_decode_decode_null()
{
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    ciot_err_t err = ciot_decoder_decode(decoder, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_decode_buffer_null()
{
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    decoder->decode = ciot_decoder_decode_callback;
    ciot_err_t err = ciot_decoder_decode(decoder, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_encode_decoder_null()
{
    ciot_err_t err = ciot_decoder_encode(NULL, NULL, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_encode_decode_null()
{
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    ciot_err_t err = ciot_decoder_encode(decoder, NULL, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_encode_buffer_null()
{
    uint8_t data[8];
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    decoder->encode = ciot_decoder_encode_callback;
    ciot_err_t err = ciot_decoder_encode(decoder, data, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_decode_ok()
{
    uint8_t buf[32];
    ciot_decoder_cfg_t cfg = { .decoder.buf = buf, .decoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    decoder->decode = ciot_decoder_decode_callback;
    ciot_err_t err = ciot_decoder_decode(decoder, 0);
    TEST_ASSERT(err == CIOT_OK);
}

void test_ciot_decoder_encode_ok()
{
    uint8_t buf[32];
    ciot_decoder_cfg_t cfg = { .encoder.buf = buf, .encoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_new(&cfg);
    decoder->encode = ciot_decoder_encode_callback;
    ciot_err_t err = ciot_decoder_encode(decoder, buf, 0);
    TEST_ASSERT(err == CIOT_OK);
}

void test_ciot_decoder()
{
    RUN_TEST(test_ciot_decoder_decode_decoder_null);
    RUN_TEST(test_ciot_decoder_decode_decode_null);
    RUN_TEST(test_ciot_decoder_decode_buffer_null);
    RUN_TEST(test_ciot_decoder_encode_decoder_null);
    RUN_TEST(test_ciot_decoder_encode_decode_null);
    RUN_TEST(test_ciot_decoder_encode_buffer_null);
    RUN_TEST(test_ciot_decoder_decode_ok);
    RUN_TEST(test_ciot_decoder_encode_ok);
}
