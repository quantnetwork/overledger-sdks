# QuantOverledgerApi.CreateSubscriptionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 



## subscription

> [CreateSubscriptionResponseSchema] subscription(authorization, createSubscriptionRequestSchema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateSubscriptionApi();
let authorization = "authorization_example"; // String | 
let createSubscriptionRequestSchema = {"ids":["71633eb9-dcda-4a7d-a176-12ac0d0bb076"],"callbackUrl":"https://callbackurl/endpoint","type":"resourceMonitoringId"}; // CreateSubscriptionRequestSchema | 
apiInstance.subscription(authorization, createSubscriptionRequestSchema, (error, data, response) => {
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
 **createSubscriptionRequestSchema** | [**CreateSubscriptionRequestSchema**](CreateSubscriptionRequestSchema.md)|  | 

### Return type

[**[CreateSubscriptionResponseSchema]**](CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

