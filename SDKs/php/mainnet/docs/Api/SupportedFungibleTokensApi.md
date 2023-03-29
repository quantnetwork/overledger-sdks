# OpenAPI\Client\SupportedFungibleTokensApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokens()**](SupportedFungibleTokensApi.md#getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens


## `getTokens()`

```php
getTokens($location, $contract_type, $unit): \OpenAPI\Client\Model\FungibleTokenResponseDTO
```

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SupportedFungibleTokensApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$location = new \OpenAPI\Client\Model\\OpenAPI\Client\Model\Location(); // \OpenAPI\Client\Model\Location
$contract_type = 'contract_type_example'; // string
$unit = 'unit_example'; // string

try {
    $result = $apiInstance->getTokens($location, $contract_type, $unit);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SupportedFungibleTokensApi->getTokens: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **location** | [**\OpenAPI\Client\Model\Location**](../Model/.md)|  | [optional]
 **contract_type** | **string**|  | [optional]
 **unit** | **string**|  | [optional]

### Return type

[**\OpenAPI\Client\Model\FungibleTokenResponseDTO**](../Model/FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
