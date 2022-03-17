/*
 * prepare_and_execute_balance_details.h
 *
 * 
 */

#ifndef _prepare_and_execute_balance_details_H_
#define _prepare_and_execute_balance_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_execute_balance_details_t prepare_and_execute_balance_details_t;




typedef struct prepare_and_execute_balance_details_t {
    char *unit; // string
    char *amount; // string

} prepare_and_execute_balance_details_t;

prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_create(
    char *unit,
    char *amount
);

void prepare_and_execute_balance_details_free(prepare_and_execute_balance_details_t *prepare_and_execute_balance_details);

prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_parseFromJSON(cJSON *prepare_and_execute_balance_detailsJSON);

cJSON *prepare_and_execute_balance_details_convertToJSON(prepare_and_execute_balance_details_t *prepare_and_execute_balance_details);

#endif /* _prepare_and_execute_balance_details_H_ */

