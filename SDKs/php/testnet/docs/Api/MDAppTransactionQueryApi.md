# OpenAPI\Client\MDAppTransactionQueryApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOvlTransactionByTxId()**](MDAppTransactionQueryApi.md#getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**getOvlTransactionsByClientId()**](MDAppTransactionQueryApi.md#getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger


## `getOvlTransactionByTxId()`

```php
getOvlTransactionByTxId($authorization, $overledgertransactionid): \OpenAPI\Client\Model\OverledgerTransactionResponseSchema
```

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\MDAppTransactionQueryApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$overledgertransactionid = 'overledgertransactionid_example'; // string

try {
    $result = $apiInstance->getOvlTransactionByTxId($authorization, $overledgertransactionid);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MDAppTransactionQueryApi->getOvlTransactionByTxId: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **overledgertransactionid** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\OverledgerTransactionResponseSchema**](../Model/OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getOvlTransactionsByClientId()`

```php
getOvlTransactionsByClientId($authorization, $offset, $length): \OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]
```

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\MDAppTransactionQueryApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$offset = 0; // int
$length = 25; // int

try {
    $result = $apiInstance->getOvlTransactionsByClientId($authorization, $offset, $length);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MDAppTransactionQueryApi->getOvlTransactionsByClientId: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **offset** | **int**|  | [optional] [default to 0]
 **length** | **int**|  | [optional] [default to 25]

### Return type

[**\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]**](../Model/OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
