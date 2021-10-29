/*
 * utxo_timestamp_schema.h
 *
 * 
 */

#ifndef _utxo_timestamp_schema_H_
#define _utxo_timestamp_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct utxo_timestamp_schema_t utxo_timestamp_schema_t;




typedef struct utxo_timestamp_schema_t {
    char *nano; // string
    char *epoch_second; // string

} utxo_timestamp_schema_t;

utxo_timestamp_schema_t *utxo_timestamp_schema_create(
    char *nano,
    char *epoch_second
);

void utxo_timestamp_schema_free(utxo_timestamp_schema_t *utxo_timestamp_schema);

utxo_timestamp_schema_t *utxo_timestamp_schema_parseFromJSON(cJSON *utxo_timestamp_schemaJSON);

cJSON *utxo_timestamp_schema_convertToJSON(utxo_timestamp_schema_t *utxo_timestamp_schema);

#endif /* _utxo_timestamp_schema_H_ */

