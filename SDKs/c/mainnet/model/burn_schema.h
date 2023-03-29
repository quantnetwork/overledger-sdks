/*
 * burn_schema.h
 *
 * 
 */

#ifndef _burn_schema_H_
#define _burn_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct burn_schema_t burn_schema_t;




typedef struct burn_schema_t {
    char *amount; // string
    char *unit; // string

} burn_schema_t;

burn_schema_t *burn_schema_create(
    char *amount,
    char *unit
);

void burn_schema_free(burn_schema_t *burn_schema);

burn_schema_t *burn_schema_parseFromJSON(cJSON *burn_schemaJSON);

cJSON *burn_schema_convertToJSON(burn_schema_t *burn_schema);

#endif /* _burn_schema_H_ */

