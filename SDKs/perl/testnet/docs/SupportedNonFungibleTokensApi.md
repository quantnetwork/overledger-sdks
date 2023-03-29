# WWW::OpenAPIClient::SupportedNonFungibleTokensApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SupportedNonFungibleTokensApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_all_non_fungible_tokens**](SupportedNonFungibleTokensApi.md#get_all_non_fungible_tokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens


# **get_all_non_fungible_tokens**
> NonFungibleTokenResponse get_all_non_fungible_tokens(authorization => $authorization, contract_type => $contract_type, technology => $technology, network => $network, token_name => $token_name)

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SupportedNonFungibleTokensApi;
my $api_instance = WWW::OpenAPIClient::SupportedNonFungibleTokensApi->new(
);

my $authorization = "authorization_example"; # string | 
my $contract_type = "contract_type_example"; # string | 
my $technology = "technology_example"; # string | 
my $network = "network_example"; # string | 
my $token_name = "token_name_example"; # string | 

eval {
    my $result = $api_instance->get_all_non_fungible_tokens(authorization => $authorization, contract_type => $contract_type, technology => $technology, network => $network, token_name => $token_name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SupportedNonFungibleTokensApi->get_all_non_fungible_tokens: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **contract_type** | **string**|  | [optional] 
 **technology** | **string**|  | [optional] 
 **network** | **string**|  | [optional] 
 **token_name** | **string**|  | [optional] 

### Return type

[**NonFungibleTokenResponse**](NonFungibleTokenResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

