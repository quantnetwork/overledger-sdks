# \FungibleTokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_token**](FungibleTokenControllerApi.md#get_token) | **GET** /v2/token/fungible | 



## get_token

> crate::models::Erc20Dto get_token(technology, network, unit)


### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**technology** | **String** |  | [required] |
**network** | **String** |  | [required] |
**unit** | **String** |  | [required] |

### Return type

[**crate::models::Erc20Dto**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

