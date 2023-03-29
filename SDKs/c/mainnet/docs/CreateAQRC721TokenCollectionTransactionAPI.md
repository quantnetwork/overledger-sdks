# CreateAQRC721TokenCollectionTransactionAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest**](CreateAQRC721TokenCollectionTransactionAPI.md#CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing


# **CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest**
```c
// Prepare a QRC721 token collection transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t* CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest(apiClient_t *apiClient, char * Authorization, prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_payment_transaction_request_schema** | **[prepare_payment_transaction_request_schema_t](prepare_payment_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

