# WWW::OpenAPIClient::RetrieveContractOwnerInformationOfAQRCTokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveContractOwnerInformationOfAQRCTokenApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc_smart_contract_owner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#read_qrc_smart_contract_owner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token


# **read_qrc_smart_contract_owner**
> TokenReadQRC721Response read_qrc_smart_contract_owner(authorization => $authorization, flow_type => $flow_type, prepare_request => $prepare_request)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveContractOwnerInformationOfAQRCTokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveContractOwnerInformationOfAQRCTokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $flow_type = "flow_type_example"; # string | 
my $prepare_request = WWW::OpenAPIClient::Object::PrepareRequest->new(); # PrepareRequest | 

eval {
    my $result = $api_instance->read_qrc_smart_contract_owner(authorization => $authorization, flow_type => $flow_type, prepare_request => $prepare_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveContractOwnerInformationOfAQRCTokenApi->read_qrc_smart_contract_owner: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **flow_type** | **string**|  | 
 **prepare_request** | [**PrepareRequest**](PrepareRequest.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

