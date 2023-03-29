# WWW::OpenAPIClient::TokenControllerApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::TokenControllerApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_non_fungible_token**](TokenControllerApi.md#get_non_fungible_token) | **GET** /v2/nonfungibletoken | 


# **get_non_fungible_token**
> NonFungibleTokenDTO get_non_fungible_token(token_name => $token_name, technology => $technology, network => $network)



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::TokenControllerApi;
my $api_instance = WWW::OpenAPIClient::TokenControllerApi->new(
);

my $token_name = "token_name_example"; # string | 
my $technology = "technology_example"; # string | 
my $network = "network_example"; # string | 

eval {
    my $result = $api_instance->get_non_fungible_token(token_name => $token_name, technology => $technology, network => $network);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TokenControllerApi->get_non_fungible_token: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **token_name** | **string**|  | 
 **technology** | **string**|  | 
 **network** | **string**|  | 

### Return type

[**NonFungibleTokenDTO**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

