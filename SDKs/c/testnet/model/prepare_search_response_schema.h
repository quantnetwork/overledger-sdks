/*
 * prepare_search_response_schema.h
 *
 * 
 */

#ifndef _prepare_search_response_schema_H_
#define _prepare_search_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_search_response_schema_t prepare_search_response_schema_t;

#include "fee.h"



typedef struct prepare_search_response_schema_t {
    struct fee_t *gateway_fee; //model
    char *request_id; // string

} prepare_search_response_schema_t;

prepare_search_response_schema_t *prepare_search_response_schema_create(
    fee_t *gateway_fee,
    char *request_id
);

void prepare_search_response_schema_free(prepare_search_response_schema_t *prepare_search_response_schema);

prepare_search_response_schema_t *prepare_search_response_schema_parseFromJSON(cJSON *prepare_search_response_schemaJSON);

cJSON *prepare_search_response_schema_convertToJSON(prepare_search_response_schema_t *prepare_search_response_schema);

#endif /* _prepare_search_response_schema_H_ */

