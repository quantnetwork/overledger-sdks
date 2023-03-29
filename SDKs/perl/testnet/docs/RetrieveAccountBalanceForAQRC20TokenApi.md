# WWW::OpenAPIClient::RetrieveAccountBalanceForAQRC20TokenApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RetrieveAccountBalanceForAQRC20TokenApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc20_smart_contract_balance**](RetrieveAccountBalanceForAQRC20TokenApi.md#read_qrc20_smart_contract_balance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account


# **read_qrc20_smart_contract_balance**
> TokenReadQRC20Response read_qrc20_smart_contract_balance(authorization => $authorization, read_account_balance_request_schema => $read_account_balance_request_schema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RetrieveAccountBalanceForAQRC20TokenApi;
my $api_instance = WWW::OpenAPIClient::RetrieveAccountBalanceForAQRC20TokenApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $read_account_balance_request_schema = WWW::OpenAPIClient::Object::ReadAccountBalanceRequestSchema->new(); # ReadAccountBalanceRequestSchema | 

eval {
    my $result = $api_instance->read_qrc20_smart_contract_balance(authorization => $authorization, read_account_balance_request_schema => $read_account_balance_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RetrieveAccountBalanceForAQRC20TokenApi->read_qrc20_smart_contract_balance: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **read_account_balance_request_schema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

