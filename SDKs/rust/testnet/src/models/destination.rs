/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// Destination : The Destination of this transaction



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct Destination {
    #[serde(rename = "transfer", skip_serializing_if = "Option::is_none")]
    pub transfer: Option<Box<crate::models::Transfer>>,
    #[serde(rename = "smartContract", skip_serializing_if = "Option::is_none")]
    pub smart_contract: Option<Box<crate::models::SmartContract>>,
    #[serde(rename = "payment", skip_serializing_if = "Option::is_none")]
    pub payment: Option<Box<crate::models::Payment>>,
    /// The unique identifiers of the destination
    #[serde(rename = "destinationId", skip_serializing_if = "Option::is_none")]
    pub destination_id: Option<String>,
}

impl Destination {
    /// The Destination of this transaction
    pub fn new() -> Destination {
        Destination {
            transfer: None,
            smart_contract: None,
            payment: None,
            destination_id: None,
        }
    }
}


