# WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveApprovedAccountAllowanceForAQRC20TokenApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_approved_debit_amount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#read_approved_debit_amount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit


# **read_approved_debit_amount**
> TokenReadQRC20Response read_approved_debit_amount(authorization => $authorization, read_approved_account_allowance_request_schema => $read_approved_account_allowance_request_schema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_approved_account_allowance_request_schema = WWW::OpenAPIClient::Object::ReadApprovedAccountAllowanceRequestSchema->new(); # ReadApprovedAccountAllowanceRequestSchema | 

eval {
    my $result = $api_instance->read_approved_debit_amount(authorization => $authorization, read_approved_account_allowance_request_schema => $read_approved_account_allowance_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi->read_approved_debit_amount: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_approved_account_allowance_request_schema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

