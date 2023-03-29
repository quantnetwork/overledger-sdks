# OpenAPI\Client\SubscribeToQRC20AccountDebitPaymentsApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeQRC20DebitEvent()**](SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved


## `subscribeQRC20DebitEvent()`

```php
subscribeQRC20DebitEvent($authorization, $body): \OpenAPI\Client\Model\EventSubscriptionResponse
```

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \"Create Debit\" to get an update when there is a debit payment on your account or \"Approve Debit\" to receive an update each time a token has been approved for debit.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\SubscribeToQRC20AccountDebitPaymentsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$authorization = 'authorization_example'; // string
$body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Debit","requestDetails":{"tokenUnit":"QNTNS"}}; // object

try {
    $result = $apiInstance->subscribeQRC20DebitEvent($authorization, $body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SubscribeToQRC20AccountDebitPaymentsApi->subscribeQRC20DebitEvent: ', $e->getMessage(), PHP_EOL;
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
