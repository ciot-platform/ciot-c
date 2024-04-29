/**
 * @file ciot_decoder_s_test.c
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

#include "ciot_decoder_s.h"

void test_ciot_decoder_s_decode_decoder_null()
{
    ciot_err_t err = ciot_decoder_s_decode(NULL, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_s_decode_buffer_null()
{
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);
    ciot_err_t err = ciot_decoder_s_decode(decoder, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_s_decode_overflow()
{
    ciot_err_t err;
    uint8_t buf[4];
    uint8_t data[] = { '{', 0x05, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, '}' };
    ciot_decoder_cfg_t cfg = { .decoder.buf = buf, .decoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);

    for (size_t i = 0; i < sizeof(data); i++)
    {
        err = ciot_decoder_s_decode(decoder, data[i]);
        if(err != CIOT_OK) break;
    }
    
    TEST_ASSERT(err == CIOT_ERR_OVERFLOW);
}

void test_ciot_decoder_s_decode_protocol_violation()
{
    ciot_err_t err;
    uint8_t buf[32];
    uint8_t data[] = { '{', 0x05, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, '}' };
    ciot_decoder_cfg_t cfg = { .decoder.buf = buf, .decoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);

    for (size_t i = 0; i < sizeof(data); i++)
    {
        err = ciot_decoder_s_decode(decoder, data[i]);
        if(err != CIOT_OK) break;
    }
    
    TEST_ASSERT(err == CIOT_ERR_PROTOCOL_VIOLATION);
}

void test_ciot_decoder_s_decode_ok()
{
    ciot_err_t err;
    uint8_t buf[32] = { 0 };
    uint8_t data[] = { '{', 0x05, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, '}' };
    uint8_t expected[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };
    ciot_decoder_cfg_t cfg = { .decoder.buf = buf, .decoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);

    for (size_t i = 0; i < sizeof(data); i++)
    {
        err = ciot_decoder_s_decode(decoder, data[i]);
        if(err != CIOT_OK) break;
    }
    
    TEST_ASSERT_EQUAL(err, CIOT_OK);
    TEST_ASSERT_EQUAL_MEMORY(expected, decoder->decoder.buf, decoder->decoder.size);
}

void test_ciot_decoder_s_encode_decoder_null()
{
    ciot_err_t err = ciot_decoder_s_encode(NULL, NULL, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_s_encode_buffer_null()
{
    uint8_t data[32];
    ciot_decoder_cfg_t cfg = { 0 };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);
    ciot_err_t err = ciot_decoder_s_encode(decoder, data, 0);
    TEST_ASSERT(err == CIOT_ERR_NULL_ARG);
}

void test_ciot_decoder_s_encode_overflow()
{
    uint8_t buf[4];
    uint8_t data[] = { 1, 2, 3, 4, 5 };
    ciot_decoder_cfg_t cfg = { .encoder.buf = buf, .encoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);
    ciot_err_t err = ciot_decoder_s_encode(decoder, data, sizeof(data));
    TEST_ASSERT(err == CIOT_ERR_OVERFLOW);
}

void test_ciot_decoder_s_encode_ok()
{
    uint8_t buf[16];
    uint8_t data[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };
    uint8_t expected[] = { '{', 0x05, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, '}' };
    ciot_decoder_cfg_t cfg = { .encoder.buf = buf, .encoder.size = sizeof(buf) };
    ciot_decoder_t decoder = ciot_decoder_s_new(&cfg);
    ciot_err_t err = ciot_decoder_s_encode(decoder, data, sizeof(data));
    TEST_ASSERT_EQUAL(err, CIOT_OK);
    TEST_ASSERT_EQUAL_MEMORY(expected, decoder->encoder.buf, decoder->encoder.size);
}

void test_ciot_decoder_s()
{
    RUN_TEST(test_ciot_decoder_s_decode_decoder_null);
    RUN_TEST(test_ciot_decoder_s_decode_buffer_null);
    RUN_TEST(test_ciot_decoder_s_decode_overflow);
    RUN_TEST(test_ciot_decoder_s_decode_protocol_violation);
    RUN_TEST(test_ciot_decoder_s_decode_ok);

    RUN_TEST(test_ciot_decoder_s_encode_buffer_null);
    RUN_TEST(test_ciot_decoder_s_encode_decoder_null);
    RUN_TEST(test_ciot_decoder_s_encode_overflow);
    RUN_TEST(test_ciot_decoder_s_encode_ok);
}
