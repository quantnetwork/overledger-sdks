# WWW::OpenAPIClient::CreateAQRC721TransferTransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateAQRC721TransferTransactionApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_transaction_request**](CreateAQRC721TransferTransactionApi.md#prepare_transaction_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing


# **prepare_transaction_request**
> PrepareTransactionResponse prepare_transaction_request(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema)

Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAQRC721TransferTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateAQRC721TransferTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_payment_transaction_request_schema = WWW::OpenAPIClient::Object::PreparePaymentTransactionRequestSchema->new(); # PreparePaymentTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_transaction_request(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAQRC721TransferTransactionApi->prepare_transaction_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

