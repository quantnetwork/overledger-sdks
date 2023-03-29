# WWW::OpenAPIClient::UTXOStatusSearchApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::UTXOStatusSearchApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**auto_execute_search_utxo_request**](UTXOStatusSearchApi.md#auto_execute_search_utxo_request) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**execute_utxo_prepared_search_request**](UTXOStatusSearchApi.md#execute_utxo_prepared_search_request) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**prepare_search_utxo_state**](UTXOStatusSearchApi.md#prepare_search_utxo_state) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


# **auto_execute_search_utxo_request**
> AutoExecuteSearchUTXOResponseSchema auto_execute_search_utxo_request(authorization => $authorization, utxo_id => $utxo_id, prepare_search_schema => $prepare_search_schema)

Prepare and automatically execute a search for a UTXO on a DLT.

Generates a request ID and automatically executes the utxo search on the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UTXOStatusSearchApi;
my $api_instance = WWW::OpenAPIClient::UTXOStatusSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $utxo_id = "utxo_id_example"; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->auto_execute_search_utxo_request(authorization => $authorization, utxo_id => $utxo_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling UTXOStatusSearchApi->auto_execute_search_utxo_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **utxo_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchUTXOResponseSchema**](AutoExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **execute_utxo_prepared_search_request**
> ExecuteSearchUTXOResponseSchema execute_utxo_prepared_search_request(authorization => $authorization, request_id => $request_id)

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UTXOStatusSearchApi;
my $api_instance = WWW::OpenAPIClient::UTXOStatusSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_utxo_prepared_search_request(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling UTXOStatusSearchApi->execute_utxo_prepared_search_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_search_utxo_state**
> PrepareSearchResponseSchema prepare_search_utxo_state(authorization => $authorization, utxo_id => $utxo_id, prepare_search_schema => $prepare_search_schema)

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UTXOStatusSearchApi;
my $api_instance = WWW::OpenAPIClient::UTXOStatusSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $utxo_id = "utxo_id_example"; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->prepare_search_utxo_state(authorization => $authorization, utxo_id => $utxo_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling UTXOStatusSearchApi->prepare_search_utxo_state: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **utxo_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

