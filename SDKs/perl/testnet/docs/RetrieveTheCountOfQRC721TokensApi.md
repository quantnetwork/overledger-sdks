# WWW::OpenAPIClient::RetrieveTheCountOfQRC721TokensApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveTheCountOfQRC721TokensApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_token_count**](RetrieveTheCountOfQRC721TokensApi.md#get_token_count) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account


# **get_token_count**
> TokenReadQRC721Response get_token_count(authorization => $authorization, read_balance_request_schema => $read_balance_request_schema)

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveTheCountOfQRC721TokensApi;
my $api_instance = WWW::OpenAPIClient::RetrieveTheCountOfQRC721TokensApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_balance_request_schema = WWW::OpenAPIClient::Object::ReadBalanceRequestSchema->new(); # ReadBalanceRequestSchema | 

eval {
    my $result = $api_instance->get_token_count(authorization => $authorization, read_balance_request_schema => $read_balance_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveTheCountOfQRC721TokensApi->get_token_count: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_balance_request_schema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

