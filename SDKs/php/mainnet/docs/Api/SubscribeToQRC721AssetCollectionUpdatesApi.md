# OpenAPI\Client\SubscribeToQRC721AssetCollectionUpdatesApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCollectEvent()**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected


## `subscribeCollectEvent()`

```php
subscribeCollectEvent($authorization, $body): \OpenAPI\Client\Model\EventSubscriptionResponse
```

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \"Approve Asset Collect\" to receive an update each time a token has been approved for collection, or use the type \"Collect Asset\" to receive an update each time a token has been collected.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SubscribeToQRC721AssetCollectionUpdatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Approve Asset Collect","requestDetails":{"tokenName":"QNTNFT"}}; // object

try {
    $result = $apiInstance->subscribeCollectEvent($authorization, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SubscribeToQRC721AssetCollectionUpdatesApi->subscribeCollectEvent: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
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
