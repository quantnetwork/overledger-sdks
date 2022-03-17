# WWW::OpenAPIClient::BlockSearchApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::BlockSearchApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**auto_execute_search_block_request**](BlockSearchApi.md#auto_execute_search_block_request) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
[**execute_prepared_search_request_block**](BlockSearchApi.md#execute_prepared_search_request_block) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**prepare_search_block_by_block_id**](BlockSearchApi.md#prepare_search_block_by_block_id) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.


# **auto_execute_search_block_request**
> AutoExecuteSearchBlockResponseSchema auto_execute_search_block_request(authorization => $authorization, block_id => $block_id, prepare_search_schema => $prepare_search_schema)

Prepare and automatically execute a search for a block on a DLT.

Generates a request ID and automatically executes the block search on the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::BlockSearchApi;
my $api_instance = WWW::OpenAPIClient::BlockSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $block_id = latest; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->auto_execute_search_block_request(authorization => $authorization, block_id => $block_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling BlockSearchApi->auto_execute_search_block_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **block_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchBlockResponseSchema**](AutoExecuteSearchBlockResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **execute_prepared_search_request_block**
> ExecuteSearchBlockResponse execute_prepared_search_request_block(authorization => $authorization, request_id => $request_id)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::BlockSearchApi;
my $api_instance = WWW::OpenAPIClient::BlockSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_prepared_search_request_block(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling BlockSearchApi->execute_prepared_search_request_block: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_search_block_by_block_id**
> PrepareSearchResponseSchema prepare_search_block_by_block_id(authorization => $authorization, block_id => $block_id, prepare_search_schema => $prepare_search_schema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::BlockSearchApi;
my $api_instance = WWW::OpenAPIClient::BlockSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $block_id = latest; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->prepare_search_block_by_block_id(authorization => $authorization, block_id => $block_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling BlockSearchApi->prepare_search_block_by_block_id: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **block_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

