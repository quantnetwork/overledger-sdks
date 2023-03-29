# OpenAPI\Client\SubscribeToQRC20AccountCreditPaymentsApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCreditEvent()**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account


## `subscribeCreditEvent()`

```php
subscribeCreditEvent($authorization, $body): \OpenAPI\Client\Model\EventSubscriptionResponse
```

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SubscribeToQRC20AccountCreditPaymentsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Credit","requestDetails":{"tokenUnit":"QNTNS"}}; // object

try {
    $result = $apiInstance->subscribeCreditEvent($authorization, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SubscribeToQRC20AccountCreditPaymentsApi->subscribeCreditEvent: ', $e->getMessage(), PHP_EOL;
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
