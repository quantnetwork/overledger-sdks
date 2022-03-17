# OpenAPI\Client\CreateAQRC20CreditTransactionApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareCreditRequest()**](CreateAQRC20CreditTransactionApi.md#prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing


## `prepareCreditRequest()`

```php
prepareCreditRequest($authorization, $prepare_credit_transaction_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \"Create Credit\" which will allow you to make a payment to another specified account.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateAQRC20CreditTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_credit_transaction_request_schema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"0.0000001","unit":"TEST"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Credit"}; // \OpenAPI\Client\Model\PrepareCreditTransactionRequestSchema

try {
    $result = $apiInstance->prepareCreditRequest($authorization, $prepare_credit_transaction_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateAQRC20CreditTransactionApi->prepareCreditRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_credit_transaction_request_schema** | [**\OpenAPI\Client\Model\PrepareCreditTransactionRequestSchema**](../Model/PrepareCreditTransactionRequestSchema.md)|  |

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
