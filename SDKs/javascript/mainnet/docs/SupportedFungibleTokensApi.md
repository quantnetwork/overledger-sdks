# QuantOverledgerApi.SupportedFungibleTokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokens**](SupportedFungibleTokensApi.md#getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens



## getTokens

> FungibleTokenResponseDTO getTokens(opts)

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SupportedFungibleTokensApi();
let opts = {
  'location': new QuantOverledgerApi.Location(), // Location | 
  'contractType': "contractType_example", // String | 
  'unit': "unit_example" // String | 
};
apiInstance.getTokens(opts, (error, data, response) => {
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
 **location** | [**Location**](.md)|  | [optional] 
 **contractType** | **String**|  | [optional] 
 **unit** | **String**|  | [optional] 

### Return type

[**FungibleTokenResponseDTO**](FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

