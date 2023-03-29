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
pub struct PrepareRequest {
    #[serde(rename = "apiLookupPath", skip_serializing_if = "Option::is_none")]
    pub api_lookup_path: Option<String>,
    #[serde(rename = "smartContractTag", skip_serializing_if = "Option::is_none")]
    pub smart_contract_tag: Option<Vec<crate::models::SmartContractTag>>,
    #[serde(rename = "urgency", skip_serializing_if = "Option::is_none")]
    pub urgency: Option<String>,
    #[serde(rename = "requestDetails", skip_serializing_if = "Option::is_none")]
    pub request_details: Option<Box<crate::models::PrepareRequestDetails>>,
    #[serde(rename = "smartContractAddress", skip_serializing_if = "Option::is_none")]
    pub smart_contract_address: Option<String>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::Location>>,
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub _type: Option<String>,
}

impl PrepareRequest {
    pub fn new() -> PrepareRequest {
        PrepareRequest {
            api_lookup_path: None,
            smart_contract_tag: None,
            urgency: None,
            request_details: None,
            smart_contract_address: None,
            location: None,
            _type: None,
        }
    }
}

