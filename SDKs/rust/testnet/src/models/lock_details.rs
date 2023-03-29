/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// LockDetails : Lock Details of the tokens



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct LockDetails {
    #[serde(rename = "expiryDate", skip_serializing_if = "Option::is_none")]
    pub expiry_date: Option<String>,
    #[serde(rename = "lockId", skip_serializing_if = "Option::is_none")]
    pub lock_id: Option<String>,
    #[serde(rename = "accountId", skip_serializing_if = "Option::is_none")]
    pub account_id: Option<String>,
    #[serde(rename = "amount", skip_serializing_if = "Option::is_none")]
    pub amount: Option<String>,
    #[serde(rename = "unit", skip_serializing_if = "Option::is_none")]
    pub unit: Option<String>,
    #[serde(rename = "accountOwningInstitutionId", skip_serializing_if = "Option::is_none")]
    pub account_owning_institution_id: Option<String>,
    #[serde(rename = "lockDescription", skip_serializing_if = "Option::is_none")]
    pub lock_description: Option<String>,
    #[serde(rename = "payeeId", skip_serializing_if = "Option::is_none")]
    pub payee_id: Option<String>,
    #[serde(rename = "secret", skip_serializing_if = "Option::is_none")]
    pub secret: Option<String>,
    #[serde(rename = "hash", skip_serializing_if = "Option::is_none")]
    pub hash: Option<String>,
    #[serde(rename = "payeeOwningInstitutionId", skip_serializing_if = "Option::is_none")]
    pub payee_owning_institution_id: Option<String>,
    #[serde(rename = "lockOwningInstitutionId", skip_serializing_if = "Option::is_none")]
    pub lock_owning_institution_id: Option<String>,
}

impl LockDetails {
    /// Lock Details of the tokens
    pub fn new() -> LockDetails {
        LockDetails {
            expiry_date: None,
            lock_id: None,
            account_id: None,
            amount: None,
            unit: None,
            account_owning_institution_id: None,
            lock_description: None,
            payee_id: None,
            secret: None,
            hash: None,
            payee_owning_institution_id: None,
            lock_owning_institution_id: None,
        }
    }
}

