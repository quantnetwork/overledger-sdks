/*
 * payer_credit_schema.h
 *
 * Who are the payers of this transaction
 */

#ifndef _payer_credit_schema_H_
#define _payer_credit_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payer_credit_schema_t payer_credit_schema_t;




typedef struct payer_credit_schema_t {
    char *payer_id; // string

} payer_credit_schema_t;

payer_credit_schema_t *payer_credit_schema_create(
    char *payer_id
);

void payer_credit_schema_free(payer_credit_schema_t *payer_credit_schema);

payer_credit_schema_t *payer_credit_schema_parseFromJSON(cJSON *payer_credit_schemaJSON);

cJSON *payer_credit_schema_convertToJSON(payer_credit_schema_t *payer_credit_schema);

#endif /* _payer_credit_schema_H_ */

