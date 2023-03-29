/*
 * payer.h
 *
 * Where is this transaction coming from
 */

#ifndef _payer_H_
#define _payer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payer_t payer_t;




typedef struct payer_t {
    char *payer_id; // string

} payer_t;

payer_t *payer_create(
    char *payer_id
);

void payer_free(payer_t *payer);

payer_t *payer_parseFromJSON(cJSON *payerJSON);

cJSON *payer_convertToJSON(payer_t *payer);

#endif /* _payer_H_ */

