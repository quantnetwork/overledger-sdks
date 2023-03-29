# WWW::OpenAPIClient::ManageQRC20TokenSupplyApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::ManageQRC20TokenSupplyApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_transaction**](ManageQRC20TokenSupplyApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepare_supply_request1**](ManageQRC20TokenSupplyApi.md#prepare_supply_request1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply


# **execute_prepared_request_transaction**
> ExecuteTransactionResponse execute_prepared_request_transaction(authorization => $authorization, execute_transaction_request => $execute_transaction_request)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageQRC20TokenSupplyApi;
my $api_instance = WWW::OpenAPIClient::ManageQRC20TokenSupplyApi->new(

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
    warn "Exception when calling ManageQRC20TokenSupplyApi->execute_prepared_request_transaction: $@\n";
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

# **prepare_supply_request1**
> PrepareTransactionResponse prepare_supply_request1(authorization => $authorization, prepare_mint_transaction_request_schema_qrc20 => $prepare_mint_transaction_request_schema_qrc20)

Prepare a request to manage QRC20 token supply

Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageQRC20TokenSupplyApi;
my $api_instance = WWW::OpenAPIClient::ManageQRC20TokenSupplyApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $prepare_mint_transaction_request_schema_qrc20 = WWW::OpenAPIClient::Object::PrepareMintTransactionRequestSchemaQrc20->new(); # PrepareMintTransactionRequestSchemaQrc20 | 

eval {
    my $result = $api_instance->prepare_supply_request1(authorization => $authorization, prepare_mint_transaction_request_schema_qrc20 => $prepare_mint_transaction_request_schema_qrc20);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageQRC20TokenSupplyApi->prepare_supply_request1: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **prepare_mint_transaction_request_schema_qrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

