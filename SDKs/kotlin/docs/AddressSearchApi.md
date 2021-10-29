# AddressSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequestAddressBalance**](AddressSearchApi.md#executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**executePreparedSearchRequestAddressSequence**](AddressSearchApi.md#executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepareAddressBalanceSearchRequest**](AddressSearchApi.md#prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepareAddressSequenceSearchRequest**](AddressSearchApi.md#prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.


<a name="executePreparedSearchRequestAddressBalance"></a>
# **executePreparedSearchRequestAddressBalance**
> ExecuteSearchBalanceResponse executePreparedSearchRequestAddressBalance(authorization, requestId)

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AddressSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSearchBalanceResponse = apiInstance.executePreparedSearchRequestAddressBalance(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AddressSearchApi#executePreparedSearchRequestAddressBalance")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AddressSearchApi#executePreparedSearchRequestAddressBalance")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="executePreparedSearchRequestAddressSequence"></a>
# **executePreparedSearchRequestAddressSequence**
> ExecuteSearchSequenceResponse executePreparedSearchRequestAddressSequence(authorization, requestId)

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AddressSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val requestId : kotlin.String = requestId_example // kotlin.String | 
try {
    val result : ExecuteSearchSequenceResponse = apiInstance.executePreparedSearchRequestAddressSequence(authorization, requestId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AddressSearchApi#executePreparedSearchRequestAddressSequence")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AddressSearchApi#executePreparedSearchRequestAddressSequence")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **requestId** | **kotlin.String**|  |

### Return type

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="prepareAddressBalanceSearchRequest"></a>
# **prepareAddressBalanceSearchRequest**
> PrepareSearchResponseSchema prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AddressSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val addressId : kotlin.String = addressId_example // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AddressSearchApi#prepareAddressBalanceSearchRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AddressSearchApi#prepareAddressBalanceSearchRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **addressId** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="prepareAddressSequenceSearchRequest"></a>
# **prepareAddressSequenceSearchRequest**
> PrepareSearchResponseSchema prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AddressSearchApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val addressId : kotlin.String = addressId_example // kotlin.String | 
val prepareSearchSchema : PrepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}} // PrepareSearchSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AddressSearchApi#prepareAddressSequenceSearchRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AddressSearchApi#prepareAddressSequenceSearchRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **addressId** | **kotlin.String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

