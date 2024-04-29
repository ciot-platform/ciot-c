/**
 * @file ciot_serializer.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __CIOT_SERIALIZER__H__
#define __CIOT_SERIALIZER__H__

#include <inttypes.h>
#include "types/ciot_msg_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ciot_serializer *ciot_serializer_t;
typedef int (ciot_serializer_to_bytes_fn)(uint8_t *bytes, ciot_msg_t *msg);
typedef int (ciot_serializer_from_bytes_fn)(ciot_msg_t *msg, uint8_t *bytes, int size);

typedef enum ciot_serializer_type
{
    CIOT_SERIALIZER_TYPE_NONE,
    CIOT_SERIALIZER_TYPE_PROTOBUF,
    CIOT_SERIALIZER_TYPE_CUSTOM,
} ciot_serializer_type_t;

struct ciot_serializer
{
    ciot_serializer_type_t type;
    ciot_serializer_to_bytes_fn *to_bytes;
    ciot_serializer_from_bytes_fn *from_bytes;
};

int ciot_serializer_to_bytes(ciot_serializer_t self, uint8_t *bytes, ciot_msg_t *msg);
int ciot_serializer_from_bytes(ciot_serializer_t self, ciot_msg_t *msg, uint8_t *bytes, int size);

#ifdef __cplusplus
}
#endif

#endif  //!__CIOT_SERIALIZER__H__