/*
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SmartContractMonitoringDetailsSchema {
    #[serde(rename = "smartContractEventHistory", skip_serializing_if = "Option::is_none")]
    pub smart_contract_event_history: Option<Vec<crate::models::SmartContractEventHistory>>,
    #[serde(rename = "smartContractEventDetails", skip_serializing_if = "Option::is_none")]
    pub smart_contract_event_details: Option<Box<crate::models::ResourceMonitoringSmartContractEventDetails>>,
    #[serde(rename = "location", skip_serializing_if = "Option::is_none")]
    pub location: Option<Box<crate::models::Location>>,
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub _type: Option<String>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<Box<crate::models::Status>>,
    #[serde(rename = "timestamp", skip_serializing_if = "Option::is_none")]
    pub timestamp: Option<String>,
}

impl SmartContractMonitoringDetailsSchema {
    pub fn new() -> SmartContractMonitoringDetailsSchema {
        SmartContractMonitoringDetailsSchema {
            smart_contract_event_history: None,
            smart_contract_event_details: None,
            location: None,
            _type: None,
            status: None,
            timestamp: None,
        }
    }
}


