# OpenAPI\Client\CreateAQRC721TransferTransactionApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareTransactionRequest()**](CreateAQRC721TransferTransactionApi.md#prepareTransactionRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing


## `prepareTransactionRequest()`

```php
prepareTransactionRequest($authorization, $prepare_payment_transaction_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateAQRC721TransferTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_payment_transaction_request_schema = {"location":{"technology":"Substrate","network":"Polkadot Westend Testnet"},"type":"PAYMENT","urgency":"normal","requestDetails":{"destination":[{"destinationId":"5FLSigC9HGRKVhB9FiEo4Y3koPsNmBmLJbpXg2mp1hXcS59Y","payment":{"amount":"0.0000000001","unit":"WND"}}],"message":"OVL Transaction Message","overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"5GrwvaEF5zXb26Fz9rcQpDWS57CtERHpNehXCPcNoHGKutQY"}]}}; // \OpenAPI\Client\Model\PreparePaymentTransactionRequestSchema

try {
    $result = $apiInstance->prepareTransactionRequest($authorization, $prepare_payment_transaction_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateAQRC721TransferTransactionApi->prepareTransactionRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_payment_transaction_request_schema** | [**\OpenAPI\Client\Model\PreparePaymentTransactionRequestSchema**](../Model/PreparePaymentTransactionRequestSchema.md)|  |

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
