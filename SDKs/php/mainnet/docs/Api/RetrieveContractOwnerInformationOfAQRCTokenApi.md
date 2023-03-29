# OpenAPI\Client\RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRCSmartContractOwner()**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token


## `readQRCSmartContractOwner()`

```php
readQRCSmartContractOwner($authorization, $flow_type, $prepare_request): \OpenAPI\Client\Model\TokenReadQRC721Response
```

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveContractOwnerInformationOfAQRCTokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$flow_type = 'flow_type_example'; // string
$prepare_request = new \OpenAPI\Client\Model\PrepareRequest(); // \OpenAPI\Client\Model\PrepareRequest

try {
    $result = $apiInstance->readQRCSmartContractOwner($authorization, $flow_type, $prepare_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveContractOwnerInformationOfAQRCTokenApi->readQRCSmartContractOwner: ', $e->getMessage(), PHP_EOL;
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
