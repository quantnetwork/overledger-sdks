# \TokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_non_fungible_token**](TokenControllerApi.md#get_non_fungible_token) | **GET** /v2/nonfungibletoken | 



## get_non_fungible_token

> crate::models::NonFungibleTokenDto get_non_fungible_token(token_name, technology, network)


### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**token_name** | **String** |  | [required] |
**technology** | **String** |  | [required] |
**network** | **String** |  | [required] |

### Return type

[**crate::models::NonFungibleTokenDto**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

