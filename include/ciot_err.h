/**
 * @file ciot_err.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __CIOT_ERR__H__
#define __CIOT_ERR__H__

#ifdef __cplusplus
extern "C" {
#endif

#include "ciot_log.h"

#define CIOT_ERR_BASE 0x0

#define CIOT_ERROR_LOG(x) CIOT_LOGE(TAG, "%s:%d %s", __FILE__, __LINE__, ciot_err_to_message(ciot_err))

#define CIOT_NULL_CHECK(x) \
    if (x == NULL)         \
    return CIOT_ERR_NULL_ARG

#define CIOT_PTYPE_CHECK(x, p_type) if(x->type != p_type) return CIOT_ERR_INVALID_TYPE

#define CIOT_ERROR_PRINT(x)           \
    do                                \
    {                                 \
        ciot_err_t ciot_err = x;      \
        if (ciot_err != CIOT_OK)      \
        {                             \
            CIOT_ERROR_LOG(ciot_err); \
        }                             \
    } while (0)

#define CIOT_ERROR_RETURN(x)          \
    do                                \
    {                                 \
        ciot_err_t ciot_err = x;      \
        if (ciot_err != CIOT_OK)      \
        {                             \
            CIOT_ERROR_LOG(ciot_err); \
            return ciot_err;          \
        }                             \
    } while (0)

typedef enum
{
    CIOT_FAIL = -1,
    CIOT_OK,
    CIOT_ERR_NULL_ARG = CIOT_ERR_BASE + 1,
    CIOT_ERR_INVALID_ID,
    CIOT_ERR_INVALID_TYPE,
    CIOT_ERR_OVERFLOW,
    CIOT_ERR_NOT_IMPLEMENTED,
    CIOT_ERR_NOT_SUPPORTED,
    CIOT_ERR_BUSY,
    CIOT_ERR_INVALID_STATE,
    CIOT_ERR_SERIALIZATION,
    CIOT_ERR_DESERIALIZATION,
    CIOT_ERR_SEND_DATA,
    CIOT_ERR_RECV_DATA,
    CIOT_ERR_INVALID_SIZE,
    CIOT_ERR_CLOSED,
    CIOT_ERR_NOT_FOUND,
    CIOT_ERR_VALIDATION_FAILED,
    CIOT_ERR_CONNECTION,
    CIOT_ERR_DISCONNECTION,
    CIOT_ERR_EXCEPTION,
    CIOT_ERR_INVALID_ARG,
    CIOT_ERR_NO_MEMORY,
    CIOT_ERR_TIMEOUT,
    CIOT_ERR_MONGOOSE,
    CIOT_ERR_IMPOSSIBLE_OP,
    CIOT_ERR_CHECKSUM,
    CIOT_ERR_PROTOCOL_VIOLATION,
} ciot_err_t;

const char *ciot_err_to_message(ciot_err_t err);

#ifdef __cplusplus
}
#endif

#endif //!__CIOT_ERR__H__