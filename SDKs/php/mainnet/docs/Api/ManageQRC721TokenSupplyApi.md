# OpenAPI\Client\ManageQRC721TokenSupplyApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareSupplyRequest()**](ManageQRC721TokenSupplyApi.md#prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply


## `prepareSupplyRequest()`

```php
prepareSupplyRequest($authorization, $prepare_mint_transaction_request_schema_qrc721): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageQRC721TokenSupplyApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_mint_transaction_request_schema_qrc721 = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Burn Tokens","urgency":"normal","requestDetails":{"owner":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116","burn":{"tokenId":"2","tokenName":"QNTNFT","metadata":"something"}},"overledgerSigningType":"overledger-javascript-library"}}; // \OpenAPI\Client\Model\PrepareMintTransactionRequestSchemaQrc721

try {
    $result = $apiInstance->prepareSupplyRequest($authorization, $prepare_mint_transaction_request_schema_qrc721);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageQRC721TokenSupplyApi->prepareSupplyRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_mint_transaction_request_schema_qrc721** | [**\OpenAPI\Client\Model\PrepareMintTransactionRequestSchemaQrc721**](../Model/PrepareMintTransactionRequestSchemaQrc721.md)|  |

### Return type

[**\OpenAPI\Client\Model\PrepareTransactionResponse**](../Model/PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
