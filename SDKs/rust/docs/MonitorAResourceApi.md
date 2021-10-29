# \MonitorAResourceApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resource_monitoring_address**](MonitorAResourceApi.md#resource_monitoring_address) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**track_and_subscribe_event**](MonitorAResourceApi.md#track_and_subscribe_event) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event



## resource_monitoring_address

> crate::models::AddressMonitoringResponseSchema resource_monitoring_address(authorization, address_monitoring_request_schema)
Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**address_monitoring_request_schema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md) |  | [required] |

### Return type

[**crate::models::AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## track_and_subscribe_event

> crate::models::CreateSmartContractMonitoringSchema track_and_subscribe_event(authorization, monitor_smart_contract_request_schema)
Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**monitor_smart_contract_request_schema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md) |  | [required] |

### Return type

[**crate::models::CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

