# WWW::OpenAPIClient::CreateTransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateTransactionApi;
```

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_native_transaction**](CreateTransactionApi.md#execute_prepared_request_native_transaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**execute_prepared_request_transaction**](CreateTransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
[**prepare_native_transaction**](CreateTransactionApi.md#prepare_native_transaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepare_transaction_request**](CreateTransactionApi.md#prepare_transaction_request) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


# **execute_prepared_request_native_transaction**
> ExecuteTransactionResponse execute_prepared_request_native_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $execute_transaction_request = WWW::OpenAPIClient::Object::ExecuteTransactionRequest->new(); # ExecuteTransactionRequest | 

eval {
    my $result = $api_instance->execute_prepared_request_native_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateTransactionApi->execute_prepared_request_native_transaction: $@\n";
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

# **execute_prepared_request_transaction**
> ExecuteTransactionResponse execute_prepared_request_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request)

Execute a transaction on the DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateTransactionApi->new(

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
    warn "Exception when calling CreateTransactionApi->execute_prepared_request_transaction: $@\n";
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

# **prepare_native_transaction**
> PrepareSearchResponseSchema prepare_native_transaction(authorization => $authorization, prepare_native_transaction_request_schema => $prepare_native_transaction_request_schema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_native_transaction_request_schema = WWW::OpenAPIClient::Object::PrepareNativeTransactionRequestSchema->new(); # PrepareNativeTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_native_transaction(authorization => $authorization, prepare_native_transaction_request_schema => $prepare_native_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateTransactionApi->prepare_native_transaction: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_native_transaction_request_schema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **prepare_transaction_request**
> PrepareTransactionResponse prepare_transaction_request(authorization => $authorization, unknown_base_type => $unknown_base_type)

Prepare a DLT transaction for signing

Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateTransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateTransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $unknown_base_type = WWW::OpenAPIClient::Object::UNKNOWN_BASE_TYPE->new(); # UNKNOWN_BASE_TYPE | 

eval {
    my $result = $api_instance->prepare_transaction_request(authorization => $authorization, unknown_base_type => $unknown_base_type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateTransactionApi->prepare_transaction_request: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **unknown_base_type** | [**UNKNOWN_BASE_TYPE**](UNKNOWN_BASE_TYPE.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

