/*
 * smart_contract_invoke_request_details_schema.h
 *
 * 
 */

#ifndef _smart_contract_invoke_request_details_schema_H_
#define _smart_contract_invoke_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_invoke_request_details_schema_t smart_contract_invoke_request_details_schema_t;

#include "smart_contract_destination_schema.h"
#include "smart_contract_request_details_origin.h"



typedef struct smart_contract_invoke_request_details_schema_t {
    list_t *destination; //nonprimitive container
    list_t *origin; //nonprimitive container

} smart_contract_invoke_request_details_schema_t;

smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_create(
    list_t *destination,
    list_t *origin
);

void smart_contract_invoke_request_details_schema_free(smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema);

smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_parseFromJSON(cJSON *smart_contract_invoke_request_details_schemaJSON);

cJSON *smart_contract_invoke_request_details_schema_convertToJSON(smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema);

#endif /* _smart_contract_invoke_request_details_schema_H_ */

