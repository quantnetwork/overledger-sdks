/*
 * smart_contract_search_destination_schema.h
 *
 * 
 */

#ifndef _smart_contract_search_destination_schema_H_
#define _smart_contract_search_destination_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_search_destination_schema_t smart_contract_search_destination_schema_t;

#include "smart_contract_search_schema.h"



typedef struct smart_contract_search_destination_schema_t {
    struct smart_contract_search_schema_t *smart_contract; //model

} smart_contract_search_destination_schema_t;

smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_create(
    smart_contract_search_schema_t *smart_contract
);

void smart_contract_search_destination_schema_free(smart_contract_search_destination_schema_t *smart_contract_search_destination_schema);

smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_parseFromJSON(cJSON *smart_contract_search_destination_schemaJSON);

cJSON *smart_contract_search_destination_schema_convertToJSON(smart_contract_search_destination_schema_t *smart_contract_search_destination_schema);

#endif /* _smart_contract_search_destination_schema_H_ */

