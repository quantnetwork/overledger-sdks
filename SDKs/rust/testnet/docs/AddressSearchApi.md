# \AddressSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request_address_balance**](AddressSearchApi.md#execute_prepared_search_request_address_balance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**execute_prepared_search_request_address_sequence**](AddressSearchApi.md#execute_prepared_search_request_address_sequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepare_address_balance_search_request**](AddressSearchApi.md#prepare_address_balance_search_request) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepare_address_sequence_search_request**](AddressSearchApi.md#prepare_address_sequence_search_request) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.



## execute_prepared_search_request_address_balance

> crate::models::ExecuteSearchBalanceResponse execute_prepared_search_request_address_balance(authorization, request_id)
Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## execute_prepared_search_request_address_sequence

> crate::models::ExecuteSearchSequenceResponse execute_prepared_search_request_address_sequence(authorization, request_id)
Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_address_balance_search_request

> crate::models::PrepareSearchResponseSchema prepare_address_balance_search_request(authorization, address_id, prepare_search_schema)
Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**address_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_address_sequence_search_request

> crate::models::PrepareSearchResponseSchema prepare_address_sequence_search_request(authorization, address_id, prepare_search_schema)
Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**address_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

