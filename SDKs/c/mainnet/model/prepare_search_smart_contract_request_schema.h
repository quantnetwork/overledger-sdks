/*
 * prepare_search_smart_contract_request_schema.h
 *
 * 
 */

#ifndef _prepare_search_smart_contract_request_schema_H_
#define _prepare_search_smart_contract_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_search_smart_contract_request_schema_t prepare_search_smart_contract_request_schema_t;

#include "location.h"
#include "smart_contract_search_request_details.h"



typedef struct prepare_search_smart_contract_request_schema_t {
    struct smart_contract_search_request_details_t *request_details; //model
    struct location_t *location; //model

} prepare_search_smart_contract_request_schema_t;

prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_create(
    smart_contract_search_request_details_t *request_details,
    location_t *location
);

void prepare_search_smart_contract_request_schema_free(prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema);

prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_parseFromJSON(cJSON *prepare_search_smart_contract_request_schemaJSON);

cJSON *prepare_search_smart_contract_request_schema_convertToJSON(prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema);

#endif /* _prepare_search_smart_contract_request_schema_H_ */

