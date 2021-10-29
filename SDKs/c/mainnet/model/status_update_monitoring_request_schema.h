/*
 * status_update_monitoring_request_schema.h
 *
 * 
 */

#ifndef _status_update_monitoring_request_schema_H_
#define _status_update_monitoring_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_update_monitoring_request_schema_t status_update_monitoring_request_schema_t;

#include "status_update_schema.h"



typedef struct status_update_monitoring_request_schema_t {
    struct status_update_schema_t *status_update; //model

} status_update_monitoring_request_schema_t;

status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_create(
    status_update_schema_t *status_update
);

void status_update_monitoring_request_schema_free(status_update_monitoring_request_schema_t *status_update_monitoring_request_schema);

status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_parseFromJSON(cJSON *status_update_monitoring_request_schemaJSON);

cJSON *status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema_t *status_update_monitoring_request_schema);

#endif /* _status_update_monitoring_request_schema_H_ */

