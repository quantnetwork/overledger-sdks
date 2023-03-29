# WWW::OpenAPIClient::SubscribeToQRC20AccountDebitPaymentsApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SubscribeToQRC20AccountDebitPaymentsApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_qrc20_debit_event**](SubscribeToQRC20AccountDebitPaymentsApi.md#subscribe_qrc20_debit_event) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved


# **subscribe_qrc20_debit_event**
> EventSubscriptionResponse subscribe_qrc20_debit_event(authorization => $authorization, body => $body)

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \"Create Debit\" to get an update when there is a debit payment on your account or \"Approve Debit\" to receive an update each time a token has been approved for debit.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SubscribeToQRC20AccountDebitPaymentsApi;
my $api_instance = WWW::OpenAPIClient::SubscribeToQRC20AccountDebitPaymentsApi->new(
);

my $authorization = "authorization_example"; # string | 
my $body = WWW::OpenAPIClient::Object::object->new(); # object | 

eval {
    my $result = $api_instance->subscribe_qrc20_debit_event(authorization => $authorization, body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SubscribeToQRC20AccountDebitPaymentsApi->subscribe_qrc20_debit_event: $@\n";
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

