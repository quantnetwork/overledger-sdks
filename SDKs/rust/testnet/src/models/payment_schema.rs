/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PaymentSchema : The payload for each recipient



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PaymentSchema {
    /// The payload amount. The exact format depends on the unit of the token.
    #[serde(rename = "amount")]
    pub amount: String,
    /// The currency or token code
    #[serde(rename = "unit")]
    pub unit: String,
}

impl PaymentSchema {
    /// The payload for each recipient
    pub fn new(amount: String, unit: String) -> PaymentSchema {
        PaymentSchema {
            amount,
            unit,
        }
    }
}


