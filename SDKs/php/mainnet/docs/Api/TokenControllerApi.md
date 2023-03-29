# OpenAPI\Client\TokenControllerApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getNonFungibleToken()**](TokenControllerApi.md#getNonFungibleToken) | **GET** /v2/nonfungibletoken | 


## `getNonFungibleToken()`

```php
getNonFungibleToken($token_name, $technology, $network): \OpenAPI\Client\Model\NonFungibleTokenDTO
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\TokenControllerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$token_name = 'token_name_example'; // string
$technology = 'technology_example'; // string
$network = 'network_example'; // string

try {
    $result = $apiInstance->getNonFungibleToken($token_name, $technology, $network);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TokenControllerApi->getNonFungibleToken: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **token_name** | **string**|  |
 **technology** | **string**|  |
 **network** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\NonFungibleTokenDTO**](../Model/NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `*/*`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
