# OpenapiClient::MDappTransactionQueryApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**get_ovl_transaction_by_tx_id**](MDappTransactionQueryApi.md#get_ovl_transaction_by_tx_id) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger |
| [**get_ovl_transactions_by_client_id**](MDappTransactionQueryApi.md#get_ovl_transactions_by_client_id) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger |


## get_ovl_transaction_by_tx_id

> <OverledgerTransactionResponseSchema> get_ovl_transaction_by_tx_id(authorization, overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::MDappTransactionQueryApi.new
authorization = 'authorization_example' # String | 
overledgertransactionid = 'overledgertransactionid_example' # String | 

begin
  # Retrieve information about a specific transaction created by your application in Overledger
  result = api_instance.get_ovl_transaction_by_tx_id(authorization, overledgertransactionid)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MDappTransactionQueryApi->get_ovl_transaction_by_tx_id: #{e}"
end
```

#### Using the get_ovl_transaction_by_tx_id_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OverledgerTransactionResponseSchema>, Integer, Hash)> get_ovl_transaction_by_tx_id_with_http_info(authorization, overledgertransactionid)

```ruby
begin
  # Retrieve information about a specific transaction created by your application in Overledger
  data, status_code, headers = api_instance.get_ovl_transaction_by_tx_id_with_http_info(authorization, overledgertransactionid)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OverledgerTransactionResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MDappTransactionQueryApi->get_ovl_transaction_by_tx_id_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **overledgertransactionid** | **String** |  |  |

### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_ovl_transactions_by_client_id

> <Array<OverledgerTransactionResponseSchema>> get_ovl_transactions_by_client_id(authorization, opts)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::MDappTransactionQueryApi.new
authorization = 'authorization_example' # String | 
opts = {
  offset: 56, # Integer | 
  length: 56 # Integer | 
}

begin
  # Retrieve a list of transactions created by your application in Overledger
  result = api_instance.get_ovl_transactions_by_client_id(authorization, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MDappTransactionQueryApi->get_ovl_transactions_by_client_id: #{e}"
end
```

#### Using the get_ovl_transactions_by_client_id_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OverledgerTransactionResponseSchema>>, Integer, Hash)> get_ovl_transactions_by_client_id_with_http_info(authorization, opts)

```ruby
begin
  # Retrieve a list of transactions created by your application in Overledger
  data, status_code, headers = api_instance.get_ovl_transactions_by_client_id_with_http_info(authorization, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OverledgerTransactionResponseSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MDappTransactionQueryApi->get_ovl_transactions_by_client_id_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **offset** | **Integer** |  | [optional][default to 0] |
| **length** | **Integer** |  | [optional][default to 25] |

### Return type

[**Array&lt;OverledgerTransactionResponseSchema&gt;**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

