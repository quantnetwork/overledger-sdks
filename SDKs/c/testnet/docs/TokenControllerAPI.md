# TokenControllerAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TokenControllerAPI_getNonFungibleToken**](TokenControllerAPI.md#TokenControllerAPI_getNonFungibleToken) | **GET** /v2/nonfungibletoken | 


# **TokenControllerAPI_getNonFungibleToken**
```c
non_fungible_token_dto_t* TokenControllerAPI_getNonFungibleToken(apiClient_t *apiClient, char * tokenName, char * technology, char * network);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tokenName** | **char \*** |  | 
**technology** | **char \*** |  | 
**network** | **char \*** |  | 

### Return type

[non_fungible_token_dto_t](non_fungible_token_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

