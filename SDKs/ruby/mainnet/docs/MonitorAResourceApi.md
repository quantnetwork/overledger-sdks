# OpenapiClient::MonitorAResourceApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**resource_monitoring_address**](MonitorAResourceApi.md#resource_monitoring_address) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions |
| [**track_and_subscribe_event**](MonitorAResourceApi.md#track_and_subscribe_event) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event |


## resource_monitoring_address

> <AddressMonitoringResponseSchema> resource_monitoring_address(authorization, address_monitoring_request_schema)

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::MonitorAResourceApi.new
authorization = 'authorization_example' # String | 
address_monitoring_request_schema = OpenapiClient::AddressMonitoringRequestSchema.new # AddressMonitoringRequestSchema | 

begin
  # Monitor an address for incoming and outgoing transactions
  result = api_instance.resource_monitoring_address(authorization, address_monitoring_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MonitorAResourceApi->resource_monitoring_address: #{e}"
end
```

#### Using the resource_monitoring_address_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AddressMonitoringResponseSchema>, Integer, Hash)> resource_monitoring_address_with_http_info(authorization, address_monitoring_request_schema)

```ruby
begin
  # Monitor an address for incoming and outgoing transactions
  data, status_code, headers = api_instance.resource_monitoring_address_with_http_info(authorization, address_monitoring_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AddressMonitoringResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MonitorAResourceApi->resource_monitoring_address_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **address_monitoring_request_schema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md) |  |  |

### Return type

[**AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## track_and_subscribe_event

> <CreateSmartContractMonitoringSchema> track_and_subscribe_event(authorization, monitor_smart_contract_request_schema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::MonitorAResourceApi.new
authorization = 'authorization_example' # String | 
monitor_smart_contract_request_schema = OpenapiClient::MonitorSmartContractRequestSchema.new # MonitorSmartContractRequestSchema | 

begin
  # Monitor a smart contract for an event
  result = api_instance.track_and_subscribe_event(authorization, monitor_smart_contract_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MonitorAResourceApi->track_and_subscribe_event: #{e}"
end
```

#### Using the track_and_subscribe_event_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CreateSmartContractMonitoringSchema>, Integer, Hash)> track_and_subscribe_event_with_http_info(authorization, monitor_smart_contract_request_schema)

```ruby
begin
  # Monitor a smart contract for an event
  data, status_code, headers = api_instance.track_and_subscribe_event_with_http_info(authorization, monitor_smart_contract_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CreateSmartContractMonitoringSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MonitorAResourceApi->track_and_subscribe_event_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **monitor_smart_contract_request_schema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md) |  |  |

### Return type

[**CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

