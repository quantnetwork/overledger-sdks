# WWW::OpenAPIClient::RetrieveApprovedAccountInformationOfAQRC721TokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveApprovedAccountInformationOfAQRC721TokenApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_approved_account**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#read_qrc721_smart_contract_approved_account) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token


# **read_qrc721_smart_contract_approved_account**
> TokenReadQRC721Response read_qrc721_smart_contract_approved_account(authorization => $authorization, read_approved_account_request_schema => $read_approved_account_request_schema)

Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveApprovedAccountInformationOfAQRC721TokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveApprovedAccountInformationOfAQRC721TokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_approved_account_request_schema = WWW::OpenAPIClient::Object::ReadApprovedAccountRequestSchema->new(); # ReadApprovedAccountRequestSchema | 

eval {
    my $result = $api_instance->read_qrc721_smart_contract_approved_account(authorization => $authorization, read_approved_account_request_schema => $read_approved_account_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveApprovedAccountInformationOfAQRC721TokenApi->read_qrc721_smart_contract_approved_account: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_approved_account_request_schema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

