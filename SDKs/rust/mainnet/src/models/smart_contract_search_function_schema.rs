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
pub struct SmartContractSearchFunctionSchema {
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "inputParameters", skip_serializing_if = "Option::is_none")]
    pub input_parameters: Option<Vec<crate::models::SmartContractInputParameterSchema>>,
    #[serde(rename = "outputParameters", skip_serializing_if = "Option::is_none")]
    pub output_parameters: Option<Vec<crate::models::SmartContractOutputParameterSchema>>,
}

impl SmartContractSearchFunctionSchema {
    pub fn new() -> SmartContractSearchFunctionSchema {
        SmartContractSearchFunctionSchema {
            name: None,
            input_parameters: None,
            output_parameters: None,
        }
    }
}


