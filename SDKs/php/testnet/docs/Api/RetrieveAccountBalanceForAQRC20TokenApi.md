# OpenAPI\Client\RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SmartContractBalance()**](RetrieveAccountBalanceForAQRC20TokenApi.md#readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account


## `readQRC20SmartContractBalance()`

```php
readQRC20SmartContractBalance($authorization, $read_account_balance_request_schema): \OpenAPI\Client\Model\TokenReadQRC20Response
```

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveAccountBalanceForAQRC20TokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_account_balance_request_schema = {"requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d","unit":"ROCKET"}},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\ReadAccountBalanceRequestSchema

try {
    $result = $apiInstance->readQRC20SmartContractBalance($authorization, $read_account_balance_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveAccountBalanceForAQRC20TokenApi->readQRC20SmartContractBalance: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_account_balance_request_schema** | [**\OpenAPI\Client\Model\ReadAccountBalanceRequestSchema**](../Model/ReadAccountBalanceRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\TokenReadQRC20Response**](../Model/TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
