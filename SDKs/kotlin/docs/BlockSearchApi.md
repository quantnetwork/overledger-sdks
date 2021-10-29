# BlockSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequestBlock**](BlockSearchApi.md#executePreparedSearchRequestBlock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**prepareSearchBlockByBlockId**](BlockSearchApi.md#prepareSearchBlockByBlockId) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.


<a name="executePreparedSearchRequestBlock"></a>
# **executePreparedSearchRequestBlock**
> ExecuteSearchBlockResponse executePreparedSearchRequestBlock(authorization, requestId)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BlockSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSearchBlockResponse = apiInstance.executePreparedSearchRequestBlock(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BlockSearchApi#executePreparedSearchRequestBlock")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BlockSearchApi#executePreparedSearchRequestBlock")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="prepareSearchBlockByBlockId"></a>
# **prepareSearchBlockByBlockId**
> PrepareSearchResponseSchema prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BlockSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val blockId : kotlin.String = latest // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BlockSearchApi#prepareSearchBlockByBlockId")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BlockSearchApi#prepareSearchBlockByBlockId")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **blockId** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

