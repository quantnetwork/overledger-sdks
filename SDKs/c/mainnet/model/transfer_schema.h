/*
 * transfer_schema.h
 *
 * 
 */

#ifndef _transfer_schema_H_
#define _transfer_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transfer_schema_t transfer_schema_t;




typedef struct transfer_schema_t {
    char *token_id; // string
    char *token_name; // string

} transfer_schema_t;

transfer_schema_t *transfer_schema_create(
    char *token_id,
    char *token_name
);

void transfer_schema_free(transfer_schema_t *transfer_schema);

transfer_schema_t *transfer_schema_parseFromJSON(cJSON *transfer_schemaJSON);

cJSON *transfer_schema_convertToJSON(transfer_schema_t *transfer_schema);

#endif /* _transfer_schema_H_ */

