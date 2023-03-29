/*
 * prepare_request.h
 *
 * 
 */

#ifndef _prepare_request_H_
#define _prepare_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_request_t prepare_request_t;

#include "location.h"
#include "prepare_request_details.h"
#include "smart_contract_tag.h"



typedef struct prepare_request_t {
    char *api_lookup_path; // string
    list_t *smart_contract_tag; //nonprimitive container
    char *urgency; // string
    struct prepare_request_details_t *request_details; //model
    char *smart_contract_address; // string
    struct location_t *location; //model
    char *type; // string

} prepare_request_t;

prepare_request_t *prepare_request_create(
    char *api_lookup_path,
    list_t *smart_contract_tag,
    char *urgency,
    prepare_request_details_t *request_details,
    char *smart_contract_address,
    location_t *location,
    char *type
);

void prepare_request_free(prepare_request_t *prepare_request);

prepare_request_t *prepare_request_parseFromJSON(cJSON *prepare_requestJSON);

cJSON *prepare_request_convertToJSON(prepare_request_t *prepare_request);

#endif /* _prepare_request_H_ */

