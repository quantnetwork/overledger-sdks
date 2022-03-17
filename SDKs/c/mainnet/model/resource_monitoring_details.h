/*
 * resource_monitoring_details.h
 *
 * 
 */

#ifndef _resource_monitoring_details_H_
#define _resource_monitoring_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_details_t resource_monitoring_details_t;

#include "location.h"
#include "status.h"



typedef struct resource_monitoring_details_t {
    char *resource_monitoring_id; // string
    struct location_t *location; //model
    char *type; // string
    char *timestamp; // string
    struct status_t *status; //model

} resource_monitoring_details_t;

resource_monitoring_details_t *resource_monitoring_details_create(
    char *resource_monitoring_id,
    location_t *location,
    char *type,
    char *timestamp,
    status_t *status
);

void resource_monitoring_details_free(resource_monitoring_details_t *resource_monitoring_details);

resource_monitoring_details_t *resource_monitoring_details_parseFromJSON(cJSON *resource_monitoring_detailsJSON);

cJSON *resource_monitoring_details_convertToJSON(resource_monitoring_details_t *resource_monitoring_details);

#endif /* _resource_monitoring_details_H_ */

