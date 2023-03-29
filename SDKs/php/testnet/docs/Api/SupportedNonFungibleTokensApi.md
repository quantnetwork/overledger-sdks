# OpenAPI\Client\SupportedNonFungibleTokensApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**getAllNonFungibleTokens()**](SupportedNonFungibleTokensApi.md#getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens


## `getAllNonFungibleTokens()`

```php
getAllNonFungibleTokens($authorization, $contract_type, $technology, $network, $token_name): \OpenAPI\Client\Model\NonFungibleTokenResponse
```

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SupportedNonFungibleTokensApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$contract_type = 'contract_type_example'; // string
$technology = 'technology_example'; // string
$network = 'network_example'; // string
$token_name = 'token_name_example'; // string

try {
    $result = $apiInstance->getAllNonFungibleTokens($authorization, $contract_type, $technology, $network, $token_name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SupportedNonFungibleTokensApi->getAllNonFungibleTokens: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **contract_type** | **string**|  | [optional]
 **technology** | **string**|  | [optional]
 **network** | **string**|  | [optional]
 **token_name** | **string**|  | [optional]

### Return type

[**\OpenAPI\Client\Model\NonFungibleTokenResponse**](../Model/NonFungibleTokenResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
