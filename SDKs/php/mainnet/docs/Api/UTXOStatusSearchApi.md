# OpenAPI\Client\UTXOStatusSearchApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchUtxoRequest()**](UTXOStatusSearchApi.md#autoExecuteSearchUtxoRequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**executeUTXOPreparedSearchRequest()**](UTXOStatusSearchApi.md#executeUTXOPreparedSearchRequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**prepareSearchUTXOState()**](UTXOStatusSearchApi.md#prepareSearchUTXOState) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


## `autoExecuteSearchUtxoRequest()`

```php
autoExecuteSearchUtxoRequest($authorization, $utxo_id, $prepare_search_schema): \OpenAPI\Client\Model\AutoExecuteSearchUTXOResponseSchema
```

Prepare and automatically execute a search for a UTXO on a DLT.

Generates a request ID and automatically executes the utxo search on the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\UTXOStatusSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$utxo_id = 'utxo_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->autoExecuteSearchUtxoRequest($authorization, $utxo_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UTXOStatusSearchApi->autoExecuteSearchUtxoRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **utxo_id** | **string**|  |
 **prepare_search_schema** | [**\OpenAPI\Client\Model\PrepareSearchSchema**](../Model/PrepareSearchSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\AutoExecuteSearchUTXOResponseSchema**](../Model/AutoExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `executeUTXOPreparedSearchRequest()`

```php
executeUTXOPreparedSearchRequest($authorization, $request_id): \OpenAPI\Client\Model\ExecuteSearchUTXOResponseSchema
```

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\UTXOStatusSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$request_id = 'request_id_example'; // string

try {
    $result = $apiInstance->executeUTXOPreparedSearchRequest($authorization, $request_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UTXOStatusSearchApi->executeUTXOPreparedSearchRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **request_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteSearchUTXOResponseSchema**](../Model/ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareSearchUTXOState()`

```php
prepareSearchUTXOState($authorization, $utxo_id, $prepare_search_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\UTXOStatusSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$utxo_id = 'utxo_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->prepareSearchUTXOState($authorization, $utxo_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UTXOStatusSearchApi->prepareSearchUTXOState: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **utxo_id** | **string**|  |
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
