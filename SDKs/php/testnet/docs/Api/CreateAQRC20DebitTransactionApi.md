# OpenAPI\Client\CreateAQRC20DebitTransactionApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction()**](CreateAQRC20DebitTransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareDebitRequest()**](CreateAQRC20DebitTransactionApi.md#prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


## `executePreparedRequestTransaction()`

```php
executePreparedRequestTransaction($authorization, $execute_transaction_request): \OpenAPI\Client\Model\ExecuteTransactionResponse
```

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

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
$execute_transaction_request = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"}; // \OpenAPI\Client\Model\ExecuteTransactionRequest

try {
    $result = $apiInstance->executePreparedRequestTransaction($authorization, $execute_transaction_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateAQRC20DebitTransactionApi->executePreparedRequestTransaction: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **execute_transaction_request** | [**\OpenAPI\Client\Model\ExecuteTransactionRequest**](../Model/ExecuteTransactionRequest.md)|  |

### Return type

[**\OpenAPI\Client\Model\ExecuteTransactionResponse**](../Model/ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `prepareDebitRequest()`

```php
prepareDebitRequest($authorization, $prepare_credit_transaction_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Debit” and “Create Debit”. The ‘Approve Debit’ transaction type will allow you to approve someone to make a pull payment from your account and the “Create Debit” transaction type will create the payment to pull the approved amount from an account.

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
$prepare_credit_transaction_request_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Debit","urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"1.0","unit":"QNT"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"overledgerSigningType":"overledger-javascript-library"}}; // \OpenAPI\Client\Model\PrepareCreditTransactionRequestSchema

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
