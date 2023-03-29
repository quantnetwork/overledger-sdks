# WWW::OpenAPIClient::SubscribeToQRC721AssetTransfersApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC721AssetTransfersApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_transfer_event**](SubscribeToQRC721AssetTransfersApi.md#subscribe_transfer_event) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred


# **subscribe_transfer_event**
> EventSubscriptionResponse subscribe_transfer_event(authorization => $authorization, body => $body)

Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \"Create Transfer\" to receive an update each time a token is transferred to a different owner.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC721AssetTransfersApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC721AssetTransfersApi->new(
);

my $authorization = "authorization_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_transfer_event(authorization => $authorization, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC721AssetTransfersApi->subscribe_transfer_event: $@\n";
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

