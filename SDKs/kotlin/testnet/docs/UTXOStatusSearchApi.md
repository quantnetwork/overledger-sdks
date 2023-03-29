# UTXOStatusSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchUtxoRequest**](UTXOStatusSearchApi.md#autoExecuteSearchUtxoRequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**executeUTXOPreparedSearchRequest**](UTXOStatusSearchApi.md#executeUTXOPreparedSearchRequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**prepareSearchUTXOState**](UTXOStatusSearchApi.md#prepareSearchUTXOState) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


<a name="autoExecuteSearchUtxoRequest"></a>
# **autoExecuteSearchUtxoRequest**
> AutoExecuteSearchUTXOResponseSchema autoExecuteSearchUtxoRequest(authorization, utxoId, prepareSearchSchema)

Prepare and automatically execute a search for a UTXO on a DLT.

Generates a request ID and automatically executes the utxo search on the requested DLT.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = UTXOStatusSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val utxoId : kotlin.String = utxoId_example // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}} // PrepareSearchSchema | 
try {
    val result : AutoExecuteSearchUTXOResponseSchema = apiInstance.autoExecuteSearchUtxoRequest(authorization, utxoId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UTXOStatusSearchApi#autoExecuteSearchUtxoRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UTXOStatusSearchApi#autoExecuteSearchUtxoRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **utxoId** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**AutoExecuteSearchUTXOResponseSchema**](AutoExecuteSearchUTXOResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="executeUTXOPreparedSearchRequest"></a>
# **executeUTXOPreparedSearchRequest**
> ExecuteSearchUTXOResponseSchema executeUTXOPreparedSearchRequest(authorization, requestId)

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = UTXOStatusSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSearchUTXOResponseSchema = apiInstance.executeUTXOPreparedSearchRequest(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UTXOStatusSearchApi#executeUTXOPreparedSearchRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UTXOStatusSearchApi#executeUTXOPreparedSearchRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="prepareSearchUTXOState"></a>
# **prepareSearchUTXOState**
> PrepareSearchResponseSchema prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema)

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = UTXOStatusSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val utxoId : kotlin.String = utxoId_example // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UTXOStatusSearchApi#prepareSearchUTXOState")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UTXOStatusSearchApi#prepareSearchUTXOState")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **utxoId** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

