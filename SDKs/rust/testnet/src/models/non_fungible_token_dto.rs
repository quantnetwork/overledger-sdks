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
pub struct NonFungibleTokenDto {
    #[serde(rename = "functions", skip_serializing_if = "Option::is_none")]
    pub functions: Option<Vec<crate::models::TierFunctionDto>>,
    #[serde(rename = "tokenName", skip_serializing_if = "Option::is_none")]
    pub token_name: Option<String>,
    #[serde(rename = "smartContractAddress", skip_serializing_if = "Option::is_none")]
    pub smart_contract_address: Option<String>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::LocationDto>>,
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    #[serde(rename = "tokenType", skip_serializing_if = "Option::is_none")]
    pub token_type: Option<String>,
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
}

impl NonFungibleTokenDto {
    pub fn new() -> NonFungibleTokenDto {
        NonFungibleTokenDto {
            functions: None,
            token_name: None,
            smart_contract_address: None,
            location: None,
            id: None,
            token_type: None,
            url: None,
        }
    }
}

