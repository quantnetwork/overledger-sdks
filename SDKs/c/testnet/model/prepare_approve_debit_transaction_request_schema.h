/*
 * prepare_approve_debit_transaction_request_schema.h
 *
 * 
 */

#ifndef _prepare_approve_debit_transaction_request_schema_H_
#define _prepare_approve_debit_transaction_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_approve_debit_transaction_request_schema_t prepare_approve_debit_transaction_request_schema_t;

#include "approve_request_details_schema.h"
#include "location.h"

// Enum TYPE for prepare_approve_debit_transaction_request_schema

typedef enum  { quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_NULL = 0, quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_Payment, quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_Transfer, quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_Contract Invoke } quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_e;

char* prepare_approve_debit_transaction_request_schema_type_ToString(quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_e type);

quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_e prepare_approve_debit_transaction_request_schema_type_FromString(char* type);

// Enum URGENCY for prepare_approve_debit_transaction_request_schema

typedef enum  { quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_NULL = 0, quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_Normal, quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_Fast, quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_Urgent } quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_e;

char* prepare_approve_debit_transaction_request_schema_urgency_ToString(quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_e urgency);

quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_e prepare_approve_debit_transaction_request_schema_urgency_FromString(char* urgency);



typedef struct prepare_approve_debit_transaction_request_schema_t {
    struct location_t *location; //model
    quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_e type; //enum
    quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_e urgency; //enum
    struct approve_request_details_schema_t *request_details; //model

} prepare_approve_debit_transaction_request_schema_t;

prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema_create(
    location_t *location,
    quant_overledger_api_prepare_approve_debit_transaction_request_schema_TYPE_e type,
    quant_overledger_api_prepare_approve_debit_transaction_request_schema_URGENCY_e urgency,
    approve_request_details_schema_t *request_details
);

void prepare_approve_debit_transaction_request_schema_free(prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema);

prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema_parseFromJSON(cJSON *prepare_approve_debit_transaction_request_schemaJSON);

cJSON *prepare_approve_debit_transaction_request_schema_convertToJSON(prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema);

#endif /* _prepare_approve_debit_transaction_request_schema_H_ */

