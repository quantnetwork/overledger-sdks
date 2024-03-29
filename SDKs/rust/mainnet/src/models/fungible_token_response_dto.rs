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
pub struct FungibleTokenResponseDto {
    #[serde(rename = "documentationUrl", skip_serializing_if = "Option::is_none")]
    pub documentation_url: Option<String>,
    #[serde(rename = "unit", skip_serializing_if = "Option::is_none")]
    pub unit: Option<String>,
    #[serde(rename = "decimalPlaces", skip_serializing_if = "Option::is_none")]
    pub decimal_places: Option<i32>,
    #[serde(rename = "functions", skip_serializing_if = "Option::is_none")]
    pub functions: Option<Vec<crate::models::FunctionDto>>,
    #[serde(rename = "contractType", skip_serializing_if = "Option::is_none")]
    pub contract_type: Option<ContractType>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::LocationDto>>,
    #[serde(rename = "smartContractId", skip_serializing_if = "Option::is_none")]
    pub smart_contract_id: Option<String>,
}

impl FungibleTokenResponseDto {
    pub fn new() -> FungibleTokenResponseDto {
        FungibleTokenResponseDto {
            documentation_url: None,
            unit: None,
            decimal_places: None,
            functions: None,
            contract_type: None,
            location: None,
            smart_contract_id: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ContractType {
    #[serde(rename = "ERC20")]
    ERC20,
    #[serde(rename = "QRC20")]
    QRC20,
}

