# QuantOverledgerApi.CreateATransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestNativeTransaction**](CreateATransactionApi.md#executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**executePreparedRequestTransaction**](CreateATransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareNativeTransaction**](CreateATransactionApi.md#prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepareTransactionRequest1**](CreateATransactionApi.md#prepareTransactionRequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing



## executePreparedRequestNativeTransaction

> ExecuteTransactionResponse executePreparedRequestNativeTransaction(authorization, executeTransactionRequest)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateATransactionApi();
let authorization = "authorization_example"; // String | 
let executeTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"}; // ExecuteTransactionRequest | 
apiInstance.executePreparedRequestNativeTransaction(authorization, executeTransactionRequest, (error, data, response) => {
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
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  | 

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## executePreparedRequestTransaction

> ExecuteTransactionResponse executePreparedRequestTransaction(authorization, executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateATransactionApi();
let authorization = "authorization_example"; // String | 
let executeTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"}; // ExecuteTransactionRequest | 
apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest, (error, data, response) => {
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
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  | 

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepareNativeTransaction

> PrepareSearchResponseSchema prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateATransactionApi();
let authorization = "authorization_example"; // String | 
let prepareNativeTransactionRequestSchema = {"type":"Native Transaction","location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareNativeTransactionRequestSchema | 
apiInstance.prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema, (error, data, response) => {
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
 **prepareNativeTransactionRequestSchema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepareTransactionRequest1

> PrepareTransactionResponse prepareTransactionRequest1(authorization, preparePaymentTransactionRequestSchema)

Prepare a DLT transaction for signing

The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateATransactionApi();
let authorization = "authorization_example"; // String | 
let preparePaymentTransactionRequestSchema = {"location":{"technology":"Substrate","network":"Polkadot Westend Testnet"},"type":"PAYMENT","urgency":"normal","requestDetails":{"destination":[{"destinationId":"5FLSigC9HGRKVhB9FiEo4Y3koPsNmBmLJbpXg2mp1hXcS59Y","payment":{"amount":"0.0000000001","unit":"WND"}}],"message":"OVL Transaction Message","overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"5GrwvaEF5zXb26Fz9rcQpDWS57CtERHpNehXCPcNoHGKutQY"}]}}; // PreparePaymentTransactionRequestSchema | 
apiInstance.prepareTransactionRequest1(authorization, preparePaymentTransactionRequestSchema, (error, data, response) => {
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
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

