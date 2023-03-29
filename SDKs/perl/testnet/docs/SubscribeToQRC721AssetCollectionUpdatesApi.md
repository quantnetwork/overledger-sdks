# WWW::OpenAPIClient::SubscribeToQRC721AssetCollectionUpdatesApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC721AssetCollectionUpdatesApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_collect_event**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribe_collect_event) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected


# **subscribe_collect_event**
> EventSubscriptionResponse subscribe_collect_event(authorization => $authorization, body => $body)

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \"Approve Asset Collect\" to receive an update each time a token has been approved for collection, or use the type \"Collect Asset\" to receive an update each time a token has been collected.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC721AssetCollectionUpdatesApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC721AssetCollectionUpdatesApi->new(
);

my $authorization = "authorization_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_collect_event(authorization => $authorization, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC721AssetCollectionUpdatesApi->subscribe_collect_event: $@\n";
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

