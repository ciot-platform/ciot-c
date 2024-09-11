/**
 * @file ciot_utils.c
 * @author Wesley Santos (wesleypro37@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ciot_utils.h"
#include "stdio.h"

void bytes_to_hex(char *dst, uint8_t *src, size_t size, bool reverse)
{
    int i;
    for (i = 0; i < size; i++)
    {
        int idx = reverse ? (size - i - 1) : i;
        if (src[idx] <= 0x0F)
        {
            sprintf(&dst[i << 1], "0%X", src[idx]);
        }
        else
        {
            sprintf(&dst[i << 1], "%X", src[idx]);
        }
    }
}

uint32_t crc32_compute(uint8_t const *p_data, uint32_t size, uint32_t const *p_crc)
{
    uint32_t crc;

    crc = (p_crc == NULL) ? 0xFFFFFFFF : ~(*p_crc);
    for (uint32_t i = 0; i < size; i++)
    {
        crc = crc ^ p_data[i];
        for (uint32_t j = 8; j > 0; j--)
        {
            crc = (crc >> 1) ^ (0xEDB88320U & ((crc & 1) ? 0xFFFFFFFF : 0));
        }
    }
    return ~crc;
}

void ciot_copy_data(uint8_t *destiny, uint8_t *source, int size, bool reverse)
{
    for (int i = 0; i < size; i++)
    {
        int idx = reverse ? (size - i - 1) : i;
        destiny[i] = source[idx];
    }
}