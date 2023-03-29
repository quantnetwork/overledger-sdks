# WWW::OpenAPIClient::SupportedFungibleTokensApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SupportedFungibleTokensApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_tokens**](SupportedFungibleTokensApi.md#get_tokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens


# **get_tokens**
> FungibleTokenResponseDTO get_tokens(location => $location, contract_type => $contract_type, unit => $unit)

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SupportedFungibleTokensApi;
my $api_instance = WWW::OpenAPIClient::SupportedFungibleTokensApi->new(
);

my $location = new WWW::OpenAPIClient.Location(); # Location | 
my $contract_type = "contract_type_example"; # string | 
my $unit = "unit_example"; # string | 

eval {
    my $result = $api_instance->get_tokens(location => $location, contract_type => $contract_type, unit => $unit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SupportedFungibleTokensApi->get_tokens: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **location** | [**Location**](.md)|  | [optional] 
 **contract_type** | **string**|  | [optional] 
 **unit** | **string**|  | [optional] 

### Return type

[**FungibleTokenResponseDTO**](FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

