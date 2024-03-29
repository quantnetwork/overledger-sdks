# OpenAPI\Client\TransactionSearchApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchTransactionRequest()**](TransactionSearchApi.md#autoExecuteSearchTransactionRequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**executePreparedSearchRequestTransaction()**](TransactionSearchApi.md#executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepareSearchRequest()**](TransactionSearchApi.md#prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT


## `autoExecuteSearchTransactionRequest()`

```php
autoExecuteSearchTransactionRequest($authorization, $transaction_id, $prepare_search_schema): \OpenAPI\Client\Model\PrepareAndExecuteTransactionResponse
```

Prepare and automatically execute a search for a transaction on a DLT.

Generates a request ID and automatically executes the transaction search on the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\TransactionSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$transaction_id = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab; // string | The transactionId to search for
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->autoExecuteSearchTransactionRequest($authorization, $transaction_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TransactionSearchApi->autoExecuteSearchTransactionRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **transaction_id** | **string**| The transactionId to search for |
 **prepare_search_schema** | [**\OpenAPI\Client\Model\PrepareSearchSchema**](../Model/PrepareSearchSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\PrepareAndExecuteTransactionResponse**](../Model/PrepareAndExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `executePreparedSearchRequestTransaction()`

```php
executePreparedSearchRequestTransaction($authorization, $request_id): \OpenAPI\Client\Model\ExecuteSearchTransactionResponse
```

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\TransactionSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$request_id = 'request_id_example'; // string

try {
    $result = $apiInstance->executePreparedSearchRequestTransaction($authorization, $request_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TransactionSearchApi->executePreparedSearchRequestTransaction: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **request_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteSearchTransactionResponse**](../Model/ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareSearchRequest()`

```php
prepareSearchRequest($authorization, $transaction_id, $prepare_search_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\TransactionSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$transaction_id = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab; // string | The transactionId to search for
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->prepareSearchRequest($authorization, $transaction_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TransactionSearchApi->prepareSearchRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **transaction_id** | **string**| The transactionId to search for |
 **prepare_search_schema** | [**\OpenAPI\Client\Model\PrepareSearchSchema**](../Model/PrepareSearchSchema.md)|  |

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
