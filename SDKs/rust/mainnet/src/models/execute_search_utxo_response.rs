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
pub struct ExecuteSearchUtxoResponse {
    #[serde(rename = "utxoId", skip_serializing_if = "Option::is_none")]
    pub utxo_id: Option<String>,
    #[serde(rename = "destination", skip_serializing_if = "Option::is_none")]
    pub destination: Option<Vec<crate::models::Destination>>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::Location>>,
    #[serde(rename = "timestamp", skip_serializing_if = "Option::is_none")]
    pub timestamp: Option<String>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<Box<crate::models::Status>>,
    #[serde(rename = "nativeData", skip_serializing_if = "Option::is_none")]
    pub native_data: Option<serde_json::Value>,
}

impl ExecuteSearchUtxoResponse {
    pub fn new() -> ExecuteSearchUtxoResponse {
        ExecuteSearchUtxoResponse {
            utxo_id: None,
            destination: None,
            location: None,
            timestamp: None,
            status: None,
            native_data: None,
        }
    }
}


