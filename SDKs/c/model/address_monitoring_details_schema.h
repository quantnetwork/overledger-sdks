/*
 * address_monitoring_details_schema.h
 *
 * 
 */

#ifndef _address_monitoring_details_schema_H_
#define _address_monitoring_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_monitoring_details_schema_t address_monitoring_details_schema_t;

#include "location.h"
#include "resource_monitored_address_details.h"



typedef struct address_monitoring_details_schema_t {
    struct location_t *location; //model
    struct resource_monitored_address_details_t *address_details; //model
    char *type; // string
    char *timestamp; //date time

} address_monitoring_details_schema_t;

address_monitoring_details_schema_t *address_monitoring_details_schema_create(
    location_t *location,
    resource_monitored_address_details_t *address_details,
    char *type,
    char *timestamp
);

void address_monitoring_details_schema_free(address_monitoring_details_schema_t *address_monitoring_details_schema);

address_monitoring_details_schema_t *address_monitoring_details_schema_parseFromJSON(cJSON *address_monitoring_details_schemaJSON);

cJSON *address_monitoring_details_schema_convertToJSON(address_monitoring_details_schema_t *address_monitoring_details_schema);

#endif /* _address_monitoring_details_schema_H_ */

