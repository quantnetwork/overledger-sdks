# WWW::OpenAPIClient::SubscribeToQRC20AccountCreditPaymentsApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC20AccountCreditPaymentsApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_credit_event**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribe_credit_event) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account


# **subscribe_credit_event**
> EventSubscriptionResponse subscribe_credit_event(authorization => $authorization, body => $body)

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC20AccountCreditPaymentsApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC20AccountCreditPaymentsApi->new(
);

my $authorization = "authorization_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_credit_event(authorization => $authorization, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC20AccountCreditPaymentsApi->subscribe_credit_event: $@\n";
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

