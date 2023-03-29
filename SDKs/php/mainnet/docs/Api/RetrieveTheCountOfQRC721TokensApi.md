# OpenAPI\Client\RetrieveTheCountOfQRC721TokensApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokenCount()**](RetrieveTheCountOfQRC721TokensApi.md#getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account


## `getTokenCount()`

```php
getTokenCount($authorization, $read_balance_request_schema): \OpenAPI\Client\Model\TokenReadQRC721Response
```

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveTheCountOfQRC721TokensApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_balance_request_schema = {"requestDetails":{"tokenName":"QNTNFT","accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\ReadBalanceRequestSchema

try {
    $result = $apiInstance->getTokenCount($authorization, $read_balance_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveTheCountOfQRC721TokensApi->getTokenCount: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_balance_request_schema** | [**\OpenAPI\Client\Model\ReadBalanceRequestSchema**](../Model/ReadBalanceRequestSchema.md)|  |

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
