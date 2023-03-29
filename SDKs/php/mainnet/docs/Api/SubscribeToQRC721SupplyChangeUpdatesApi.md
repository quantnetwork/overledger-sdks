# OpenAPI\Client\SubscribeToQRC721SupplyChangeUpdatesApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSupplyEvent()**](SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token


## `subscribeSupplyEvent()`

```php
subscribeSupplyEvent($authorization, $flowtype, $body): \OpenAPI\Client\Model\EventSubscriptionResponse
```

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SubscribeToQRC721SupplyChangeUpdatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$flowtype = 'flowtype_example'; // string
$body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Burn Tokens","requestDetails":{"tokenName":"QNTNFT"}}; // object

try {
    $result = $apiInstance->subscribeSupplyEvent($authorization, $flowtype, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SubscribeToQRC721SupplyChangeUpdatesApi->subscribeSupplyEvent: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **flowtype** | **string**|  |
 **body** | **object**|  |

### Return type

[**\OpenAPI\Client\Model\EventSubscriptionResponse**](../Model/EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
