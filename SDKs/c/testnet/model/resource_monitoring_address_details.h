/*
 * resource_monitoring_address_details.h
 *
 * 
 */

#ifndef _resource_monitoring_address_details_H_
#define _resource_monitoring_address_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_address_details_t resource_monitoring_address_details_t;




typedef struct resource_monitoring_address_details_t {
    char *address_id; // string

} resource_monitoring_address_details_t;

resource_monitoring_address_details_t *resource_monitoring_address_details_create(
    char *address_id
);

void resource_monitoring_address_details_free(resource_monitoring_address_details_t *resource_monitoring_address_details);

resource_monitoring_address_details_t *resource_monitoring_address_details_parseFromJSON(cJSON *resource_monitoring_address_detailsJSON);

cJSON *resource_monitoring_address_details_convertToJSON(resource_monitoring_address_details_t *resource_monitoring_address_details);

#endif /* _resource_monitoring_address_details_H_ */

