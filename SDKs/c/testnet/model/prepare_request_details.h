/*
 * prepare_request_details.h
 *
 * 
 */

#ifndef _prepare_request_details_H_
#define _prepare_request_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_request_details_t prepare_request_details_t;

#include "account_details.h"
#include "additional_owner.h"
#include "alias_details.h"
#include "beneficiary.h"
#include "collector.h"
#include "creator.h"
#include "destination.h"
#include "lock_details.h"
#include "mandate.h"
#include "origin.h"
#include "owner.h"
#include "pagination.h"
#include "payee.h"
#include "payer.h"
#include "payment.h"
#include "receiver.h"
#include "sender.h"
#include "signer_account.h"



typedef struct prepare_request_details_t {
    list_t *mandate; //nonprimitive container
    struct alias_details_t *alias_details; //model
    struct pagination_t *pagination; //model
    list_t *origin; //nonprimitive container
    list_t *destination; //nonprimitive container
    char *token_name; // string
    char *block_search_type; // string
    list_t *payer; //nonprimitive container
    struct collector_t *collector; //model
    list_t *payee; //nonprimitive container
    struct additional_owner_t *additional_owner; //model
    struct owner_t *owner; //model
    struct creator_t *creator; //model
    list_t *receiver; //nonprimitive container
    char *token_id; // string
    char *message; // string
    struct lock_details_t *lock_details; //model
    char *block_id; // string
    char *account_id; // string
    char *token_unit; // string
    struct beneficiary_t *beneficiary; //model
    list_t *sender; //nonprimitive container
    struct account_details_t *account_details; //model
    char *overledger_signing_type; // string
    struct payment_t *total_payment_amount; //model
    struct signer_account_t *signer_account; //model

} prepare_request_details_t;

prepare_request_details_t *prepare_request_details_create(
    list_t *mandate,
    alias_details_t *alias_details,
    pagination_t *pagination,
    list_t *origin,
    list_t *destination,
    char *token_name,
    char *block_search_type,
    list_t *payer,
    collector_t *collector,
    list_t *payee,
    additional_owner_t *additional_owner,
    owner_t *owner,
    creator_t *creator,
    list_t *receiver,
    char *token_id,
    char *message,
    lock_details_t *lock_details,
    char *block_id,
    char *account_id,
    char *token_unit,
    beneficiary_t *beneficiary,
    list_t *sender,
    account_details_t *account_details,
    char *overledger_signing_type,
    payment_t *total_payment_amount,
    signer_account_t *signer_account
);

void prepare_request_details_free(prepare_request_details_t *prepare_request_details);

prepare_request_details_t *prepare_request_details_parseFromJSON(cJSON *prepare_request_detailsJSON);

cJSON *prepare_request_details_convertToJSON(prepare_request_details_t *prepare_request_details);

#endif /* _prepare_request_details_H_ */

