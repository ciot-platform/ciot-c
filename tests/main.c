/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include "unity.h"

void test_ciot_decoder();
void test_ciot_decoder_slip();
void test_ciot_decoder_s();

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

int app_main(void)
{
    UNITY_BEGIN();
    test_ciot_decoder();
    test_ciot_decoder_slip();
    test_ciot_decoder_s();
    return UNITY_END();
}
