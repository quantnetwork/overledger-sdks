# QuantOverledgerApi.AddressSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequestAddressBalance**](AddressSearchApi.md#executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**executePreparedSearchRequestAddressSequence**](AddressSearchApi.md#executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepareAddressBalanceSearchRequest**](AddressSearchApi.md#prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepareAddressSequenceSearchRequest**](AddressSearchApi.md#prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.



## executePreparedSearchRequestAddressBalance

> ExecuteSearchBalanceResponse executePreparedSearchRequestAddressBalance(authorization, requestId)

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.AddressSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executePreparedSearchRequestAddressBalance(authorization, requestId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  | 
 **requestId** | **String**|  | 

### Return type

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## executePreparedSearchRequestAddressSequence

> ExecuteSearchSequenceResponse executePreparedSearchRequestAddressSequence(authorization, requestId)

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.AddressSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executePreparedSearchRequestAddressSequence(authorization, requestId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  | 
 **requestId** | **String**|  | 

### Return type

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepareAddressBalanceSearchRequest

> PrepareSearchResponseSchema prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.AddressSearchApi();
let authorization = "authorization_example"; // String | 
let addressId = "addressId_example"; // String | 
let prepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // PrepareSearchSchema | 
apiInstance.prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  | 
 **addressId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepareAddressSequenceSearchRequest

> PrepareSearchResponseSchema prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.AddressSearchApi();
let authorization = "authorization_example"; // String | 
let addressId = "addressId_example"; // String | 
let prepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // PrepareSearchSchema | 
apiInstance.prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  | 
 **addressId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

