# WWW::OpenAPIClient::RetrieveOwnerInformationForAQRC721TokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveOwnerInformationForAQRC721TokenApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_token_owner**](RetrieveOwnerInformationForAQRC721TokenApi.md#read_qrc721_smart_contract_token_owner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token


# **read_qrc721_smart_contract_token_owner**
> TokenReadQRC721Response read_qrc721_smart_contract_token_owner(authorization => $authorization, read_token_owner_request_schema => $read_token_owner_request_schema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveOwnerInformationForAQRC721TokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveOwnerInformationForAQRC721TokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_token_owner_request_schema = WWW::OpenAPIClient::Object::ReadTokenOwnerRequestSchema->new(); # ReadTokenOwnerRequestSchema | 

eval {
    my $result = $api_instance->read_qrc721_smart_contract_token_owner(authorization => $authorization, read_token_owner_request_schema => $read_token_owner_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveOwnerInformationForAQRC721TokenApi->read_qrc721_smart_contract_token_owner: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_token_owner_request_schema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

