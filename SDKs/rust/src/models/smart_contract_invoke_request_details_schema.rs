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
pub struct SmartContractInvokeRequestDetailsSchema {
    #[serde(rename = "origin", skip_serializing_if = "Option::is_none")]
    pub origin: Option<Vec<crate::models::SmartContractRequestDetailsOrigin>>,
    #[serde(rename = "destination", skip_serializing_if = "Option::is_none")]
    pub destination: Option<Vec<crate::models::SmartContractDestinationSchema>>,
}

impl SmartContractInvokeRequestDetailsSchema {
    pub fn new() -> SmartContractInvokeRequestDetailsSchema {
        SmartContractInvokeRequestDetailsSchema {
            origin: None,
            destination: None,
        }
    }
}


