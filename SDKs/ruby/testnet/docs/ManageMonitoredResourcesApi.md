# OpenapiClient::ManageMonitoredResourcesApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**delete_event_monitoring**](ManageMonitoredResourcesApi.md#delete_event_monitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract |
| [**delete_resource_monitoring_address**](ManageMonitoredResourcesApi.md#delete_resource_monitoring_address) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address |
| [**get_list_of_addresses**](ManageMonitoredResourcesApi.md#get_list_of_addresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored |
| [**get_list_of_resources**](ManageMonitoredResourcesApi.md#get_list_of_resources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored |
| [**get_list_of_smart_contract_events**](ManageMonitoredResourcesApi.md#get_list_of_smart_contract_events) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored |
| [**get_monitored_address**](ManageMonitoredResourcesApi.md#get_monitored_address) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address |
| [**get_monitored_smart_contract_event_details**](ManageMonitoredResourcesApi.md#get_monitored_smart_contract_event_details) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract |
| [**update_event_monitoring**](ManageMonitoredResourcesApi.md#update_event_monitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract |
| [**update_resource_monitoring_address**](ManageMonitoredResourcesApi.md#update_resource_monitoring_address) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address |


## delete_event_monitoring

> <SmartContractMonitoringSchema> delete_event_monitoring(authorization, resource_monitoring_id)

Stop monitoring a smart contract

Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 

begin
  # Stop monitoring a smart contract
  result = api_instance.delete_event_monitoring(authorization, resource_monitoring_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->delete_event_monitoring: #{e}"
end
```

#### Using the delete_event_monitoring_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SmartContractMonitoringSchema>, Integer, Hash)> delete_event_monitoring_with_http_info(authorization, resource_monitoring_id)

```ruby
begin
  # Stop monitoring a smart contract
  data, status_code, headers = api_instance.delete_event_monitoring_with_http_info(authorization, resource_monitoring_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SmartContractMonitoringSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->delete_event_monitoring_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## delete_resource_monitoring_address

> <DeleteResourceMonitoringAddressSchema> delete_resource_monitoring_address(authorization, resource_monitoring_id)

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 

begin
  # Stop monitoring an address
  result = api_instance.delete_resource_monitoring_address(authorization, resource_monitoring_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->delete_resource_monitoring_address: #{e}"
end
```

#### Using the delete_resource_monitoring_address_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DeleteResourceMonitoringAddressSchema>, Integer, Hash)> delete_resource_monitoring_address_with_http_info(authorization, resource_monitoring_id)

```ruby
begin
  # Stop monitoring an address
  data, status_code, headers = api_instance.delete_resource_monitoring_address_with_http_info(authorization, resource_monitoring_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DeleteResourceMonitoringAddressSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->delete_resource_monitoring_address_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |

### Return type

[**DeleteResourceMonitoringAddressSchema**](DeleteResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_list_of_addresses

> <Array<ResourceMonitoringAddressSchema>> get_list_of_addresses(authorization)

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 

begin
  # Retrieve a list of addresses being monitored
  result = api_instance.get_list_of_addresses(authorization)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_addresses: #{e}"
end
```

#### Using the get_list_of_addresses_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ResourceMonitoringAddressSchema>>, Integer, Hash)> get_list_of_addresses_with_http_info(authorization)

```ruby
begin
  # Retrieve a list of addresses being monitored
  data, status_code, headers = api_instance.get_list_of_addresses_with_http_info(authorization)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ResourceMonitoringAddressSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_addresses_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |

### Return type

[**Array&lt;ResourceMonitoringAddressSchema&gt;**](ResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_list_of_resources

> <Array<SmartContractMonitoringSchema>> get_list_of_resources(authorization)

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 

begin
  # Retrieve a list of all resources being monitored
  result = api_instance.get_list_of_resources(authorization)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_resources: #{e}"
end
```

#### Using the get_list_of_resources_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SmartContractMonitoringSchema>>, Integer, Hash)> get_list_of_resources_with_http_info(authorization)

```ruby
begin
  # Retrieve a list of all resources being monitored
  data, status_code, headers = api_instance.get_list_of_resources_with_http_info(authorization)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SmartContractMonitoringSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_resources_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |

### Return type

[**Array&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_list_of_smart_contract_events

> <Array<SmartContractMonitoringSchema>> get_list_of_smart_contract_events(authorization)

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 

begin
  # Retrieve a list of smart contracts being monitored
  result = api_instance.get_list_of_smart_contract_events(authorization)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_smart_contract_events: #{e}"
end
```

#### Using the get_list_of_smart_contract_events_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SmartContractMonitoringSchema>>, Integer, Hash)> get_list_of_smart_contract_events_with_http_info(authorization)

```ruby
begin
  # Retrieve a list of smart contracts being monitored
  data, status_code, headers = api_instance.get_list_of_smart_contract_events_with_http_info(authorization)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SmartContractMonitoringSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_list_of_smart_contract_events_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |

### Return type

[**Array&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_monitored_address

> <AddressMonitoringDetailsSchema> get_monitored_address(authorization, resource_monitoring_id)

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 

begin
  # Retrieve recorded updates for a specific monitored address
  result = api_instance.get_monitored_address(authorization, resource_monitoring_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_monitored_address: #{e}"
end
```

#### Using the get_monitored_address_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AddressMonitoringDetailsSchema>, Integer, Hash)> get_monitored_address_with_http_info(authorization, resource_monitoring_id)

```ruby
begin
  # Retrieve recorded updates for a specific monitored address
  data, status_code, headers = api_instance.get_monitored_address_with_http_info(authorization, resource_monitoring_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AddressMonitoringDetailsSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_monitored_address_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |

### Return type

[**AddressMonitoringDetailsSchema**](AddressMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_monitored_smart_contract_event_details

> <SmartContractMonitoringDetailsSchema> get_monitored_smart_contract_event_details(authorization, resource_monitoring_id)

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 

begin
  # Retrieve recorded updates for a specific monitored smart contract
  result = api_instance.get_monitored_smart_contract_event_details(authorization, resource_monitoring_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_monitored_smart_contract_event_details: #{e}"
end
```

#### Using the get_monitored_smart_contract_event_details_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SmartContractMonitoringDetailsSchema>, Integer, Hash)> get_monitored_smart_contract_event_details_with_http_info(authorization, resource_monitoring_id)

```ruby
begin
  # Retrieve recorded updates for a specific monitored smart contract
  data, status_code, headers = api_instance.get_monitored_smart_contract_event_details_with_http_info(authorization, resource_monitoring_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SmartContractMonitoringDetailsSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->get_monitored_smart_contract_event_details_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |

### Return type

[**SmartContractMonitoringDetailsSchema**](SmartContractMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## update_event_monitoring

> <SmartContractMonitoringSchema> update_event_monitoring(authorization, resource_monitoring_id, status_update_monitoring_request_schema)

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 
status_update_monitoring_request_schema = OpenapiClient::StatusUpdateMonitoringRequestSchema.new # StatusUpdateMonitoringRequestSchema | 

begin
  # Update the monitoring status of a smart contract
  result = api_instance.update_event_monitoring(authorization, resource_monitoring_id, status_update_monitoring_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->update_event_monitoring: #{e}"
end
```

#### Using the update_event_monitoring_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SmartContractMonitoringSchema>, Integer, Hash)> update_event_monitoring_with_http_info(authorization, resource_monitoring_id, status_update_monitoring_request_schema)

```ruby
begin
  # Update the monitoring status of a smart contract
  data, status_code, headers = api_instance.update_event_monitoring_with_http_info(authorization, resource_monitoring_id, status_update_monitoring_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SmartContractMonitoringSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->update_event_monitoring_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |
| **status_update_monitoring_request_schema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md) |  |  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## update_resource_monitoring_address

> <UpdateAddressMonitoringSchema> update_resource_monitoring_address(authorization, resource_monitoring_id, status_update_monitoring_request_schema)

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageMonitoredResourcesApi.new
authorization = 'authorization_example' # String | 
resource_monitoring_id = 'resource_monitoring_id_example' # String | 
status_update_monitoring_request_schema = OpenapiClient::StatusUpdateMonitoringRequestSchema.new # StatusUpdateMonitoringRequestSchema | 

begin
  # Update the monitoring status of an address
  result = api_instance.update_resource_monitoring_address(authorization, resource_monitoring_id, status_update_monitoring_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->update_resource_monitoring_address: #{e}"
end
```

#### Using the update_resource_monitoring_address_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<UpdateAddressMonitoringSchema>, Integer, Hash)> update_resource_monitoring_address_with_http_info(authorization, resource_monitoring_id, status_update_monitoring_request_schema)

```ruby
begin
  # Update the monitoring status of an address
  data, status_code, headers = api_instance.update_resource_monitoring_address_with_http_info(authorization, resource_monitoring_id, status_update_monitoring_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <UpdateAddressMonitoringSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageMonitoredResourcesApi->update_resource_monitoring_address_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **resource_monitoring_id** | **String** |  |  |
| **status_update_monitoring_request_schema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md) |  |  |

### Return type

[**UpdateAddressMonitoringSchema**](UpdateAddressMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

