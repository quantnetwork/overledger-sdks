# \CreateAQRC721TokenCollectionTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_collect_request**](CreateAQRC721TokenCollectionTransactionApi.md#prepare_collect_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing



## prepare_collect_request

> crate::models::PrepareTransactionResponse prepare_collect_request(authorization, prepare_payment_transaction_request_schema)
Prepare a QRC721 token collection transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

