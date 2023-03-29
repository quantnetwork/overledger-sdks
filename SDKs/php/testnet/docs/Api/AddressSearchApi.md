# OpenAPI\Client\AddressSearchApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchAddressBalanceRequest()**](AddressSearchApi.md#autoExecuteSearchAddressBalanceRequest) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
[**executePreparedSearchRequestAddressBalance()**](AddressSearchApi.md#executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**executePreparedSearchRequestAddressSequence()**](AddressSearchApi.md#executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepareAddressBalanceSearchRequest()**](AddressSearchApi.md#prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepareAddressSequenceSearchRequest()**](AddressSearchApi.md#prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
[**prepareAddressSequenceSearchRequest1()**](AddressSearchApi.md#prepareAddressSequenceSearchRequest1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.


## `autoExecuteSearchAddressBalanceRequest()`

```php
autoExecuteSearchAddressBalanceRequest($authorization, $address_id, $prepare_search_schema): \OpenAPI\Client\Model\AutoExecuteSearchAddressBalanceResponseSchema
```

Prepare and automatically execute a search for an address balance on a DLT.

Generates a request ID and automatically executes the address balance search on the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_id = 'address_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->autoExecuteSearchAddressBalanceRequest($authorization, $address_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->autoExecuteSearchAddressBalanceRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **address_id** | **string**|  |
 **prepare_search_schema** | [**\OpenAPI\Client\Model\PrepareSearchSchema**](../Model/PrepareSearchSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\AutoExecuteSearchAddressBalanceResponseSchema**](../Model/AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `executePreparedSearchRequestAddressBalance()`

```php
executePreparedSearchRequestAddressBalance($authorization, $request_id): \OpenAPI\Client\Model\ExecuteSearchBalanceResponse
```

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$request_id = 'request_id_example'; // string

try {
    $result = $apiInstance->executePreparedSearchRequestAddressBalance($authorization, $request_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->executePreparedSearchRequestAddressBalance: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **request_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteSearchBalanceResponse**](../Model/ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `executePreparedSearchRequestAddressSequence()`

```php
executePreparedSearchRequestAddressSequence($authorization, $request_id): \OpenAPI\Client\Model\ExecuteSearchSequenceResponse
```

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$request_id = 'request_id_example'; // string

try {
    $result = $apiInstance->executePreparedSearchRequestAddressSequence($authorization, $request_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->executePreparedSearchRequestAddressSequence: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **request_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteSearchSequenceResponse**](../Model/ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareAddressBalanceSearchRequest()`

```php
prepareAddressBalanceSearchRequest($authorization, $address_id, $prepare_search_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_id = 'address_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->prepareAddressBalanceSearchRequest($authorization, $address_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->prepareAddressBalanceSearchRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **address_id** | **string**|  |
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

## `prepareAddressSequenceSearchRequest()`

```php
prepareAddressSequenceSearchRequest($authorization, $address_id, $prepare_search_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_id = 'address_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->prepareAddressSequenceSearchRequest($authorization, $address_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->prepareAddressSequenceSearchRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **address_id** | **string**|  |
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

## `prepareAddressSequenceSearchRequest1()`

```php
prepareAddressSequenceSearchRequest1($authorization, $address_id, $prepare_search_schema): \OpenAPI\Client\Model\AutoExecSearchAddressSequenceResponseSchema
```

Prepare and automatically execute a search for an Address Sequence.

Generates a request ID and automatically executes the address sequence search on the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_id = 'address_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->prepareAddressSequenceSearchRequest1($authorization, $address_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->prepareAddressSequenceSearchRequest1: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **address_id** | **string**|  |
 **prepare_search_schema** | [**\OpenAPI\Client\Model\PrepareSearchSchema**](../Model/PrepareSearchSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\AutoExecSearchAddressSequenceResponseSchema**](../Model/AutoExecSearchAddressSequenceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
