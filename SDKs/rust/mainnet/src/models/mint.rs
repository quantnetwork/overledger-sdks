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
pub struct Mint {
    /// Name of the token
    #[serde(rename = "tokenName", skip_serializing_if = "Option::is_none")]
    pub token_name: Option<String>,
    /// The amount of a currency
    #[serde(rename = "amount", skip_serializing_if = "Option::is_none")]
    pub amount: Option<String>,
    /// The unit of this currency/token
    #[serde(rename = "unit", skip_serializing_if = "Option::is_none")]
    pub unit: Option<String>,
    /// (Optional) String of metadata
    #[serde(rename = "metadata", skip_serializing_if = "Option::is_none")]
    pub metadata: Option<String>,
    /// Unique identifier for the specific token
    #[serde(rename = "tokenId", skip_serializing_if = "Option::is_none")]
    pub token_id: Option<String>,
}

impl Mint {
    pub fn new() -> Mint {
        Mint {
            token_name: None,
            amount: None,
            unit: None,
            metadata: None,
            token_id: None,
        }
    }
}


