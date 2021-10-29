/*
 * prepare_transaction_response.h
 *
 * 
 */

#ifndef _prepare_transaction_response_H_
#define _prepare_transaction_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_transaction_response_t prepare_transaction_response_t;

#include "fee.h"
#include "object.h"



typedef struct prepare_transaction_response_t {
    struct fee_t *gateway_fee; //model
    char *request_id; // string
    struct fee_t *dlt_fee; //model
    object_t *native_data; //object

} prepare_transaction_response_t;

prepare_transaction_response_t *prepare_transaction_response_create(
    fee_t *gateway_fee,
    char *request_id,
    fee_t *dlt_fee,
    object_t *native_data
);

void prepare_transaction_response_free(prepare_transaction_response_t *prepare_transaction_response);

prepare_transaction_response_t *prepare_transaction_response_parseFromJSON(cJSON *prepare_transaction_responseJSON);

cJSON *prepare_transaction_response_convertToJSON(prepare_transaction_response_t *prepare_transaction_response);

#endif /* _prepare_transaction_response_H_ */

