/*
 * location_dto.h
 *
 * 
 */

#ifndef _location_dto_H_
#define _location_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct location_dto_t location_dto_t;




typedef struct location_dto_t {
    char *technology; // string
    char *network; // string

} location_dto_t;

location_dto_t *location_dto_create(
    char *technology,
    char *network
);

void location_dto_free(location_dto_t *location_dto);

location_dto_t *location_dto_parseFromJSON(cJSON *location_dtoJSON);

cJSON *location_dto_convertToJSON(location_dto_t *location_dto);

#endif /* _location_dto_H_ */

