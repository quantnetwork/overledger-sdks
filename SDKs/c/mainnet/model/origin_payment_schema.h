/*
 * origin_payment_schema.h
 *
 * List of where this transaction is coming from
 */

#ifndef _origin_payment_schema_H_
#define _origin_payment_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct origin_payment_schema_t origin_payment_schema_t;




typedef struct origin_payment_schema_t {
    char *origin_id; // string

} origin_payment_schema_t;

origin_payment_schema_t *origin_payment_schema_create(
    char *origin_id
);

void origin_payment_schema_free(origin_payment_schema_t *origin_payment_schema);

origin_payment_schema_t *origin_payment_schema_parseFromJSON(cJSON *origin_payment_schemaJSON);

cJSON *origin_payment_schema_convertToJSON(origin_payment_schema_t *origin_payment_schema);

#endif /* _origin_payment_schema_H_ */

