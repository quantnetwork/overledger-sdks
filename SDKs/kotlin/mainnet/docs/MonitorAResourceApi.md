# MonitorAResourceApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resourceMonitoringAddress**](MonitorAResourceApi.md#resourceMonitoringAddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**trackAndSubscribeEvent**](MonitorAResourceApi.md#trackAndSubscribeEvent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event


<a name="resourceMonitoringAddress"></a>
# **resourceMonitoringAddress**
> AddressMonitoringResponseSchema resourceMonitoringAddress(authorization, addressMonitoringRequestSchema)

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MonitorAResourceApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val addressMonitoringRequestSchema : AddressMonitoringRequestSchema = {"callBackURL":"https://callbackurl/endpoint","location":{"technology":"Ethereum","network":"Ropsten"},"addressId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"} // AddressMonitoringRequestSchema | 
try {
    val result : AddressMonitoringResponseSchema = apiInstance.resourceMonitoringAddress(authorization, addressMonitoringRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MonitorAResourceApi#resourceMonitoringAddress")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MonitorAResourceApi#resourceMonitoringAddress")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **addressMonitoringRequestSchema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md)|  |

### Return type

[**AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="trackAndSubscribeEvent"></a>
# **trackAndSubscribeEvent**
> CreateSmartContractMonitoringSchema trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MonitorAResourceApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val monitorSmartContractRequestSchema : MonitorSmartContractRequestSchema = {"callBackURL":"https://test-post.free.beeceptor.com/comments","eventParams":[{"selectedIntegerLength":"B256","type":"UINT","value":"3"},{"selectedIntegerLength":"B256","type":"UINT","value":"2"}],"eventName":"mul","location":{"technology":"Ethereum","network":"Ethereum Ropsten Testnet"},"smartContractId":"0x8781d54e454377451D9C6928538Db544Caa65CDf"} // MonitorSmartContractRequestSchema | 
try {
    val result : CreateSmartContractMonitoringSchema = apiInstance.trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MonitorAResourceApi#trackAndSubscribeEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MonitorAResourceApi#trackAndSubscribeEvent")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **monitorSmartContractRequestSchema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md)|  |

### Return type

[**CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

