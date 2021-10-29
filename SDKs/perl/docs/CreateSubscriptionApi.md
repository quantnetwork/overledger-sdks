# WWW::OpenAPIClient::CreateSubscriptionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateSubscriptionApi;
```

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 


# **subscription**
> ARRAY[CreateSubscriptionResponseSchema] subscription(authorization => $authorization, create_subscription_request_schema => $create_subscription_request_schema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateSubscriptionApi;
my $api_instance = WWW::OpenAPIClient::CreateSubscriptionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $create_subscription_request_schema = WWW::OpenAPIClient::Object::CreateSubscriptionRequestSchema->new(); # CreateSubscriptionRequestSchema | 

eval {
    my $result = $api_instance->subscription(authorization => $authorization, create_subscription_request_schema => $create_subscription_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateSubscriptionApi->subscription: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **create_subscription_request_schema** | [**CreateSubscriptionRequestSchema**](CreateSubscriptionRequestSchema.md)|  | 

### Return type

[**ARRAY[CreateSubscriptionResponseSchema]**](CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

