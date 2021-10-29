/*
 * address_monitoring_request_schema.h
 *
 * 
 */

#ifndef _address_monitoring_request_schema_H_
#define _address_monitoring_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_monitoring_request_schema_t address_monitoring_request_schema_t;

#include "location.h"



typedef struct address_monitoring_request_schema_t {
    char *call_back_url; // string
    struct location_t *location; //model
    char *address_id; // string

} address_monitoring_request_schema_t;

address_monitoring_request_schema_t *address_monitoring_request_schema_create(
    char *call_back_url,
    location_t *location,
    char *address_id
);

void address_monitoring_request_schema_free(address_monitoring_request_schema_t *address_monitoring_request_schema);

address_monitoring_request_schema_t *address_monitoring_request_schema_parseFromJSON(cJSON *address_monitoring_request_schemaJSON);

cJSON *address_monitoring_request_schema_convertToJSON(address_monitoring_request_schema_t *address_monitoring_request_schema);

#endif /* _address_monitoring_request_schema_H_ */

