/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct Block {
    #[serde(rename = "blockId", skip_serializing_if = "Option::is_none")]
    pub block_id: Option<String>,
    #[serde(rename = "number", skip_serializing_if = "Option::is_none")]
    pub number: Option<i32>,
    #[serde(rename = "transactionIds", skip_serializing_if = "Option::is_none")]
    pub transaction_ids: Option<Vec<String>>,
    #[serde(rename = "size", skip_serializing_if = "Option::is_none")]
    pub size: Option<Vec<crate::models::BlockSize>>,
    #[serde(rename = "hashes", skip_serializing_if = "Option::is_none")]
    pub hashes: Option<Vec<crate::models::BlockHash>>,
    #[serde(rename = "linkedBlocks", skip_serializing_if = "Option::is_none")]
    pub linked_blocks: Option<Box<crate::models::LinkedBlocks>>,
    #[serde(rename = "numberOfTransactions", skip_serializing_if = "Option::is_none")]
    pub number_of_transactions: Option<i32>,
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
    #[serde(rename = "timestamp", skip_serializing_if = "Option::is_none")]
    pub timestamp: Option<i32>,
    #[serde(rename = "nativeData", skip_serializing_if = "Option::is_none")]
    pub native_data: Option<serde_json::Value>,
}

impl Block {
    pub fn new() -> Block {
        Block {
            block_id: None,
            number: None,
            transaction_ids: None,
            size: None,
            hashes: None,
            linked_blocks: None,
            number_of_transactions: None,
            message: None,
            timestamp: None,
            native_data: None,
        }
    }
}

