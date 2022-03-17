# OpenAPI\Client\CreateAQRC20DebitTransactionApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareDebitRequest()**](CreateAQRC20DebitTransactionApi.md#prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


## `prepareDebitRequest()`

```php
prepareDebitRequest($authorization, $prepare_credit_transaction_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \"Approve Debit\" and \"Create Debit\". The 'Approve Debit' transaction type will allow you to approve someone to make a pull payment from your account and the \"Create Debit\" transaction type will create the payment to pull the approved amount from an account.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateAQRC20DebitTransactionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_credit_transaction_request_schema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"1.0","unit":"QNT"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Debit"}; // \OpenAPI\Client\Model\PrepareCreditTransactionRequestSchema

try {
    $result = $apiInstance->prepareDebitRequest($authorization, $prepare_credit_transaction_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateAQRC20DebitTransactionApi->prepareDebitRequest: ', $e->getMessage(), PHP_EOL;
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
