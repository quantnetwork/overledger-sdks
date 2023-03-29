# WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateAQRC721TokenCollectionTransactionApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_collect_request**](CreateAQRC721TokenCollectionTransactionApi.md#prepare_collect_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing


# **prepare_collect_request**
> PrepareTransactionResponse prepare_collect_request(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema)

Prepare a QRC721 token collection transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_payment_transaction_request_schema = WWW::OpenAPIClient::Object::PreparePaymentTransactionRequestSchema->new(); # PreparePaymentTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_collect_request(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAQRC721TokenCollectionTransactionApi->prepare_collect_request: $@\n";
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

