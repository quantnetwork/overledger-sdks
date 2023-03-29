# WWW::OpenAPIClient::RetrieveApprovedAccountInformationForAQRC20TokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveApprovedAccountInformationForAQRC20TokenApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc20_secondary_account_owner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#read_qrc20_secondary_account_owner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.


# **read_qrc20_secondary_account_owner**
> TokenReadQRC20Response read_qrc20_secondary_account_owner(authorization => $authorization, read_contract_owner_request_schema => $read_contract_owner_request_schema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveApprovedAccountInformationForAQRC20TokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveApprovedAccountInformationForAQRC20TokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_contract_owner_request_schema = WWW::OpenAPIClient::Object::ReadContractOwnerRequestSchema->new(); # ReadContractOwnerRequestSchema | 

eval {
    my $result = $api_instance->read_qrc20_secondary_account_owner(authorization => $authorization, read_contract_owner_request_schema => $read_contract_owner_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveApprovedAccountInformationForAQRC20TokenApi->read_qrc20_secondary_account_owner: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_contract_owner_request_schema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

