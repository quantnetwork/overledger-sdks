/*
 * payment_schema.h
 *
 * 
 */

#ifndef _payment_schema_H_
#define _payment_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_schema_t payment_schema_t;




typedef struct payment_schema_t {
    char *amount; // string
    char *unit; // string

} payment_schema_t;

payment_schema_t *payment_schema_create(
    char *amount,
    char *unit
);

void payment_schema_free(payment_schema_t *payment_schema);

payment_schema_t *payment_schema_parseFromJSON(cJSON *payment_schemaJSON);

cJSON *payment_schema_convertToJSON(payment_schema_t *payment_schema);

#endif /* _payment_schema_H_ */

