# SmartContractSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchSmartContractQueryRequest**](SmartContractSearchApi.md#autoExecuteSearchSmartContractQueryRequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
[**executePreparedSearchRequest**](SmartContractSearchApi.md#executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepareSmartContractQueryRequest**](SmartContractSearchApi.md#prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


<a name="autoExecuteSearchSmartContractQueryRequest"></a>
# **autoExecuteSearchSmartContractQueryRequest**
> AutoExecuteSearchAddressBalanceResponseSchema autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema)

Prepare and automatically execute a search for a smart contract query on a DLT.

Generates a request ID and automatically executes the smart contract query search on the requested DLT.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SmartContractSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareSearchSchema | 
try {
    val result : AutoExecuteSearchAddressBalanceResponseSchema = apiInstance.autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SmartContractSearchApi#autoExecuteSearchSmartContractQueryRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SmartContractSearchApi#autoExecuteSearchSmartContractQueryRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

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
val prepareSearchSmartContractRequestSchema : PrepareSearchSmartContractRequestSchema = {"requestDetails":{"destination":[{"smartContract":{"smartContractId":"0xF9cd6C86992Fce1481dBc4bDB7E1b101c1e8cEE2","function":{"name":"balanceOf","inputParameters":[{"type":"address","value":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"outputParameters":[{"type":"uint256"}]}}}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareSearchSmartContractRequestSchema | 
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

