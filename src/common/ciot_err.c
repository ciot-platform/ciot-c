/**
 * @file ciot_err.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "ciot_err.h"

#ifdef IDF_VER
#include "esp_err.h"
#endif

const char *ciot_err_to_message(ciot_err_t err)
{
    switch (err)
    {
        case CIOT_FAIL:
            return "ERR_FAIL";
        case CIOT_OK:
            return "ERR_OK";
        case CIOT_ERR_NULL_ARG:
            return "ERR_NULL_ARG";
        case CIOT_ERR_INVALID_ID:
            return "ERR_INVALID_ID";
        case CIOT_ERR_INVALID_TYPE:
            return "ERR_INVALID_TYPE";
        case CIOT_ERR_OVERFLOW:
            return "ERR_OVERFLOW";
        case CIOT_ERR_NOT_IMPLEMENTED:
            return "ERR_NOT_IMPLEMENTED";
        case CIOT_ERR_NOT_SUPPORTED:
            return "ERR_NOT_SUPPORTED";
        case CIOT_ERR_BUSY:
            return "ERR_BUSY";
        case CIOT_ERR_INVALID_STATE:
            return "ERR_INVALID_STATE";
        case CIOT_ERR_SERIALIZATION:
            return "ERR_SERIALIZATION";
        case CIOT_ERR_DESERIALIZATION:
            return "ERR_DESERIALIZATION";
        case CIOT_ERR_SEND_DATA:
            return "ERR_SEND_DATA";
        case CIOT_ERR_RECV_DATA:
            return "CIOT_ERR_RECV_DATA";
        case CIOT_ERR_INVALID_SIZE:
            return "ERR_INVALID_SIZE";
        case CIOT_ERR_CLOSED:
            return "ERR_CLOSED";
        case CIOT_ERR_NOT_FOUND:
            return "ERR_NOT_FOUND";
        case CIOT_ERR_VALIDATION_FAILED:
            return "ERR_VALIDATION_FAILED";
        case CIOT_ERR_CONNECTION:
            return "ERR_CONNECTION";
        case CIOT_ERR_DISCONNECTION:
            return "ERR_DISCONNECTION";
        case CIOT_ERR_EXCEPTION:
            return "ERR_EXCEPTION";
        case CIOT_ERR_INVALID_ARG:
            return "ERR_INVALID_ARG";
        case CIOT_ERR_NO_MEMORY:
            return "CIOT_ERR_NO_MEMORY";
        case CIOT_ERR_TIMEOUT:
            return "ERR_TIMEOUT";
        case CIOT_ERR_MONGOOSE:
            return "CIOT_ERR_MONGOOSE";
        case CIOT_ERR_IMPOSSIBLE_OP:
            return "CIOT_ERR_IMPOSSIBLE_OP";
        case CIOT_ERR_CHECKSUM:
            return "CIOT_ERR_CHECKSUM";
        case CIOT_ERR_PROTOCOL_VIOLATION:
            return "CIOT_ERR_PROTOCOL_VIOLATION";
    default:
#ifdef IDF_VER
    return esp_err_to_name(err);
#else
    return "UNKNOWN";
#endif
    }
}

