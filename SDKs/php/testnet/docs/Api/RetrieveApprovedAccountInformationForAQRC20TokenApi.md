# OpenAPI\Client\RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SecondaryAccountOwner()**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.


## `readQRC20SecondaryAccountOwner()`

```php
readQRC20SecondaryAccountOwner($authorization, $read_contract_owner_request_schema): \OpenAPI\Client\Model\TokenReadQRC20Response
```

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RetrieveApprovedAccountInformationForAQRC20TokenApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$read_contract_owner_request_schema = {"tokenName":"QNTNFT","responseDetails":{"name":"Approved Account","type":"bool","value":"true"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"requestId":"a7db0ee3-ed9c-409a-9b51-57075a570aa0"}; // \OpenAPI\Client\Model\ReadContractOwnerRequestSchema

try {
    $result = $apiInstance->readQRC20SecondaryAccountOwner($authorization, $read_contract_owner_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RetrieveApprovedAccountInformationForAQRC20TokenApi->readQRC20SecondaryAccountOwner: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **read_contract_owner_request_schema** | [**\OpenAPI\Client\Model\ReadContractOwnerRequestSchema**](../Model/ReadContractOwnerRequestSchema.md)|  |

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
