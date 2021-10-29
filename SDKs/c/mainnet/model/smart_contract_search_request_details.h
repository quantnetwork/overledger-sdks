/*
 * smart_contract_search_request_details.h
 *
 * 
 */

#ifndef _smart_contract_search_request_details_H_
#define _smart_contract_search_request_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_search_request_details_t smart_contract_search_request_details_t;

#include "smart_contract_search_destination_schema.h"



typedef struct smart_contract_search_request_details_t {
    list_t *destination; //nonprimitive container

} smart_contract_search_request_details_t;

smart_contract_search_request_details_t *smart_contract_search_request_details_create(
    list_t *destination
);

void smart_contract_search_request_details_free(smart_contract_search_request_details_t *smart_contract_search_request_details);

smart_contract_search_request_details_t *smart_contract_search_request_details_parseFromJSON(cJSON *smart_contract_search_request_detailsJSON);

cJSON *smart_contract_search_request_details_convertToJSON(smart_contract_search_request_details_t *smart_contract_search_request_details);

#endif /* _smart_contract_search_request_details_H_ */

