/*
 * resource_monitoring_address_schema.h
 *
 * 
 */

#ifndef _resource_monitoring_address_schema_H_
#define _resource_monitoring_address_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_address_schema_t resource_monitoring_address_schema_t;

#include "resource_monitoring_address_details.h"
#include "resource_monitoring_details.h"



typedef struct resource_monitoring_address_schema_t {
    struct resource_monitoring_address_details_t *address_monitoring_details; //model
    struct resource_monitoring_details_t *resource_monitoring; //model

} resource_monitoring_address_schema_t;

resource_monitoring_address_schema_t *resource_monitoring_address_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
);

void resource_monitoring_address_schema_free(resource_monitoring_address_schema_t *resource_monitoring_address_schema);

resource_monitoring_address_schema_t *resource_monitoring_address_schema_parseFromJSON(cJSON *resource_monitoring_address_schemaJSON);

cJSON *resource_monitoring_address_schema_convertToJSON(resource_monitoring_address_schema_t *resource_monitoring_address_schema);

#endif /* _resource_monitoring_address_schema_H_ */

