/*
 * internal_server_error_schema.h
 *
 * 
 */

#ifndef _internal_server_error_schema_H_
#define _internal_server_error_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct internal_server_error_schema_t internal_server_error_schema_t;




typedef struct internal_server_error_schema_t {
    char *path; // string
    char *error; // string
    char *message; // string
    char *timestamp; //date time
    int status; //numeric

} internal_server_error_schema_t;

internal_server_error_schema_t *internal_server_error_schema_create(
    char *path,
    char *error,
    char *message,
    char *timestamp,
    int status
);

void internal_server_error_schema_free(internal_server_error_schema_t *internal_server_error_schema);

internal_server_error_schema_t *internal_server_error_schema_parseFromJSON(cJSON *internal_server_error_schemaJSON);

cJSON *internal_server_error_schema_convertToJSON(internal_server_error_schema_t *internal_server_error_schema);

#endif /* _internal_server_error_schema_H_ */

