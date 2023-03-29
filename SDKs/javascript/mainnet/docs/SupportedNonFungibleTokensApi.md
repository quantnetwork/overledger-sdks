# QuantOverledgerApi.SupportedNonFungibleTokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getAllNonFungibleTokens**](SupportedNonFungibleTokensApi.md#getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens



## getAllNonFungibleTokens

> NonFungibleTokenResponse getAllNonFungibleTokens(authorization, opts)

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API&#39;s and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SupportedNonFungibleTokensApi();
let authorization = "authorization_example"; // String | 
let opts = {
  'contractType': "contractType_example", // String | 
  'technology': "technology_example", // String | 
  'network': "network_example", // String | 
  'tokenName': "tokenName_example" // String | 
};
apiInstance.getAllNonFungibleTokens(authorization, opts, (error, data, response) => {
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
 **contractType** | **String**|  | [optional] 
 **technology** | **String**|  | [optional] 
 **network** | **String**|  | [optional] 
 **tokenName** | **String**|  | [optional] 

### Return type

[**NonFungibleTokenResponse**](NonFungibleTokenResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

