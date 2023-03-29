# QuantOverledgerApi.FungibleTokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getToken**](FungibleTokenControllerApi.md#getToken) | **GET** /v2/token/fungible | 



## getToken

> Erc20DTO getToken(technology, network, unit)



### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.FungibleTokenControllerApi();
let technology = "technology_example"; // String | 
let network = "network_example"; // String | 
let unit = "unit_example"; // String | 
apiInstance.getToken(technology, network, unit, (error, data, response) => {
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
 **technology** | **String**|  | 
 **network** | **String**|  | 
 **unit** | **String**|  | 

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

