# RetrieveSupplyInformationForAQRCTokenAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply**](RetrieveSupplyInformationForAQRCTokenAPI.md#RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply


# **RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply**
```c
// Retrieve how many QRC tokens are currently in supply
//
// Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.
//
token_read_qrc721_response_t* RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply(apiClient_t *apiClient, char * Authorization, char * flowType, prepare_request_t * prepare_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**flowType** | **char \*** |  | 
**prepare_request** | **[prepare_request_t](prepare_request.md) \*** |  | 

### Return type

[token_read_qrc721_response_t](token_read_qrc721_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

