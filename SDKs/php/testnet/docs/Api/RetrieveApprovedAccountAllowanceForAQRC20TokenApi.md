# OpenAPI\Client\RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readApprovedDebitAmount()**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit


## `readApprovedDebitAmount()`

```php
readApprovedDebitAmount($authorization, $read_approved_account_allowance_request_schema): \OpenAPI\Client\Model\TokenReadQRC20Response
```

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveApprovedAccountAllowanceForAQRC20TokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_approved_account_allowance_request_schema = {"requestDetails":{"payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"tokenUnit":"RobTK","mandate":[{"payeeId":"0x37dC24Fd0b91Bd2B17C5e4b52d90f13DAcc057aA"}]},"location":{"technology":"Ethereum","network":"ethereum goerli testnet"}}; // \OpenAPI\Client\Model\ReadApprovedAccountAllowanceRequestSchema

try {
    $result = $apiInstance->readApprovedDebitAmount($authorization, $read_approved_account_allowance_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi->readApprovedDebitAmount: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_approved_account_allowance_request_schema** | [**\OpenAPI\Client\Model\ReadApprovedAccountAllowanceRequestSchema**](../Model/ReadApprovedAccountAllowanceRequestSchema.md)|  |

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
