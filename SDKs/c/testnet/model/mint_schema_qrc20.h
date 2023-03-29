/*
 * mint_schema_qrc20.h
 *
 * 
 */

#ifndef _mint_schema_qrc20_H_
#define _mint_schema_qrc20_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mint_schema_qrc20_t mint_schema_qrc20_t;




typedef struct mint_schema_qrc20_t {
    char *amount; // string
    char *unit; // string

} mint_schema_qrc20_t;

mint_schema_qrc20_t *mint_schema_qrc20_create(
    char *amount,
    char *unit
);

void mint_schema_qrc20_free(mint_schema_qrc20_t *mint_schema_qrc20);

mint_schema_qrc20_t *mint_schema_qrc20_parseFromJSON(cJSON *mint_schema_qrc20JSON);

cJSON *mint_schema_qrc20_convertToJSON(mint_schema_qrc20_t *mint_schema_qrc20);

#endif /* _mint_schema_qrc20_H_ */

