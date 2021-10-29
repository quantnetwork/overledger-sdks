# WWW::OpenAPIClient::AddressSearchApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::AddressSearchApi;
```

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request_address_balance**](AddressSearchApi.md#execute_prepared_search_request_address_balance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**execute_prepared_search_request_address_sequence**](AddressSearchApi.md#execute_prepared_search_request_address_sequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepare_address_balance_search_request**](AddressSearchApi.md#prepare_address_balance_search_request) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepare_address_sequence_search_request**](AddressSearchApi.md#prepare_address_sequence_search_request) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.


# **execute_prepared_search_request_address_balance**
> ExecuteSearchBalanceResponse execute_prepared_search_request_address_balance(authorization => $authorization, request_id => $request_id)

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::AddressSearchApi;
my $api_instance = WWW::OpenAPIClient::AddressSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_prepared_search_request_address_balance(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AddressSearchApi->execute_prepared_search_request_address_balance: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **execute_prepared_search_request_address_sequence**
> ExecuteSearchSequenceResponse execute_prepared_search_request_address_sequence(authorization => $authorization, request_id => $request_id)

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::AddressSearchApi;
my $api_instance = WWW::OpenAPIClient::AddressSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $request_id = "request_id_example"; # string | 

eval {
    my $result = $api_instance->execute_prepared_search_request_address_sequence(authorization => $authorization, request_id => $request_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AddressSearchApi->execute_prepared_search_request_address_sequence: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **request_id** | **string**|  | 

### Return type

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_address_balance_search_request**
> PrepareSearchResponseSchema prepare_address_balance_search_request(authorization => $authorization, address_id => $address_id, prepare_search_schema => $prepare_search_schema)

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::AddressSearchApi;
my $api_instance = WWW::OpenAPIClient::AddressSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $address_id = "address_id_example"; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->prepare_address_balance_search_request(authorization => $authorization, address_id => $address_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AddressSearchApi->prepare_address_balance_search_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **address_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_address_sequence_search_request**
> PrepareSearchResponseSchema prepare_address_sequence_search_request(authorization => $authorization, address_id => $address_id, prepare_search_schema => $prepare_search_schema)

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::AddressSearchApi;
my $api_instance = WWW::OpenAPIClient::AddressSearchApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $address_id = "address_id_example"; # string | 
my $prepare_search_schema = WWW::OpenAPIClient::Object::PrepareSearchSchema->new(); # PrepareSearchSchema | 

eval {
    my $result = $api_instance->prepare_address_sequence_search_request(authorization => $authorization, address_id => $address_id, prepare_search_schema => $prepare_search_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AddressSearchApi->prepare_address_sequence_search_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **address_id** | **string**|  | 
 **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

