/*
 * smart_contract_request_details_origin.h
 *
 * 
 */

#ifndef _smart_contract_request_details_origin_H_
#define _smart_contract_request_details_origin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_request_details_origin_t smart_contract_request_details_origin_t;




typedef struct smart_contract_request_details_origin_t {
    char *origin_id; // string

} smart_contract_request_details_origin_t;

smart_contract_request_details_origin_t *smart_contract_request_details_origin_create(
    char *origin_id
);

void smart_contract_request_details_origin_free(smart_contract_request_details_origin_t *smart_contract_request_details_origin);

smart_contract_request_details_origin_t *smart_contract_request_details_origin_parseFromJSON(cJSON *smart_contract_request_details_originJSON);

cJSON *smart_contract_request_details_origin_convertToJSON(smart_contract_request_details_origin_t *smart_contract_request_details_origin);

#endif /* _smart_contract_request_details_origin_H_ */

