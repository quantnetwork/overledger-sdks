/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct AutoExecuteSearchAddressBalanceResponseSchema {
    #[serde(rename = "prepareAndExecuteOverledgerErrorResponse", skip_serializing_if = "Option::is_none")]
    pub prepare_and_execute_overledger_error_response: Option<Box<crate::models::PrepareAndExecuteOverledgerErrorResponse>>,
    #[serde(rename = "executionAddressBalanceSearchResponse", skip_serializing_if = "Option::is_none")]
    pub execution_address_balance_search_response: Option<Box<crate::models::PrepareAndExecuteSearchAddressBalanceResponse>>,
    #[serde(rename = "preparationAddressBalanceSearchResponse", skip_serializing_if = "Option::is_none")]
    pub preparation_address_balance_search_response: Option<Box<crate::models::PrepareSearchResponseSchema>>,
}

impl AutoExecuteSearchAddressBalanceResponseSchema {
    pub fn new() -> AutoExecuteSearchAddressBalanceResponseSchema {
        AutoExecuteSearchAddressBalanceResponseSchema {
            prepare_and_execute_overledger_error_response: None,
            execution_address_balance_search_response: None,
            preparation_address_balance_search_response: None,
        }
    }
}


