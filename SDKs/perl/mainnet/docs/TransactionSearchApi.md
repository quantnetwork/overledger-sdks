# WWW::OpenAPIClient::TransactionSearchApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::TransactionSearchApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request_transaction**](TransactionSearchApi.md#execute_prepared_search_request_transaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepare_search_request**](TransactionSearchApi.md#prepare_search_request) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT


# **execute_prepared_search_request_transaction**
> ExecuteSearchTransactionResponse execute_prepared_search_request_transaction(authorization => $authorization, request_id => $request_id)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::TransactionSearchApi;
my $api_instance = WWW::OpenAPIClient::TransactionSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_prepared_search_request_transaction(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TransactionSearchApi->execute_prepared_search_request_transaction: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_search_request**
> PrepareSearchResponseSchema prepare_search_request(authorization => $authorization, transaction_id => $transaction_id, prepare_search_schema => $prepare_search_schema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::TransactionSearchApi;
my $api_instance = WWW::OpenAPIClient::TransactionSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $transaction_id = "transaction_id_example"; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->prepare_search_request(authorization => $authorization, transaction_id => $transaction_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TransactionSearchApi->prepare_search_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **transaction_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

