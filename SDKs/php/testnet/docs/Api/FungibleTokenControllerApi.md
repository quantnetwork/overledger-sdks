# OpenAPI\Client\FungibleTokenControllerApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getToken()**](FungibleTokenControllerApi.md#getToken) | **GET** /v2/token/fungible | 


## `getToken()`

```php
getToken($technology, $network, $unit): \OpenAPI\Client\Model\Erc20DTO
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\FungibleTokenControllerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$technology = 'technology_example'; // string
$network = 'network_example'; // string
$unit = 'unit_example'; // string

try {
    $result = $apiInstance->getToken($technology, $network, $unit);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling FungibleTokenControllerApi->getToken: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **technology** | **string**|  |
 **network** | **string**|  |
 **unit** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\Erc20DTO**](../Model/Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `*/*`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
