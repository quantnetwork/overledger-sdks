# OpenAPI\Client\SmartContractSearchApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchSmartContractQueryRequest()**](SmartContractSearchApi.md#autoExecuteSearchSmartContractQueryRequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
[**executePreparedSearchRequest()**](SmartContractSearchApi.md#executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepareSmartContractQueryRequest()**](SmartContractSearchApi.md#prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


## `autoExecuteSearchSmartContractQueryRequest()`

```php
autoExecuteSearchSmartContractQueryRequest($authorization, $prepare_search_schema): \OpenAPI\Client\Model\AutoExecuteSearchAddressBalanceResponseSchema
```

Prepare and automatically execute a search for a smart contract query on a DLT.

Generates a request ID and automatically executes the smart contract query search on the requested DLT.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\SmartContractSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->autoExecuteSearchSmartContractQueryRequest($authorization, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SmartContractSearchApi->autoExecuteSearchSmartContractQueryRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
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

## `executePreparedSearchRequest()`

```php
executePreparedSearchRequest($authorization, $request_id): \OpenAPI\Client\Model\ExecuteSmartContractReadResponseSchema
```

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\SmartContractSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$request_id = 'request_id_example'; // string

try {
    $result = $apiInstance->executePreparedSearchRequest($authorization, $request_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SmartContractSearchApi->executePreparedSearchRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **request_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteSmartContractReadResponseSchema**](../Model/ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareSmartContractQueryRequest()`

```php
prepareSmartContractQueryRequest($authorization, $prepare_search_smart_contract_request_schema): \OpenAPI\Client\Model\PrepareSearchResponseSchema
```

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\SmartContractSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_search_smart_contract_request_schema = {"requestDetails":{"destination":[{"smartContract":{"smartContractId":"0xF9cd6C86992Fce1481dBc4bDB7E1b101c1e8cEE2","function":{"name":"balanceOf","inputParameters":[{"type":"address","value":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"outputParameters":[{"type":"uint256"}]}}}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSmartContractRequestSchema

try {
    $result = $apiInstance->prepareSmartContractQueryRequest($authorization, $prepare_search_smart_contract_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SmartContractSearchApi->prepareSmartContractQueryRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_search_smart_contract_request_schema** | [**\OpenAPI\Client\Model\PrepareSearchSmartContractRequestSchema**](../Model/PrepareSearchSmartContractRequestSchema.md)|  |

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
