# SmartContractSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequest**](SmartContractSearchApi.md#executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepareSmartContractQueryRequest**](SmartContractSearchApi.md#prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


<a name="executePreparedSearchRequest"></a>
# **executePreparedSearchRequest**
> ExecuteSmartContractReadResponseSchema executePreparedSearchRequest(authorization, requestId)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SmartContractSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSmartContractReadResponseSchema = apiInstance.executePreparedSearchRequest(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SmartContractSearchApi#executePreparedSearchRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SmartContractSearchApi#executePreparedSearchRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="prepareSmartContractQueryRequest"></a>
# **prepareSmartContractQueryRequest**
> PrepareSearchResponseSchema prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SmartContractSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareSearchSmartContractRequestSchema : PrepareSearchSmartContractRequestSchema = {"requestDetails":{"destination":[{"smartContract":{"function":{"name":"balanceOf","inputParameters":[{"type":"address","value":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"outputParameters":[{"type":"uint256"}]},"smartContractId":"0xF9cd6C86992Fce1481dBc4bDB7E1b101c1e8cEE2"}}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareSearchSmartContractRequestSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SmartContractSearchApi#prepareSmartContractQueryRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SmartContractSearchApi#prepareSmartContractQueryRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareSearchSmartContractRequestSchema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

