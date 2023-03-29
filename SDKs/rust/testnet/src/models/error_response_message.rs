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
pub struct ErrorResponseMessage {
    #[serde(rename = "code", skip_serializing_if = "Option::is_none")]
    pub code: Option<i32>,
    #[serde(rename = "errorMessageExtraDetails", skip_serializing_if = "Option::is_none")]
    pub error_message_extra_details: Option<serde_json::Value>,
    #[serde(rename = "subCode", skip_serializing_if = "Option::is_none")]
    pub sub_code: Option<i32>,
    #[serde(rename = "logTraceId", skip_serializing_if = "Option::is_none")]
    pub log_trace_id: Option<String>,
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub _type: Option<String>,
    #[serde(rename = "title", skip_serializing_if = "Option::is_none")]
    pub title: Option<String>,
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
}

impl ErrorResponseMessage {
    pub fn new() -> ErrorResponseMessage {
        ErrorResponseMessage {
            code: None,
            error_message_extra_details: None,
            sub_code: None,
            log_trace_id: None,
            _type: None,
            title: None,
            message: None,
        }
    }
}

