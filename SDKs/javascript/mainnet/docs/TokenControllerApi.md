# QuantOverledgerApi.TokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getNonFungibleToken**](TokenControllerApi.md#getNonFungibleToken) | **GET** /v2/nonfungibletoken | 



## getNonFungibleToken

> NonFungibleTokenDTO getNonFungibleToken(tokenName, technology, network)



### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.TokenControllerApi();
let tokenName = "tokenName_example"; // String | 
let technology = "technology_example"; // String | 
let network = "network_example"; // String | 
apiInstance.getNonFungibleToken(tokenName, technology, network, (error, data, response) => {
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
 **tokenName** | **String**|  | 
 **technology** | **String**|  | 
 **network** | **String**|  | 

### Return type

[**NonFungibleTokenDTO**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

