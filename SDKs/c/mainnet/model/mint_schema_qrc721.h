/*
 * mint_schema_qrc721.h
 *
 * 
 */

#ifndef _mint_schema_qrc721_H_
#define _mint_schema_qrc721_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mint_schema_qrc721_t mint_schema_qrc721_t;




typedef struct mint_schema_qrc721_t {
    char *token_id; // string
    char *token_name; // string
    char *metadata; // string

} mint_schema_qrc721_t;

mint_schema_qrc721_t *mint_schema_qrc721_create(
    char *token_id,
    char *token_name,
    char *metadata
);

void mint_schema_qrc721_free(mint_schema_qrc721_t *mint_schema_qrc721);

mint_schema_qrc721_t *mint_schema_qrc721_parseFromJSON(cJSON *mint_schema_qrc721JSON);

cJSON *mint_schema_qrc721_convertToJSON(mint_schema_qrc721_t *mint_schema_qrc721);

#endif /* _mint_schema_qrc721_H_ */

