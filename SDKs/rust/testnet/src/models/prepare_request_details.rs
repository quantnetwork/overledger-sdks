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
pub struct PrepareRequestDetails {
    #[serde(rename = "mandate", skip_serializing_if = "Option::is_none")]
    pub mandate: Option<Vec<crate::models::Mandate>>,
    #[serde(rename = "aliasDetails", skip_serializing_if = "Option::is_none")]
    pub alias_details: Option<Box<crate::models::AliasDetails>>,
    #[serde(rename = "pagination", skip_serializing_if = "Option::is_none")]
    pub pagination: Option<Box<crate::models::Pagination>>,
    #[serde(rename = "origin", skip_serializing_if = "Option::is_none")]
    pub origin: Option<Vec<crate::models::Origin>>,
    #[serde(rename = "destination", skip_serializing_if = "Option::is_none")]
    pub destination: Option<Vec<crate::models::Destination>>,
    /// Name of the token
    #[serde(rename = "tokenName", skip_serializing_if = "Option::is_none")]
    pub token_name: Option<String>,
    #[serde(rename = "blockSearchType", skip_serializing_if = "Option::is_none")]
    pub block_search_type: Option<String>,
    #[serde(rename = "payer", skip_serializing_if = "Option::is_none")]
    pub payer: Option<Vec<crate::models::Payer>>,
    #[serde(rename = "collector", skip_serializing_if = "Option::is_none")]
    pub collector: Option<Box<crate::models::Collector>>,
    #[serde(rename = "payee", skip_serializing_if = "Option::is_none")]
    pub payee: Option<Vec<crate::models::Payee>>,
    #[serde(rename = "additionalOwner", skip_serializing_if = "Option::is_none")]
    pub additional_owner: Option<Box<crate::models::AdditionalOwner>>,
    #[serde(rename = "owner", skip_serializing_if = "Option::is_none")]
    pub owner: Option<Box<crate::models::Owner>>,
    #[serde(rename = "creator", skip_serializing_if = "Option::is_none")]
    pub creator: Option<Box<crate::models::Creator>>,
    #[serde(rename = "receiver", skip_serializing_if = "Option::is_none")]
    pub receiver: Option<Vec<crate::models::Receiver>>,
    /// Unique identifier for the specific token
    #[serde(rename = "tokenId", skip_serializing_if = "Option::is_none")]
    pub token_id: Option<String>,
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
    #[serde(rename = "lockDetails", skip_serializing_if = "Option::is_none")]
    pub lock_details: Option<Box<crate::models::LockDetails>>,
    #[serde(rename = "blockId", skip_serializing_if = "Option::is_none")]
    pub block_id: Option<String>,
    /// The unique identifiers of the account
    #[serde(rename = "accountId", skip_serializing_if = "Option::is_none")]
    pub account_id: Option<String>,
    /// The unit of this token
    #[serde(rename = "tokenUnit", skip_serializing_if = "Option::is_none")]
    pub token_unit: Option<String>,
    #[serde(rename = "beneficiary", skip_serializing_if = "Option::is_none")]
    pub beneficiary: Option<Box<crate::models::Beneficiary>>,
    #[serde(rename = "sender", skip_serializing_if = "Option::is_none")]
    pub sender: Option<Vec<crate::models::Sender>>,
    #[serde(rename = "accountDetails", skip_serializing_if = "Option::is_none")]
    pub account_details: Option<Box<crate::models::AccountDetails>>,
    #[serde(rename = "overledgerSigningType", skip_serializing_if = "Option::is_none")]
    pub overledger_signing_type: Option<String>,
    #[serde(rename = "totalPaymentAmount", skip_serializing_if = "Option::is_none")]
    pub total_payment_amount: Option<Box<crate::models::Payment>>,
    #[serde(rename = "signerAccount", skip_serializing_if = "Option::is_none")]
    pub signer_account: Option<Box<crate::models::SignerAccount>>,
}

impl PrepareRequestDetails {
    pub fn new() -> PrepareRequestDetails {
        PrepareRequestDetails {
            mandate: None,
            alias_details: None,
            pagination: None,
            origin: None,
            destination: None,
            token_name: None,
            block_search_type: None,
            payer: None,
            collector: None,
            payee: None,
            additional_owner: None,
            owner: None,
            creator: None,
            receiver: None,
            token_id: None,
            message: None,
            lock_details: None,
            block_id: None,
            account_id: None,
            token_unit: None,
            beneficiary: None,
            sender: None,
            account_details: None,
            overledger_signing_type: None,
            total_payment_amount: None,
            signer_account: None,
        }
    }
}


