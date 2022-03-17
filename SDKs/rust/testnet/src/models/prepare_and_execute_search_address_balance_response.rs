/*
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PrepareAndExecuteSearchAddressBalanceResponse {
    #[serde(rename = "balances", skip_serializing_if = "Option::is_none")]
    pub balances: Option<Vec<crate::models::PrepareAndExecuteBalanceDetails>>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::Location>>,
    #[serde(rename = "timestamp", skip_serializing_if = "Option::is_none")]
    pub timestamp: Option<String>,
    #[serde(rename = "addressId", skip_serializing_if = "Option::is_none")]
    pub address_id: Option<String>,
}

impl PrepareAndExecuteSearchAddressBalanceResponse {
    pub fn new() -> PrepareAndExecuteSearchAddressBalanceResponse {
        PrepareAndExecuteSearchAddressBalanceResponse {
            balances: None,
            location: None,
            timestamp: None,
            address_id: None,
        }
    }
}


