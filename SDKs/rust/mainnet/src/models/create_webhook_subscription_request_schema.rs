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
pub struct CreateWebhookSubscriptionRequestSchema {
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub _type: Option<String>,
    #[serde(rename = "ids", skip_serializing_if = "Option::is_none")]
    pub ids: Option<Vec<String>>,
    #[serde(rename = "callbackUrl", skip_serializing_if = "Option::is_none")]
    pub callback_url: Option<String>,
}

impl CreateWebhookSubscriptionRequestSchema {
    pub fn new() -> CreateWebhookSubscriptionRequestSchema {
        CreateWebhookSubscriptionRequestSchema {
            _type: None,
            ids: None,
            callback_url: None,
        }
    }
}


