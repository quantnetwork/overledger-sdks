# OpenAPI\Client\SubscribeToQRC20SharedAccountUpdatesApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSecondaryOwnerEvent()**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account


## `subscribeSecondaryOwnerEvent()`

```php
subscribeSecondaryOwnerEvent($authorization, $body): \OpenAPI\Client\Model\EventSubscriptionResponse
```

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SubscribeToQRC20SharedAccountUpdatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Add Account","requestDetails":{"tokenUnit":"QNTNS"}}; // object

try {
    $result = $apiInstance->subscribeSecondaryOwnerEvent($authorization, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SubscribeToQRC20SharedAccountUpdatesApi->subscribeSecondaryOwnerEvent: ', $e->getMessage(), PHP_EOL;
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
