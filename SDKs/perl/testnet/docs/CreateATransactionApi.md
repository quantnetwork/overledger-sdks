# WWW::OpenAPIClient::CreateATransactionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CreateATransactionApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_native_transaction**](CreateATransactionApi.md#execute_prepared_request_native_transaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**execute_prepared_request_transaction**](CreateATransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepare_native_transaction**](CreateATransactionApi.md#prepare_native_transaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepare_transaction_request1**](CreateATransactionApi.md#prepare_transaction_request1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


# **execute_prepared_request_native_transaction**
> ExecuteTransactionResponse execute_prepared_request_native_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateATransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateATransactionApi->new(

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
    warn "Exception when calling CreateATransactionApi->execute_prepared_request_native_transaction: $@\n";
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

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateATransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateATransactionApi->new(

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
    warn "Exception when calling CreateATransactionApi->execute_prepared_request_transaction: $@\n";
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
use WWW::OpenAPIClient::CreateATransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateATransactionApi->new(

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
    warn "Exception when calling CreateATransactionApi->prepare_native_transaction: $@\n";
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

# **prepare_transaction_request1**
> PrepareTransactionResponse prepare_transaction_request1(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema)

Prepare a DLT transaction for signing

The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CreateATransactionApi;
my $api_instance = WWW::OpenAPIClient::CreateATransactionApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_payment_transaction_request_schema = WWW::OpenAPIClient::Object::PreparePaymentTransactionRequestSchema->new(); # PreparePaymentTransactionRequestSchema | 

eval {
    my $result = $api_instance->prepare_transaction_request1(authorization => $authorization, prepare_payment_transaction_request_schema => $prepare_payment_transaction_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CreateATransactionApi->prepare_transaction_request1: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

