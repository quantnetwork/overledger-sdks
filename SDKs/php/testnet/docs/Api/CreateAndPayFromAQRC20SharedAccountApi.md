# OpenAPI\Client\CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction()**](CreateAndPayFromAQRC20SharedAccountApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareSecondaryOwnerRequest()**](CreateAndPayFromAQRC20SharedAccountApi.md#prepareSecondaryOwnerRequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account


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


$apiInstance = new OpenAPI\Client\Api\CreateAndPayFromAQRC20SharedAccountApi(
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
    echo 'Exception when calling CreateAndPayFromAQRC20SharedAccountApi->executePreparedRequestTransaction: ', $e->getMessage(), PHP_EOL;
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

## `prepareSecondaryOwnerRequest()`

```php
prepareSecondaryOwnerRequest($authorization, $prepare_add_secondary_account_request_schema): \OpenAPI\Client\Model\PrepareTransactionResponse
```

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateAndPayFromAQRC20SharedAccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$prepare_add_secondary_account_request_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Credit","urgency":"normal","requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"},"payee":[{"payment":{"amount":"0.00001","unit":"FRZ"},"payeeId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}],"payer":[{"payerId":"0x37dc24fd0b91bd2b17c5e4b52d90f13dacc057aa"}]}}; // \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema

try {
    $result = $apiInstance->prepareSecondaryOwnerRequest($authorization, $prepare_add_secondary_account_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateAndPayFromAQRC20SharedAccountApi->prepareSecondaryOwnerRequest: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **prepare_add_secondary_account_request_schema** | [**\OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema**](../Model/PrepareAddSecondaryAccountRequestSchema.md)|  |

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
