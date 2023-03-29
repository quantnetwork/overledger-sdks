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
pub struct CreateSmartContractMonitoringSchema {
    #[serde(rename = "resourceMonitoring", skip_serializing_if = "Option::is_none")]
    pub resource_monitoring: Option<Box<crate::models::ResourceMonitoringDetails>>,
    #[serde(rename = "subscriptionDetails", skip_serializing_if = "Option::is_none")]
    pub subscription_details: Option<Box<crate::models::ResourceMonitoringSubscriptionDetails>>,
    #[serde(rename = "subscription", skip_serializing_if = "Option::is_none")]
    pub subscription: Option<Box<crate::models::ResourceMonitoringSubscription>>,
}

impl CreateSmartContractMonitoringSchema {
    pub fn new() -> CreateSmartContractMonitoringSchema {
        CreateSmartContractMonitoringSchema {
            resource_monitoring: None,
            subscription_details: None,
            subscription: None,
        }
    }
}


