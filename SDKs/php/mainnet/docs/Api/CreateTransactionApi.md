# OpenAPI\Client\CreateTransactionApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestNativeTransaction()**](CreateTransactionApi.md#executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**executePreparedRequestTransaction()**](CreateTransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
[**prepareNativeTransaction()**](CreateTransactionApi.md#prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepareTransactionRequest()**](CreateTransactionApi.md#prepareTransactionRequest) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


## `executePreparedRequestNativeTransaction()`

```php
executePreparedRequestNativeTransaction($authorization, $execute_transaction_request): \OpenAPI\Client\Model\ExecuteTransactionResponse
```

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$execute_transaction_request = {"requestId":"79763168-a4f9-42bf-9f10-2e08491136a7","signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5"}; // \OpenAPI\Client\Model\ExecuteTransactionRequest

try {
    $result = $apiInstance->executePreparedRequestNativeTransaction($authorization, $execute_transaction_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateTransactionApi->executePreparedRequestNativeTransaction: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **execute_transaction_request** | [**\OpenAPI\Client\Model\ExecuteTransactionRequest**](../Model/ExecuteTransactionRequest.md)|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteTransactionResponse**](../Model/ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `executePreparedRequestTransaction()`

```php
executePreparedRequestTransaction($authorization, $execute_transaction_request): \OpenAPI\Client\Model\ExecuteTransactionResponse
```

Execute a transaction on the DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$execute_transaction_request = {"requestId":"79763168-a4f9-42bf-9f10-2e08491136a7","signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5"}; // \OpenAPI\Client\Model\ExecuteTransactionRequest

try {
    $result = $apiInstance->executePreparedRequestTransaction($authorization, $execute_transaction_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateTransactionApi->executePreparedRequestTransaction: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **execute_transaction_request** | [**\OpenAPI\Client\Model\ExecuteTransactionRequest**](../Model/ExecuteTransactionRequest.md)|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteTransactionResponse**](../Model/ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareNativeTransaction()`

```php
prepareNativeTransaction($authorization, $prepare_native_transaction_request_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_native_transaction_request_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Native Transaction"}; // \OpenAPI\Client\Model\PrepareNativeTransactionRequestSchema

try {
    $result = $apiInstance->prepareNativeTransaction($authorization, $prepare_native_transaction_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateTransactionApi->prepareNativeTransaction: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_native_transaction_request_schema** | [**\OpenAPI\Client\Model\PrepareNativeTransactionRequestSchema**](../Model/PrepareNativeTransactionRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\PrepareSearchResponseSchema**](../Model/PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareTransactionRequest()`

```php
prepareTransactionRequest($authorization, $prepare_payment_transaction_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a DLT transaction for signing

Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_payment_transaction_request_schema = {"urgency":"normal","requestDetails":{"overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"destination":[{"payment":{"amount":"0.001","unit":"QNT"},"destinationId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}],"message":"Example message here"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"PAYMENT"}; // \OpenAPI\Client\Model\PreparePaymentTransactionRequestSchema

try {
    $result = $apiInstance->prepareTransactionRequest($authorization, $prepare_payment_transaction_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateTransactionApi->prepareTransactionRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_payment_transaction_request_schema** | [**\OpenAPI\Client\Model\PreparePaymentTransactionRequestSchema**](../Model/PreparePaymentTransactionRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\PrepareTransactionResponse**](../Model/PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
