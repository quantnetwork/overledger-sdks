# WWW::OpenAPIClient::MDappTransactionQueryApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::MDappTransactionQueryApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_ovl_transaction_by_tx_id**](MDappTransactionQueryApi.md#get_ovl_transaction_by_tx_id) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**get_ovl_transactions_by_client_id**](MDappTransactionQueryApi.md#get_ovl_transactions_by_client_id) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger


# **get_ovl_transaction_by_tx_id**
> OverledgerTransactionResponseSchema get_ovl_transaction_by_tx_id(authorization => $authorization, overledgertransactionid => $overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MDappTransactionQueryApi;
my $api_instance = WWW::OpenAPIClient::MDappTransactionQueryApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $overledgertransactionid = "overledgertransactionid_example"; # string | 

eval {
    my $result = $api_instance->get_ovl_transaction_by_tx_id(authorization => $authorization, overledgertransactionid => $overledgertransactionid);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MDappTransactionQueryApi->get_ovl_transaction_by_tx_id: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **overledgertransactionid** | **string**|  | 

### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_ovl_transactions_by_client_id**
> ARRAY[OverledgerTransactionResponseSchema] get_ovl_transactions_by_client_id(authorization => $authorization, offset => $offset, length => $length)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MDappTransactionQueryApi;
my $api_instance = WWW::OpenAPIClient::MDappTransactionQueryApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $offset = 0; # int | 
my $length = 25; # int | 

eval {
    my $result = $api_instance->get_ovl_transactions_by_client_id(authorization => $authorization, offset => $offset, length => $length);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MDappTransactionQueryApi->get_ovl_transactions_by_client_id: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **offset** | **int**|  | [optional] [default to 0]
 **length** | **int**|  | [optional] [default to 25]

### Return type

[**ARRAY[OverledgerTransactionResponseSchema]**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

