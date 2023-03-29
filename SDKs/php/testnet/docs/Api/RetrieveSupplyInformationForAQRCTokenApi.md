# OpenAPI\Client\RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractCurrentSupply()**](RetrieveSupplyInformationForAQRCTokenApi.md#readQRC721SmartContractCurrentSupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply


## `readQRC721SmartContractCurrentSupply()`

```php
readQRC721SmartContractCurrentSupply($authorization, $flow_type, $prepare_request): \OpenAPI\Client\Model\TokenReadQRC721Response
```

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveSupplyInformationForAQRCTokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$flow_type = 'flow_type_example'; // string
$prepare_request = new \OpenAPI\Client\Model\PrepareRequest(); // \OpenAPI\Client\Model\PrepareRequest

try {
    $result = $apiInstance->readQRC721SmartContractCurrentSupply($authorization, $flow_type, $prepare_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveSupplyInformationForAQRCTokenApi->readQRC721SmartContractCurrentSupply: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **flow_type** | **string**|  |
 **prepare_request** | [**\OpenAPI\Client\Model\PrepareRequest**](../Model/PrepareRequest.md)|  |

### Return type

[**\OpenAPI\Client\Model\TokenReadQRC721Response**](../Model/TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
