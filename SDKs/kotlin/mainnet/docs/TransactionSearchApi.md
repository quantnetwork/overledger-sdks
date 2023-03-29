# TransactionSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchTransactionRequest**](TransactionSearchApi.md#autoExecuteSearchTransactionRequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**executePreparedSearchRequestTransaction**](TransactionSearchApi.md#executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepareSearchRequest**](TransactionSearchApi.md#prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT


<a name="autoExecuteSearchTransactionRequest"></a>
# **autoExecuteSearchTransactionRequest**
> PrepareAndExecuteTransactionResponse autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema)

Prepare and automatically execute a search for a transaction on a DLT.

Generates a request ID and automatically executes the transaction search on the requested DLT.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = TransactionSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val transactionId : kotlin.String = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab // kotlin.String | The transactionId to search for
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareAndExecuteTransactionResponse = apiInstance.autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TransactionSearchApi#autoExecuteSearchTransactionRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TransactionSearchApi#autoExecuteSearchTransactionRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **transactionId** | **kotlin.String**| The transactionId to search for |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareAndExecuteTransactionResponse**](PrepareAndExecuteTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="executePreparedSearchRequestTransaction"></a>
# **executePreparedSearchRequestTransaction**
> ExecuteSearchTransactionResponse executePreparedSearchRequestTransaction(authorization, requestId)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = TransactionSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSearchTransactionResponse = apiInstance.executePreparedSearchRequestTransaction(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TransactionSearchApi#executePreparedSearchRequestTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TransactionSearchApi#executePreparedSearchRequestTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="prepareSearchRequest"></a>
# **prepareSearchRequest**
> PrepareSearchResponseSchema prepareSearchRequest(authorization, transactionId, prepareSearchSchema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = TransactionSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val transactionId : kotlin.String = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab // kotlin.String | The transactionId to search for
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareSearchRequest(authorization, transactionId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TransactionSearchApi#prepareSearchRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TransactionSearchApi#prepareSearchRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **transactionId** | **kotlin.String**| The transactionId to search for |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

