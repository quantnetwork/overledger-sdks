# QuantOverledgerApi.BlockSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchBlockRequest**](BlockSearchApi.md#autoExecuteSearchBlockRequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
[**executePreparedSearchRequestBlock**](BlockSearchApi.md#executePreparedSearchRequestBlock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**prepareSearchBlockByBlockId**](BlockSearchApi.md#prepareSearchBlockByBlockId) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.



## autoExecuteSearchBlockRequest

> AutoExecuteSearchBlockResponseSchema autoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema)

Prepare and automatically execute a search for a block on a DLT.

Generates a request ID and automatically executes the block search on the requested DLT.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.BlockSearchApi();
let authorization = "authorization_example"; // String | 
let blockId = 54678; // String | 
let prepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSchema | 
apiInstance.autoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema, (error, data, response) => {
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
 **blockId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchBlockResponseSchema**](AutoExecuteSearchBlockResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## executePreparedSearchRequestBlock

> ExecuteSearchBlockResponse executePreparedSearchRequestBlock(authorization, requestId)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.BlockSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executePreparedSearchRequestBlock(authorization, requestId, (error, data, response) => {
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

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepareSearchBlockByBlockId

> PrepareSearchResponseSchema prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.BlockSearchApi();
let authorization = "authorization_example"; // String | 
let blockId = 54678; // String | 
let prepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSchema | 
apiInstance.prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema, (error, data, response) => {
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
 **blockId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

