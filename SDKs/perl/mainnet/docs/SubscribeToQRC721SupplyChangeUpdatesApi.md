# WWW::OpenAPIClient::SubscribeToQRC721SupplyChangeUpdatesApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC721SupplyChangeUpdatesApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_supply_event**](SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribe_supply_event) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token


# **subscribe_supply_event**
> EventSubscriptionResponse subscribe_supply_event(authorization => $authorization, flowtype => $flowtype, body => $body)

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC721SupplyChangeUpdatesApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC721SupplyChangeUpdatesApi->new(
);

my $authorization = "authorization_example"; # string | 
my $flowtype = "flowtype_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_supply_event(authorization => $authorization, flowtype => $flowtype, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC721SupplyChangeUpdatesApi->subscribe_supply_event: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **flowtype** | **string**|  | 
 **body** | **object**|  | 

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

