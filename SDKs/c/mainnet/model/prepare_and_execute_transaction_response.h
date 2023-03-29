/*
 * prepare_and_execute_transaction_response.h
 *
 * 
 */

#ifndef _prepare_and_execute_transaction_response_H_
#define _prepare_and_execute_transaction_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_execute_transaction_response_t prepare_and_execute_transaction_response_t;

#include "execute_search_transaction_response.h"
#include "prepare_and_execute_overledger_error_response.h"
#include "prepare_transaction_response.h"



typedef struct prepare_and_execute_transaction_response_t {
    struct prepare_transaction_response_t *preparation_transaction_search_response; //model
    struct execute_search_transaction_response_t *execution_transaction_search_response; //model
    struct prepare_and_execute_overledger_error_response_t *execution_transaction_search_overledger_error_response; //model

} prepare_and_execute_transaction_response_t;

prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_create(
    prepare_transaction_response_t *preparation_transaction_search_response,
    execute_search_transaction_response_t *execution_transaction_search_response,
    prepare_and_execute_overledger_error_response_t *execution_transaction_search_overledger_error_response
);

void prepare_and_execute_transaction_response_free(prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response);

prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_parseFromJSON(cJSON *prepare_and_execute_transaction_responseJSON);

cJSON *prepare_and_execute_transaction_response_convertToJSON(prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response);

#endif /* _prepare_and_execute_transaction_response_H_ */

