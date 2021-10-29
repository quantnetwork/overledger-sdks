/*
 * extra_fields.h
 *
 * 
 */

#ifndef _extra_fields_H_
#define _extra_fields_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extra_fields_t extra_fields_t;




typedef struct extra_fields_t {
    double required_signatures; //numeric

} extra_fields_t;

extra_fields_t *extra_fields_create(
    double required_signatures
);

void extra_fields_free(extra_fields_t *extra_fields);

extra_fields_t *extra_fields_parseFromJSON(cJSON *extra_fieldsJSON);

cJSON *extra_fields_convertToJSON(extra_fields_t *extra_fields);

#endif /* _extra_fields_H_ */

