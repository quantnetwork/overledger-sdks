/*
 * address_balance_response.h
 *
 * 
 */

#ifndef _address_balance_response_H_
#define _address_balance_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_balance_response_t address_balance_response_t;




typedef struct address_balance_response_t {
    char *unit; // string
    double value; //numeric
    char *address_id; // string

} address_balance_response_t;

address_balance_response_t *address_balance_response_create(
    char *unit,
    double value,
    char *address_id
);

void address_balance_response_free(address_balance_response_t *address_balance_response);

address_balance_response_t *address_balance_response_parseFromJSON(cJSON *address_balance_responseJSON);

cJSON *address_balance_response_convertToJSON(address_balance_response_t *address_balance_response);

#endif /* _address_balance_response_H_ */

