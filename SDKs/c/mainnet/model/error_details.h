/*
 * error_details.h
 *
 * 
 */

#ifndef _error_details_H_
#define _error_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct error_details_t error_details_t;




typedef struct error_details_t {
    char *code; // string
    char *description; // string
    char *category; // string

} error_details_t;

error_details_t *error_details_create(
    char *code,
    char *description,
    char *category
);

void error_details_free(error_details_t *error_details);

error_details_t *error_details_parseFromJSON(cJSON *error_detailsJSON);

cJSON *error_details_convertToJSON(error_details_t *error_details);

#endif /* _error_details_H_ */

