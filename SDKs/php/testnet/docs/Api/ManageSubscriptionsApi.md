# OpenAPI\Client\ManageSubscriptionsApi

All URIs are relative to https://api.sandbox.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteSubscription()**](ManageSubscriptionsApi.md#deleteSubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**listSubscriptions()**](ManageSubscriptionsApi.md#listSubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**updateSubscription()**](ManageSubscriptionsApi.md#updateSubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application


## `deleteSubscription()`

```php
deleteSubscription($authorization, $subscription_id): \OpenAPI\Client\Model\WebhookSubscriptionStatusUpdateResponse
```

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageSubscriptionsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$subscription_id = 'subscription_id_example'; // string

try {
    $result = $apiInstance->deleteSubscription($authorization, $subscription_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageSubscriptionsApi->deleteSubscription: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **subscription_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\WebhookSubscriptionStatusUpdateResponse**](../Model/WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `listSubscriptions()`

```php
listSubscriptions($authorization): \OpenAPI\Client\Model\ListWebhookSubscriptionResponseSchema[]
```

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageSubscriptionsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string

try {
    $result = $apiInstance->listSubscriptions($authorization);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageSubscriptionsApi->listSubscriptions: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ListWebhookSubscriptionResponseSchema[]**](../Model/ListWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateSubscription()`

```php
updateSubscription($authorization, $subscription_id, $update_webhook_subscription_request_schema): \OpenAPI\Client\Model\WebhookSubscriptionStatusUpdateResponse
```

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageSubscriptionsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$subscription_id = 'subscription_id_example'; // string
$update_webhook_subscription_request_schema = {"statusUpdate":{"value":"ACTIVE"},"callbackUrl":"https://newcallbackUrl/endpoint"}; // \OpenAPI\Client\Model\UpdateWebhookSubscriptionRequestSchema

try {
    $result = $apiInstance->updateSubscription($authorization, $subscription_id, $update_webhook_subscription_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageSubscriptionsApi->updateSubscription: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **subscription_id** | **string**|  |
 **update_webhook_subscription_request_schema** | [**\OpenAPI\Client\Model\UpdateWebhookSubscriptionRequestSchema**](../Model/UpdateWebhookSubscriptionRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\WebhookSubscriptionStatusUpdateResponse**](../Model/WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
