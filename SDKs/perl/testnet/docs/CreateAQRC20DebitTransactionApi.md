# WWW::OpenAPIClient::CreateAQRC20DebitTransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateAQRC20DebitTransactionApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_debit_request**](CreateAQRC20DebitTransactionApi.md#prepare_debit_request) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


# **prepare_debit_request**
> PrepareTransactionResponse prepare_debit_request(authorization => $authorization, prepare_credit_transaction_request_schema => $prepare_credit_transaction_request_schema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \"Approve Debit\" and \"Create Debit\". The 'Approve Debit' transaction type will allow you to approve someone to make a pull payment from your account and the \"Create Debit\" transaction type will create the payment to pull the approved amount from an account.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAQRC20DebitTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateAQRC20DebitTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_credit_transaction_request_schema = WWW::OpenAPIClient::Object::PrepareCreditTransactionRequestSchema->new(); # PrepareCreditTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_debit_request(authorization => $authorization, prepare_credit_transaction_request_schema => $prepare_credit_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAQRC20DebitTransactionApi->prepare_debit_request: $@\n";
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

