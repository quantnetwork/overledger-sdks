/*
 * update_address_monitoring_schema.h
 *
 * 
 */

#ifndef _update_address_monitoring_schema_H_
#define _update_address_monitoring_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_address_monitoring_schema_t update_address_monitoring_schema_t;

#include "resource_monitoring_address_details.h"
#include "resource_monitoring_details.h"



typedef struct update_address_monitoring_schema_t {
    struct resource_monitoring_address_details_t *address_monitoring_details; //model
    struct resource_monitoring_details_t *resource_monitoring; //model

} update_address_monitoring_schema_t;

update_address_monitoring_schema_t *update_address_monitoring_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
);

void update_address_monitoring_schema_free(update_address_monitoring_schema_t *update_address_monitoring_schema);

update_address_monitoring_schema_t *update_address_monitoring_schema_parseFromJSON(cJSON *update_address_monitoring_schemaJSON);

cJSON *update_address_monitoring_schema_convertToJSON(update_address_monitoring_schema_t *update_address_monitoring_schema);

#endif /* _update_address_monitoring_schema_H_ */

