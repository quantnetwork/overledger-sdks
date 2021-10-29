/*
 * destination_transfer_schema.h
 *
 * 
 */

#ifndef _destination_transfer_schema_H_
#define _destination_transfer_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct destination_transfer_schema_t destination_transfer_schema_t;

#include "transfer_schema.h"



typedef struct destination_transfer_schema_t {
    struct transfer_schema_t *transfer; //model
    char *destination_id; // string

} destination_transfer_schema_t;

destination_transfer_schema_t *destination_transfer_schema_create(
    transfer_schema_t *transfer,
    char *destination_id
);

void destination_transfer_schema_free(destination_transfer_schema_t *destination_transfer_schema);

destination_transfer_schema_t *destination_transfer_schema_parseFromJSON(cJSON *destination_transfer_schemaJSON);

cJSON *destination_transfer_schema_convertToJSON(destination_transfer_schema_t *destination_transfer_schema);

#endif /* _destination_transfer_schema_H_ */

