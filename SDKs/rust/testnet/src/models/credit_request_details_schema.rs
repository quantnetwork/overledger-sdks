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
pub struct CreditRequestDetailsSchema {
    /// Who are the payees of this transaction
    #[serde(rename = "payee", skip_serializing_if = "Option::is_none")]
    pub payee: Option<Vec<crate::models::PayeeCreditSchema>>,
    /// Any text-based element of the data payload
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
    /// Who are the payers of this transaction
    #[serde(rename = "payer", skip_serializing_if = "Option::is_none")]
    pub payer: Option<Vec<crate::models::PayerCreditSchema>>,
    #[serde(rename = "overledgerSigningType", skip_serializing_if = "Option::is_none")]
    pub overledger_signing_type: Option<String>,
}

impl CreditRequestDetailsSchema {
    pub fn new() -> CreditRequestDetailsSchema {
        CreditRequestDetailsSchema {
            payee: None,
            message: None,
            payer: None,
            overledger_signing_type: None,
        }
    }
}


