# QuantOverledgerApi.MDappTransactionQueryApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOvlTransactionByTxId**](MDappTransactionQueryApi.md#getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**getOvlTransactionsByClientId**](MDappTransactionQueryApi.md#getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger



## getOvlTransactionByTxId

> OverledgerTransactionResponseSchema getOvlTransactionByTxId(authorization, overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.MDappTransactionQueryApi();
let authorization = "authorization_example"; // String | 
let overledgertransactionid = "overledgertransactionid_example"; // String | 
apiInstance.getOvlTransactionByTxId(authorization, overledgertransactionid, (error, data, response) => {
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
 **overledgertransactionid** | **String**|  | 

### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOvlTransactionsByClientId

> [OverledgerTransactionResponseSchema] getOvlTransactionsByClientId(authorization, opts)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.MDappTransactionQueryApi();
let authorization = "authorization_example"; // String | 
let opts = {
  'offset': 0, // Number | 
  'length': 25 // Number | 
};
apiInstance.getOvlTransactionsByClientId(authorization, opts, (error, data, response) => {
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
 **offset** | **Number**|  | [optional] [default to 0]
 **length** | **Number**|  | [optional] [default to 25]

### Return type

[**[OverledgerTransactionResponseSchema]**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

