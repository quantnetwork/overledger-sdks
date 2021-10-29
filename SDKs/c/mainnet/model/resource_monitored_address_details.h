/*
 * resource_monitored_address_details.h
 *
 * 
 */

#ifndef _resource_monitored_address_details_H_
#define _resource_monitored_address_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitored_address_details_t resource_monitored_address_details_t;




typedef struct resource_monitored_address_details_t {
    char *address_id; // string

} resource_monitored_address_details_t;

resource_monitored_address_details_t *resource_monitored_address_details_create(
    char *address_id
);

void resource_monitored_address_details_free(resource_monitored_address_details_t *resource_monitored_address_details);

resource_monitored_address_details_t *resource_monitored_address_details_parseFromJSON(cJSON *resource_monitored_address_detailsJSON);

cJSON *resource_monitored_address_details_convertToJSON(resource_monitored_address_details_t *resource_monitored_address_details);

#endif /* _resource_monitored_address_details_H_ */

