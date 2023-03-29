# WWW::OpenAPIClient::RetrieveSupplyInformationForAQRCTokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveSupplyInformationForAQRCTokenApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_current_supply**](RetrieveSupplyInformationForAQRCTokenApi.md#read_qrc721_smart_contract_current_supply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply


# **read_qrc721_smart_contract_current_supply**
> TokenReadQRC721Response read_qrc721_smart_contract_current_supply(authorization => $authorization, flow_type => $flow_type, prepare_request => $prepare_request)

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveSupplyInformationForAQRCTokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveSupplyInformationForAQRCTokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $flow_type = "flow_type_example"; # string | 
my $prepare_request = WWW::OpenAPIClient::Object::PrepareRequest->new(); # PrepareRequest | 

eval {
    my $result = $api_instance->read_qrc721_smart_contract_current_supply(authorization => $authorization, flow_type => $flow_type, prepare_request => $prepare_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveSupplyInformationForAQRCTokenApi->read_qrc721_smart_contract_current_supply: $@\n";
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

