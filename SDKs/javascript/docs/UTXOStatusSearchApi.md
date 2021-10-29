# QuantOverledgerApi.UTXOStatusSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executeUTXOPreparedSearchRequest**](UTXOStatusSearchApi.md#executeUTXOPreparedSearchRequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**prepareSearchUTXOState**](UTXOStatusSearchApi.md#prepareSearchUTXOState) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.



## executeUTXOPreparedSearchRequest

> ExecuteSearchUTXOResponseSchema executeUTXOPreparedSearchRequest(authorization, requestId)

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.UTXOStatusSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executeUTXOPreparedSearchRequest(authorization, requestId, (error, data, response) => {
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

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepareSearchUTXOState

> PrepareSearchResponseSchema prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema)

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.UTXOStatusSearchApi();
let authorization = "authorization_example"; // String | 
let utxoId = "utxoId_example"; // String | 
let prepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // PrepareSearchSchema | 
apiInstance.prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema, (error, data, response) => {
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
 **utxoId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

