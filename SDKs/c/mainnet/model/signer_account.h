/*
 * signer_account.h
 *
 * 
 */

#ifndef _signer_account_H_
#define _signer_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signer_account_t signer_account_t;




typedef struct signer_account_t {
    char *account_id; // string

} signer_account_t;

signer_account_t *signer_account_create(
    char *account_id
);

void signer_account_free(signer_account_t *signer_account);

signer_account_t *signer_account_parseFromJSON(cJSON *signer_accountJSON);

cJSON *signer_account_convertToJSON(signer_account_t *signer_account);

#endif /* _signer_account_H_ */

