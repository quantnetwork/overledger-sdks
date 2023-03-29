# FungibleTokenControllerAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FungibleTokenControllerAPI_getToken**](FungibleTokenControllerAPI.md#FungibleTokenControllerAPI_getToken) | **GET** /v2/token/fungible | 


# **FungibleTokenControllerAPI_getToken**
```c
erc20_dto_t* FungibleTokenControllerAPI_getToken(apiClient_t *apiClient, char * technology, char * network, char * unit);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**technology** | **char \*** |  | 
**network** | **char \*** |  | 
**unit** | **char \*** |  | 

### Return type

[erc20_dto_t](erc20_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

