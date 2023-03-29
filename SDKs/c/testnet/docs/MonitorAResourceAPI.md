# MonitorAResourceAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MonitorAResourceAPI_resourceMonitoringAddress**](MonitorAResourceAPI.md#MonitorAResourceAPI_resourceMonitoringAddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**MonitorAResourceAPI_trackAndSubscribeEvent**](MonitorAResourceAPI.md#MonitorAResourceAPI_trackAndSubscribeEvent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event


# **MonitorAResourceAPI_resourceMonitoringAddress**
```c
// Monitor an address for incoming and outgoing transactions
//
// Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
//
address_monitoring_response_schema_t* MonitorAResourceAPI_resourceMonitoringAddress(apiClient_t *apiClient, char * Authorization, address_monitoring_request_schema_t * address_monitoring_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**address_monitoring_request_schema** | **[address_monitoring_request_schema_t](address_monitoring_request_schema.md) \*** |  | 

### Return type

[address_monitoring_response_schema_t](address_monitoring_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MonitorAResourceAPI_trackAndSubscribeEvent**
```c
// Monitor a smart contract for an event
//
// Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
//
create_smart_contract_monitoring_schema_t* MonitorAResourceAPI_trackAndSubscribeEvent(apiClient_t *apiClient, char * Authorization, monitor_smart_contract_request_schema_t * monitor_smart_contract_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**monitor_smart_contract_request_schema** | **[monitor_smart_contract_request_schema_t](monitor_smart_contract_request_schema.md) \*** |  | 

### Return type

[create_smart_contract_monitoring_schema_t](create_smart_contract_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

