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
pub struct Vout {
    #[serde(rename = "scriptPubKey", skip_serializing_if = "Option::is_none")]
    pub script_pub_key: Option<Box<crate::models::ScriptPubKey>>,
    #[serde(rename = "value", skip_serializing_if = "Option::is_none")]
    pub value: Option<f32>,
    #[serde(rename = "n", skip_serializing_if = "Option::is_none")]
    pub n: Option<f32>,
}

impl Vout {
    pub fn new() -> Vout {
        Vout {
            script_pub_key: None,
            value: None,
            n: None,
        }
    }
}


