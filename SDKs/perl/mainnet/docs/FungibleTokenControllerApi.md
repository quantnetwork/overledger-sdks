# WWW::OpenAPIClient::FungibleTokenControllerApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::FungibleTokenControllerApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_token**](FungibleTokenControllerApi.md#get_token) | **GET** /v2/token/fungible | 


# **get_token**
> Erc20DTO get_token(technology => $technology, network => $network, unit => $unit)



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::FungibleTokenControllerApi;
my $api_instance = WWW::OpenAPIClient::FungibleTokenControllerApi->new(
);

my $technology = "technology_example"; # string | 
my $network = "network_example"; # string | 
my $unit = "unit_example"; # string | 

eval {
    my $result = $api_instance->get_token(technology => $technology, network => $network, unit => $unit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling FungibleTokenControllerApi->get_token: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **technology** | **string**|  | 
 **network** | **string**|  | 
 **unit** | **string**|  | 

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

