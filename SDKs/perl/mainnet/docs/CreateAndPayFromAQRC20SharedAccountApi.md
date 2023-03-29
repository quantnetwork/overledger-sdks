# WWW::OpenAPIClient::CreateAndPayFromAQRC20SharedAccountApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateAndPayFromAQRC20SharedAccountApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_transaction**](CreateAndPayFromAQRC20SharedAccountApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepare_secondary_owner_request**](CreateAndPayFromAQRC20SharedAccountApi.md#prepare_secondary_owner_request) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account


# **execute_prepared_request_transaction**
> ExecuteTransactionResponse execute_prepared_request_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAndPayFromAQRC20SharedAccountApi;
my $api_instance = WWW::OpenAPIClient::CreateAndPayFromAQRC20SharedAccountApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $execute_transaction_request = WWW::OpenAPIClient::Object::ExecuteTransactionRequest->new(); # ExecuteTransactionRequest | 

eval {
    my $result = $api_instance->execute_prepared_request_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAndPayFromAQRC20SharedAccountApi->execute_prepared_request_transaction: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **execute_transaction_request** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  | 

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_secondary_owner_request**
> PrepareTransactionResponse prepare_secondary_owner_request(authorization => $authorization, prepare_add_secondary_account_request_schema => $prepare_add_secondary_account_request_schema)

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateAndPayFromAQRC20SharedAccountApi;
my $api_instance = WWW::OpenAPIClient::CreateAndPayFromAQRC20SharedAccountApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_add_secondary_account_request_schema = WWW::OpenAPIClient::Object::PrepareAddSecondaryAccountRequestSchema->new(); # PrepareAddSecondaryAccountRequestSchema | 

eval {
    my $result = $api_instance->prepare_secondary_owner_request(authorization => $authorization, prepare_add_secondary_account_request_schema => $prepare_add_secondary_account_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateAndPayFromAQRC20SharedAccountApi->prepare_secondary_owner_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_add_secondary_account_request_schema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

