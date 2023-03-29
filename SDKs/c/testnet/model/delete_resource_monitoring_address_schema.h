/*
 * delete_resource_monitoring_address_schema.h
 *
 * 
 */

#ifndef _delete_resource_monitoring_address_schema_H_
#define _delete_resource_monitoring_address_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delete_resource_monitoring_address_schema_t delete_resource_monitoring_address_schema_t;

#include "resource_monitoring_address_details.h"
#include "resource_monitoring_details.h"



typedef struct delete_resource_monitoring_address_schema_t {
    struct resource_monitoring_address_details_t *address_monitoring_details; //model
    struct resource_monitoring_details_t *resource_monitoring; //model

} delete_resource_monitoring_address_schema_t;

delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
);

void delete_resource_monitoring_address_schema_free(delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema);

delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_parseFromJSON(cJSON *delete_resource_monitoring_address_schemaJSON);

cJSON *delete_resource_monitoring_address_schema_convertToJSON(delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema);

#endif /* _delete_resource_monitoring_address_schema_H_ */

