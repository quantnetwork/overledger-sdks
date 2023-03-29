# OpenAPI\Client\CreateASubscriptionApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription()**](CreateASubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource


## `subscription()`

```php
subscription($authorization, $create_webhook_subscription_request_schema): \OpenAPI\Client\Model\CreateWebhookSubscriptionResponseSchema[]
```

Create a subscription for a transaction or monitored resource

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\CreateASubscriptionApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$create_webhook_subscription_request_schema = {"type":"resourceMonitoringId","ids":["71633eb9-dcda-4a7d-a176-12ac0d0bb076"],"callbackUrl":"https://callbackurl/endpoint"}; // \OpenAPI\Client\Model\CreateWebhookSubscriptionRequestSchema

try {
    $result = $apiInstance->subscription($authorization, $create_webhook_subscription_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CreateASubscriptionApi->subscription: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **create_webhook_subscription_request_schema** | [**\OpenAPI\Client\Model\CreateWebhookSubscriptionRequestSchema**](../Model/CreateWebhookSubscriptionRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\CreateWebhookSubscriptionResponseSchema[]**](../Model/CreateWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
