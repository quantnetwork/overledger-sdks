# ManageQRC721TokenSupplyAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ManageQRC721TokenSupplyAPI_prepareSupplyRequest**](ManageQRC721TokenSupplyAPI.md#ManageQRC721TokenSupplyAPI_prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply


# **ManageQRC721TokenSupplyAPI_prepareSupplyRequest**
```c
// Prepare a transaction to manage QRC721 token supply
//
// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
//
prepare_transaction_response_t* ManageQRC721TokenSupplyAPI_prepareSupplyRequest(apiClient_t *apiClient, char * Authorization, prepare_mint_transaction_request_schema_qrc721_t * prepare_mint_transaction_request_schema_qrc721);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_mint_transaction_request_schema_qrc721** | **[prepare_mint_transaction_request_schema_qrc721_t](prepare_mint_transaction_request_schema_qrc721.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

