/*
 * destination_payment_schema.h
 *
 * The Destination of this transaction
 */

#ifndef _destination_payment_schema_H_
#define _destination_payment_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct destination_payment_schema_t destination_payment_schema_t;

#include "payment_schema.h"



typedef struct destination_payment_schema_t {
    struct payment_schema_t *payment; //model
    char *destination_id; // string

} destination_payment_schema_t;

destination_payment_schema_t *destination_payment_schema_create(
    payment_schema_t *payment,
    char *destination_id
);

void destination_payment_schema_free(destination_payment_schema_t *destination_payment_schema);

destination_payment_schema_t *destination_payment_schema_parseFromJSON(cJSON *destination_payment_schemaJSON);

cJSON *destination_payment_schema_convertToJSON(destination_payment_schema_t *destination_payment_schema);

#endif /* _destination_payment_schema_H_ */

