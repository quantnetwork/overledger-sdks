/*
 * error_response_message.h
 *
 * 
 */

#ifndef _error_response_message_H_
#define _error_response_message_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct error_response_message_t error_response_message_t;

#include "object.h"



typedef struct error_response_message_t {
    int code; //numeric
    object_t *error_message_extra_details; //object
    int sub_code; //numeric
    char *log_trace_id; // string
    char *type; // string
    char *title; // string
    char *message; // string

} error_response_message_t;

error_response_message_t *error_response_message_create(
    int code,
    object_t *error_message_extra_details,
    int sub_code,
    char *log_trace_id,
    char *type,
    char *title,
    char *message
);

void error_response_message_free(error_response_message_t *error_response_message);

error_response_message_t *error_response_message_parseFromJSON(cJSON *error_response_messageJSON);

cJSON *error_response_message_convertToJSON(error_response_message_t *error_response_message);

#endif /* _error_response_message_H_ */

