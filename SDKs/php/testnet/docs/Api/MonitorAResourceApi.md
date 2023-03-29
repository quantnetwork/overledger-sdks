# OpenAPI\Client\MonitorAResourceApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**resourceMonitoringAddress()**](MonitorAResourceApi.md#resourceMonitoringAddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**trackAndSubscribeEvent()**](MonitorAResourceApi.md#trackAndSubscribeEvent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event


## `resourceMonitoringAddress()`

```php
resourceMonitoringAddress($authorization, $address_monitoring_request_schema): \OpenAPI\Client\Model\AddressMonitoringResponseSchema
```

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\MonitorAResourceApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_monitoring_request_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"callBackURL":"https://callbackurl/endpoint","addressId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}; // \OpenAPI\Client\Model\AddressMonitoringRequestSchema

try {
    $result = $apiInstance->resourceMonitoringAddress($authorization, $address_monitoring_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MonitorAResourceApi->resourceMonitoringAddress: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **address_monitoring_request_schema** | [**\OpenAPI\Client\Model\AddressMonitoringRequestSchema**](../Model/AddressMonitoringRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\AddressMonitoringResponseSchema**](../Model/AddressMonitoringResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `trackAndSubscribeEvent()`

```php
trackAndSubscribeEvent($authorization, $monitor_smart_contract_request_schema): \OpenAPI\Client\Model\CreateSmartContractMonitoringSchema
```

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\MonitorAResourceApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$monitor_smart_contract_request_schema = {"eventParams":[{"selectedIntegerLength":"B256","type":"UINT","value":"3"},{"selectedIntegerLength":"B256","type":"UINT","value":"2"}],"eventName":"mul","location":{"technology":"Ethereum","network":"Ropsten Testnet"},"callBackURL":"https://test-post.free.beeceptor.com/comments","smartContractId":"0x8781d54e454377451D9C6928538Db544Caa65CDf"}; // \OpenAPI\Client\Model\MonitorSmartContractRequestSchema

try {
    $result = $apiInstance->trackAndSubscribeEvent($authorization, $monitor_smart_contract_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MonitorAResourceApi->trackAndSubscribeEvent: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **monitor_smart_contract_request_schema** | [**\OpenAPI\Client\Model\MonitorSmartContractRequestSchema**](../Model/MonitorSmartContractRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema**](../Model/CreateSmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
