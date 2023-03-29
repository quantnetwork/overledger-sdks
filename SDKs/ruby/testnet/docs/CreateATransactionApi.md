# OpenapiClient::CreateATransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_request_native_transaction**](CreateATransactionApi.md#execute_prepared_request_native_transaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT |
| [**execute_prepared_request_transaction**](CreateATransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT |
| [**prepare_native_transaction**](CreateATransactionApi.md#prepare_native_transaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction |
| [**prepare_transaction_request1**](CreateATransactionApi.md#prepare_transaction_request1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing |


## execute_prepared_request_native_transaction

> <ExecuteTransactionResponse> execute_prepared_request_native_transaction(authorization, execute_transaction_request)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateATransactionApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a native transaction on the DLT
  result = api_instance.execute_prepared_request_native_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->execute_prepared_request_native_transaction: #{e}"
end
```

#### Using the execute_prepared_request_native_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteTransactionResponse>, Integer, Hash)> execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request)

```ruby
begin
  # Execute a native transaction on the DLT
  data, status_code, headers = api_instance.execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->execute_prepared_request_native_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **execute_transaction_request** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md) |  |  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## execute_prepared_request_transaction

> <ExecuteTransactionResponse> execute_prepared_request_transaction(authorization, execute_transaction_request)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateATransactionApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a transaction on a DLT
  result = api_instance.execute_prepared_request_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->execute_prepared_request_transaction: #{e}"
end
```

#### Using the execute_prepared_request_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteTransactionResponse>, Integer, Hash)> execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)

```ruby
begin
  # Execute a transaction on a DLT
  data, status_code, headers = api_instance.execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->execute_prepared_request_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **execute_transaction_request** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md) |  |  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_native_transaction

> <PrepareSearchResponseSchema> prepare_native_transaction(authorization, prepare_native_transaction_request_schema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateATransactionApi.new
authorization = 'authorization_example' # String | 
prepare_native_transaction_request_schema = OpenapiClient::PrepareNativeTransactionRequestSchema.new # PrepareNativeTransactionRequestSchema | 

begin
  # Prepare a DLT native transaction
  result = api_instance.prepare_native_transaction(authorization, prepare_native_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->prepare_native_transaction: #{e}"
end
```

#### Using the prepare_native_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema)

```ruby
begin
  # Prepare a DLT native transaction
  data, status_code, headers = api_instance.prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->prepare_native_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_native_transaction_request_schema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_transaction_request1

> <PrepareTransactionResponse> prepare_transaction_request1(authorization, prepare_payment_transaction_request_schema)

Prepare a DLT transaction for signing

The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateATransactionApi.new
authorization = 'authorization_example' # String | 
prepare_payment_transaction_request_schema = OpenapiClient::PreparePaymentTransactionRequestSchema.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal', request_details: OpenapiClient::PaymentRequestDetailsSchema.new({destination: [OpenapiClient::DestinationPaymentSchema.new({destination_id: 'destination_id_example', payment: OpenapiClient::PaymentSchema.new({amount: 'amount_example', unit: 'unit_example'})})], origin: [OpenapiClient::OriginPaymentSchema.new({origin_id: 'origin_id_example'})]})}) # PreparePaymentTransactionRequestSchema | 

begin
  # Prepare a DLT transaction for signing
  result = api_instance.prepare_transaction_request1(authorization, prepare_payment_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->prepare_transaction_request1: #{e}"
end
```

#### Using the prepare_transaction_request1_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_transaction_request1_with_http_info(authorization, prepare_payment_transaction_request_schema)

```ruby
begin
  # Prepare a DLT transaction for signing
  data, status_code, headers = api_instance.prepare_transaction_request1_with_http_info(authorization, prepare_payment_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateATransactionApi->prepare_transaction_request1_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

