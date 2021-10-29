# MDappTransactionQueryApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOvlTransactionByTxId**](MDappTransactionQueryApi.md#getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**getOvlTransactionsByClientId**](MDappTransactionQueryApi.md#getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger


<a name="getOvlTransactionByTxId"></a>
# **getOvlTransactionByTxId**
> OverledgerTransactionResponseSchema getOvlTransactionByTxId(authorization, overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MDappTransactionQueryApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val overledgertransactionid : kotlin.String = overledgertransactionid_example // kotlin.String | 
try {
    val result : OverledgerTransactionResponseSchema = apiInstance.getOvlTransactionByTxId(authorization, overledgertransactionid)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MDappTransactionQueryApi#getOvlTransactionByTxId")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MDappTransactionQueryApi#getOvlTransactionByTxId")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **overledgertransactionid** | **kotlin.String**|  |

### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOvlTransactionsByClientId"></a>
# **getOvlTransactionsByClientId**
> kotlin.collections.List&lt;OverledgerTransactionResponseSchema&gt; getOvlTransactionsByClientId(authorization, offset, length)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MDappTransactionQueryApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val offset : kotlin.Int = 56 // kotlin.Int | 
val length : kotlin.Int = 56 // kotlin.Int | 
try {
    val result : kotlin.collections.List<OverledgerTransactionResponseSchema> = apiInstance.getOvlTransactionsByClientId(authorization, offset, length)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MDappTransactionQueryApi#getOvlTransactionsByClientId")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MDappTransactionQueryApi#getOvlTransactionsByClientId")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **offset** | **kotlin.Int**|  | [optional] [default to 0]
 **length** | **kotlin.Int**|  | [optional] [default to 25]

### Return type

[**kotlin.collections.List&lt;OverledgerTransactionResponseSchema&gt;**](OverledgerTransactionResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

