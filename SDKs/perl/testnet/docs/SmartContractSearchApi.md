# WWW::OpenAPIClient::SmartContractSearchApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SmartContractSearchApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request**](SmartContractSearchApi.md#execute_prepared_search_request) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepare_smart_contract_query_request**](SmartContractSearchApi.md#prepare_smart_contract_query_request) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


# **execute_prepared_search_request**
> ExecuteSmartContractReadResponseSchema execute_prepared_search_request(authorization => $authorization, request_id => $request_id)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SmartContractSearchApi;
my $api_instance = WWW::OpenAPIClient::SmartContractSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_prepared_search_request(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SmartContractSearchApi->execute_prepared_search_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_smart_contract_query_request**
> PrepareSearchResponseSchema prepare_smart_contract_query_request(authorization => $authorization, prepare_search_smart_contract_request_schema => $prepare_search_smart_contract_request_schema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SmartContractSearchApi;
my $api_instance = WWW::OpenAPIClient::SmartContractSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_search_smart_contract_request_schema = WWW::OpenAPIClient::Object::PrepareSearchSmartContractRequestSchema->new(); # PrepareSearchSmartContractRequestSchema | 

eval {
    my $result = $api_instance->prepare_smart_contract_query_request(authorization => $authorization, prepare_search_smart_contract_request_schema => $prepare_search_smart_contract_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SmartContractSearchApi->prepare_smart_contract_query_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_search_smart_contract_request_schema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

