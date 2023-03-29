# RetrieveContractOwnerInformationOfAQRCTokenAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQRCTokenAPI.md#RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token


# **RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner**
```c
// Retrieve which account has contract owner permissions for a QRC token
//
// Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
//
token_read_qrc721_response_t* RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner(apiClient_t *apiClient, char * Authorization, char * flowType, prepare_request_t * prepare_request);
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

