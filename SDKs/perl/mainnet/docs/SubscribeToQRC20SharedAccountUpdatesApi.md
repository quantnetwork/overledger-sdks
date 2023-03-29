# WWW::OpenAPIClient::SubscribeToQRC20SharedAccountUpdatesApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC20SharedAccountUpdatesApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_secondary_owner_event**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribe_secondary_owner_event) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account


# **subscribe_secondary_owner_event**
> EventSubscriptionResponse subscribe_secondary_owner_event(authorization => $authorization, body => $body)

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC20SharedAccountUpdatesApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC20SharedAccountUpdatesApi->new(
);

my $authorization = "authorization_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_secondary_owner_event(authorization => $authorization, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC20SharedAccountUpdatesApi->subscribe_secondary_owner_event: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **body** | **object**|  | 

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

