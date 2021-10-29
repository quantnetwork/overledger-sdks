# WWW::OpenAPIClient::ManageSubscriptionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::ManageSubscriptionApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_subscription**](ManageSubscriptionApi.md#delete_subscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**list_subscriptions**](ManageSubscriptionApi.md#list_subscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**update_subscription**](ManageSubscriptionApi.md#update_subscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application


# **delete_subscription**
> SubscriptionDeletionResponse delete_subscription(authorization => $authorization, subscription_id => $subscription_id)

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageSubscriptionApi;
my $api_instance = WWW::OpenAPIClient::ManageSubscriptionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $subscription_id = "subscription_id_example"; # string | 

eval {
    my $result = $api_instance->delete_subscription(authorization => $authorization, subscription_id => $subscription_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageSubscriptionApi->delete_subscription: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **subscription_id** | **string**|  | 

### Return type

[**SubscriptionDeletionResponse**](SubscriptionDeletionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_subscriptions**
> ARRAY[ListSubscriptionResponseSchema] list_subscriptions(authorization => $authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageSubscriptionApi;
my $api_instance = WWW::OpenAPIClient::ManageSubscriptionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 

eval {
    my $result = $api_instance->list_subscriptions(authorization => $authorization);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageSubscriptionApi->list_subscriptions: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 

### Return type

[**ARRAY[ListSubscriptionResponseSchema]**](ListSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_subscription**
> SubscriptionUpdateResponse update_subscription(authorization => $authorization, subscription_id => $subscription_id, update_subscription_request_schema => $update_subscription_request_schema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageSubscriptionApi;
my $api_instance = WWW::OpenAPIClient::ManageSubscriptionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $subscription_id = "subscription_id_example"; # string | 
my $update_subscription_request_schema = WWW::OpenAPIClient::Object::UpdateSubscriptionRequestSchema->new(); # UpdateSubscriptionRequestSchema | 

eval {
    my $result = $api_instance->update_subscription(authorization => $authorization, subscription_id => $subscription_id, update_subscription_request_schema => $update_subscription_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageSubscriptionApi->update_subscription: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **subscription_id** | **string**|  | 
 **update_subscription_request_schema** | [**UpdateSubscriptionRequestSchema**](UpdateSubscriptionRequestSchema.md)|  | 

### Return type

[**SubscriptionUpdateResponse**](SubscriptionUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

