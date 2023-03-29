/*
 * prepare_search_schema.h
 *
 * 
 */

#ifndef _prepare_search_schema_H_
#define _prepare_search_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_search_schema_t prepare_search_schema_t;

#include "location.h"



typedef struct prepare_search_schema_t {
    struct location_t *location; //model

} prepare_search_schema_t;

prepare_search_schema_t *prepare_search_schema_create(
    location_t *location
);

void prepare_search_schema_free(prepare_search_schema_t *prepare_search_schema);

prepare_search_schema_t *prepare_search_schema_parseFromJSON(cJSON *prepare_search_schemaJSON);

cJSON *prepare_search_schema_convertToJSON(prepare_search_schema_t *prepare_search_schema);

#endif /* _prepare_search_schema_H_ */

