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
pub struct PrepareCreditTransactionRequestSchema {
    #[serde(rename = "location")]
    pub location: Box<crate::models::Location>,
    /// The type of the transaction
    #[serde(rename = "type")]
    pub _type: Type,
    /// This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
    #[serde(rename = "urgency")]
    pub urgency: Urgency,
    #[serde(rename = "requestDetails", skip_serializing_if = "Option::is_none")]
    pub request_details: Option<Box<crate::models::CreditRequestDetailsSchema>>,
}

impl PrepareCreditTransactionRequestSchema {
    pub fn new(location: crate::models::Location, _type: Type, urgency: Urgency) -> PrepareCreditTransactionRequestSchema {
        PrepareCreditTransactionRequestSchema {
            location: Box::new(location),
            _type,
            urgency,
            request_details: None,
        }
    }
}

/// The type of the transaction
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Type {
    #[serde(rename = "Payment")]
    Payment,
    #[serde(rename = "Transfer")]
    Transfer,
    #[serde(rename = "Contract Invoke")]
    ContractInvoke,
}
/// This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Urgency {
    #[serde(rename = "Normal")]
    Normal,
    #[serde(rename = "Fast")]
    Fast,
    #[serde(rename = "Urgent")]
    Urgent,
}

