# WWW::OpenAPIClient::ManageQRC721TokenSupplyApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::ManageQRC721TokenSupplyApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_supply_request**](ManageQRC721TokenSupplyApi.md#prepare_supply_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply


# **prepare_supply_request**
> PrepareTransactionResponse prepare_supply_request(authorization => $authorization, prepare_mint_transaction_request_schema_qrc721 => $prepare_mint_transaction_request_schema_qrc721)

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageQRC721TokenSupplyApi;
my $api_instance = WWW::OpenAPIClient::ManageQRC721TokenSupplyApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_mint_transaction_request_schema_qrc721 = WWW::OpenAPIClient::Object::PrepareMintTransactionRequestSchemaQrc721->new(); # PrepareMintTransactionRequestSchemaQrc721 | 

eval {
    my $result = $api_instance->prepare_supply_request(authorization => $authorization, prepare_mint_transaction_request_schema_qrc721 => $prepare_mint_transaction_request_schema_qrc721);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageQRC721TokenSupplyApi->prepare_supply_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_mint_transaction_request_schema_qrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

