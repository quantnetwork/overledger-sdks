/*
 * prepare_and_execute_overledger_error_response.h
 *
 * 
 */

#ifndef _prepare_and_execute_overledger_error_response_H_
#define _prepare_and_execute_overledger_error_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_execute_overledger_error_response_t prepare_and_execute_overledger_error_response_t;




typedef struct prepare_and_execute_overledger_error_response_t {
    char *code; // string
    char *description; // string
    char *category; // string

} prepare_and_execute_overledger_error_response_t;

prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_create(
    char *code,
    char *description,
    char *category
);

void prepare_and_execute_overledger_error_response_free(prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response);

prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_parseFromJSON(cJSON *prepare_and_execute_overledger_error_responseJSON);

cJSON *prepare_and_execute_overledger_error_response_convertToJSON(prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response);

#endif /* _prepare_and_execute_overledger_error_response_H_ */

