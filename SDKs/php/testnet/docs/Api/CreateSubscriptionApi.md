# OpenAPI\Client\CreateSubscriptionApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription()**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource


## `subscription()`

```php
subscription($authorization, $create_subscription_request_schema): \OpenAPI\Client\Model\CreateSubscriptionResponseSchema[]
```

Create a subscription for a transaction or monitored resource

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateSubscriptionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$create_subscription_request_schema = {"ids":["71633eb9-dcda-4a7d-a176-12ac0d0bb076"],"callbackUrl":"https://callbackurl/endpoint","type":"resourceMonitoringId"}; // \OpenAPI\Client\Model\CreateSubscriptionRequestSchema

try {
    $result = $apiInstance->subscription($authorization, $create_subscription_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateSubscriptionApi->subscription: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **create_subscription_request_schema** | [**\OpenAPI\Client\Model\CreateSubscriptionRequestSchema**](../Model/CreateSubscriptionRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\CreateSubscriptionResponseSchema[]**](../Model/CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
