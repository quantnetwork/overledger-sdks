/*
 * execute_transaction_request.h
 *
 * 
 */

#ifndef _execute_transaction_request_H_
#define _execute_transaction_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_transaction_request_t execute_transaction_request_t;




typedef struct execute_transaction_request_t {
    char *request_id; // string
    char *_signed; // string

} execute_transaction_request_t;

execute_transaction_request_t *execute_transaction_request_create(
    char *request_id,
    char *_signed
);

void execute_transaction_request_free(execute_transaction_request_t *execute_transaction_request);

execute_transaction_request_t *execute_transaction_request_parseFromJSON(cJSON *execute_transaction_requestJSON);

cJSON *execute_transaction_request_convertToJSON(execute_transaction_request_t *execute_transaction_request);

#endif /* _execute_transaction_request_H_ */

