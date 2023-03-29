# OpenAPI\Client\RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractApprovedAccount()**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readQRC721SmartContractApprovedAccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token


## `readQRC721SmartContractApprovedAccount()`

```php
readQRC721SmartContractApprovedAccount($authorization, $read_approved_account_request_schema): \OpenAPI\Client\Model\TokenReadQRC721Response
```

Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveApprovedAccountInformationOfAQRC721TokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_approved_account_request_schema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\ReadApprovedAccountRequestSchema

try {
    $result = $apiInstance->readQRC721SmartContractApprovedAccount($authorization, $read_approved_account_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveApprovedAccountInformationOfAQRC721TokenApi->readQRC721SmartContractApprovedAccount: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_approved_account_request_schema** | [**\OpenAPI\Client\Model\ReadApprovedAccountRequestSchema**](../Model/ReadApprovedAccountRequestSchema.md)|  |

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
