# WWW::OpenAPIClient::CreateAQRC20CreditTransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateAQRC20CreditTransactionApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_credit_request**](CreateAQRC20CreditTransactionApi.md#prepare_credit_request) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing


# **prepare_credit_request**
> PrepareTransactionResponse prepare_credit_request(authorization => $authorization, prepare_credit_transaction_request_schema => $prepare_credit_transaction_request_schema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \"Create Credit\" which will allow you to make a payment to another specified account.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAQRC20CreditTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateAQRC20CreditTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_credit_transaction_request_schema = WWW::OpenAPIClient::Object::PrepareCreditTransactionRequestSchema->new(); # PrepareCreditTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_credit_request(authorization => $authorization, prepare_credit_transaction_request_schema => $prepare_credit_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAQRC20CreditTransactionApi->prepare_credit_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_credit_transaction_request_schema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

