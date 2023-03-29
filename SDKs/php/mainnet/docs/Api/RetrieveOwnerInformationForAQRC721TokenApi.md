# OpenAPI\Client\RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractTokenOwner()**](RetrieveOwnerInformationForAQRC721TokenApi.md#readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token


## `readQRC721SmartContractTokenOwner()`

```php
readQRC721SmartContractTokenOwner($authorization, $read_token_owner_request_schema): \OpenAPI\Client\Model\TokenReadQRC721Response
```

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveOwnerInformationForAQRC721TokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_token_owner_request_schema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\ReadTokenOwnerRequestSchema

try {
    $result = $apiInstance->readQRC721SmartContractTokenOwner($authorization, $read_token_owner_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveOwnerInformationForAQRC721TokenApi->readQRC721SmartContractTokenOwner: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_token_owner_request_schema** | [**\OpenAPI\Client\Model\ReadTokenOwnerRequestSchema**](../Model/ReadTokenOwnerRequestSchema.md)|  |

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
