# QuantOverledgerApi.MonitorAResourceApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resourceMonitoringAddress**](MonitorAResourceApi.md#resourceMonitoringAddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**trackAndSubscribeEvent**](MonitorAResourceApi.md#trackAndSubscribeEvent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event



## resourceMonitoringAddress

> AddressMonitoringResponseSchema resourceMonitoringAddress(authorization, addressMonitoringRequestSchema)

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.MonitorAResourceApi();
let authorization = "authorization_example"; // String | 
let addressMonitoringRequestSchema = {"callBackURL":"https://callbackurl/endpoint","location":{"technology":"Ethereum","network":"Ropsten"},"addressId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}; // AddressMonitoringRequestSchema | 
apiInstance.resourceMonitoringAddress(authorization, addressMonitoringRequestSchema, (error, data, response) => {
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
 **addressMonitoringRequestSchema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md)|  | 

### Return type

[**AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## trackAndSubscribeEvent

> CreateSmartContractMonitoringSchema trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.MonitorAResourceApi();
let authorization = "authorization_example"; // String | 
let monitorSmartContractRequestSchema = {"callBackURL":"https://test-post.free.beeceptor.com/comments","eventParams":[{"selectedIntegerLength":"B256","type":"UINT","value":"3"},{"selectedIntegerLength":"B256","type":"UINT","value":"2"}],"eventName":"mul","location":{"technology":"Ethereum","network":"Ethereum Ropsten Testnet"},"smartContractId":"0x8781d54e454377451D9C6928538Db544Caa65CDf"}; // MonitorSmartContractRequestSchema | 
apiInstance.trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema, (error, data, response) => {
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
 **monitorSmartContractRequestSchema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md)|  | 

### Return type

[**CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

