/*
 * pagination.h
 *
 * 
 */

#ifndef _pagination_H_
#define _pagination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pagination_t pagination_t;




typedef struct pagination_t {
    int size; //numeric
    int total; //numeric
    int page; //numeric

} pagination_t;

pagination_t *pagination_create(
    int size,
    int total,
    int page
);

void pagination_free(pagination_t *pagination);

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON);

cJSON *pagination_convertToJSON(pagination_t *pagination);

#endif /* _pagination_H_ */

