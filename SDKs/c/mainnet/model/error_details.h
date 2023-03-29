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
    char *category; // string
    char *description; // string
    char *code; // string

} error_details_t;

error_details_t *error_details_create(
    char *category,
    char *description,
    char *code
);

void error_details_free(error_details_t *error_details);

error_details_t *error_details_parseFromJSON(cJSON *error_detailsJSON);

cJSON *error_details_convertToJSON(error_details_t *error_details);

#endif /* _error_details_H_ */

