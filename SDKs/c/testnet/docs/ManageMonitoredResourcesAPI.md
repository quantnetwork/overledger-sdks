# ManageMonitoredResourcesAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ManageMonitoredResourcesAPI_deleteEventMonitoring**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_deleteEventMonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**ManageMonitoredResourcesAPI_getListOfAddresses**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfAddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**ManageMonitoredResourcesAPI_getListOfResources**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfResources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**ManageMonitoredResourcesAPI_getListOfSmartContractEvents**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfSmartContractEvents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**ManageMonitoredResourcesAPI_getMonitoredAddress**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getMonitoredAddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**ManageMonitoredResourcesAPI_updateEventMonitoring**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_updateEventMonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**ManageMonitoredResourcesAPI_updateResourceMonitoringAddress**](ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_updateResourceMonitoringAddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address


# **ManageMonitoredResourcesAPI_deleteEventMonitoring**
```c
// Stop monitoring a smart contract
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID
//
smart_contract_monitoring_schema_t* ManageMonitoredResourcesAPI_deleteEventMonitoring(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 

### Return type

[smart_contract_monitoring_schema_t](smart_contract_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress**
```c
// Stop monitoring an address
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID
//
delete_resource_monitoring_address_schema_t* ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 

### Return type

[delete_resource_monitoring_address_schema_t](delete_resource_monitoring_address_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_getListOfAddresses**
```c
// Retrieve a list of addresses being monitored
//
// Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID
//
list_t* ManageMonitoredResourcesAPI_getListOfAddresses(apiClient_t *apiClient, char * Authorization);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 

### Return type

[list_t](resource_monitoring_address_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_getListOfResources**
```c
// Retrieve a list of all resources being monitored
//
// Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID
//
list_t* ManageMonitoredResourcesAPI_getListOfResources(apiClient_t *apiClient, char * Authorization);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 

### Return type

[list_t](smart_contract_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_getListOfSmartContractEvents**
```c
// Retrieve a list of smart contracts being monitored
//
// Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID
//
list_t* ManageMonitoredResourcesAPI_getListOfSmartContractEvents(apiClient_t *apiClient, char * Authorization);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 

### Return type

[list_t](smart_contract_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_getMonitoredAddress**
```c
// Retrieve recorded updates for a specific monitored address
//
// Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID
//
address_monitoring_details_schema_t* ManageMonitoredResourcesAPI_getMonitoredAddress(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 

### Return type

[address_monitoring_details_schema_t](address_monitoring_details_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails**
```c
// Retrieve recorded updates for a specific monitored smart contract
//
// Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID
//
smart_contract_monitoring_details_schema_t* ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 

### Return type

[smart_contract_monitoring_details_schema_t](smart_contract_monitoring_details_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_updateEventMonitoring**
```c
// Update the monitoring status of a smart contract
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract
//
smart_contract_monitoring_schema_t* ManageMonitoredResourcesAPI_updateEventMonitoring(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId, status_update_monitoring_request_schema_t * status_update_monitoring_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 
**status_update_monitoring_request_schema** | **[status_update_monitoring_request_schema_t](status_update_monitoring_request_schema.md) \*** |  | 

### Return type

[smart_contract_monitoring_schema_t](smart_contract_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageMonitoredResourcesAPI_updateResourceMonitoringAddress**
```c
// Update the monitoring status of an address
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address
//
update_address_monitoring_schema_t* ManageMonitoredResourcesAPI_updateResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization, char * resourceMonitoringId, status_update_monitoring_request_schema_t * status_update_monitoring_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**resourceMonitoringId** | **char \*** |  | 
**status_update_monitoring_request_schema** | **[status_update_monitoring_request_schema_t](status_update_monitoring_request_schema.md) \*** |  | 

### Return type

[update_address_monitoring_schema_t](update_address_monitoring_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

