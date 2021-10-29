# ManageMonitoredResourcesApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteEventMonitoring**](ManageMonitoredResourcesApi.md#deleteEventMonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**deleteResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#deleteResourceMonitoringAddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**getListOfAddresses**](ManageMonitoredResourcesApi.md#getListOfAddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**getListOfResources**](ManageMonitoredResourcesApi.md#getListOfResources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**getListOfSmartContractEvents**](ManageMonitoredResourcesApi.md#getListOfSmartContractEvents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**getMonitoredAddress**](ManageMonitoredResourcesApi.md#getMonitoredAddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**getMonitoredSmartContractEventDetails**](ManageMonitoredResourcesApi.md#getMonitoredSmartContractEventDetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**updateEventMonitoring**](ManageMonitoredResourcesApi.md#updateEventMonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**updateResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#updateResourceMonitoringAddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address


<a name="deleteEventMonitoring"></a>
# **deleteEventMonitoring**
> SmartContractMonitoringSchema deleteEventMonitoring(authorization, resourceMonitoringId)

Stop monitoring a smart contract

Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
try {
    val result : SmartContractMonitoringSchema = apiInstance.deleteEventMonitoring(authorization, resourceMonitoringId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#deleteEventMonitoring")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#deleteEventMonitoring")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteResourceMonitoringAddress"></a>
# **deleteResourceMonitoringAddress**
> DeleteResourceMonitoringAddressSchema deleteResourceMonitoringAddress(authorization, resourceMonitoringId)

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
try {
    val result : DeleteResourceMonitoringAddressSchema = apiInstance.deleteResourceMonitoringAddress(authorization, resourceMonitoringId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#deleteResourceMonitoringAddress")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#deleteResourceMonitoringAddress")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |

### Return type

[**DeleteResourceMonitoringAddressSchema**](DeleteResourceMonitoringAddressSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getListOfAddresses"></a>
# **getListOfAddresses**
> kotlin.collections.List&lt;ResourceMonitoringAddressSchema&gt; getListOfAddresses(authorization)

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ResourceMonitoringAddressSchema> = apiInstance.getListOfAddresses(authorization)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#getListOfAddresses")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#getListOfAddresses")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |

### Return type

[**kotlin.collections.List&lt;ResourceMonitoringAddressSchema&gt;**](ResourceMonitoringAddressSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getListOfResources"></a>
# **getListOfResources**
> kotlin.collections.List&lt;SmartContractMonitoringSchema&gt; getListOfResources(authorization)

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
try {
    val result : kotlin.collections.List<SmartContractMonitoringSchema> = apiInstance.getListOfResources(authorization)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#getListOfResources")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#getListOfResources")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |

### Return type

[**kotlin.collections.List&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getListOfSmartContractEvents"></a>
# **getListOfSmartContractEvents**
> kotlin.collections.List&lt;SmartContractMonitoringSchema&gt; getListOfSmartContractEvents(authorization)

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
try {
    val result : kotlin.collections.List<SmartContractMonitoringSchema> = apiInstance.getListOfSmartContractEvents(authorization)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#getListOfSmartContractEvents")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#getListOfSmartContractEvents")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |

### Return type

[**kotlin.collections.List&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMonitoredAddress"></a>
# **getMonitoredAddress**
> AddressMonitoringDetailsSchema getMonitoredAddress(authorization, resourceMonitoringId)

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
try {
    val result : AddressMonitoringDetailsSchema = apiInstance.getMonitoredAddress(authorization, resourceMonitoringId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#getMonitoredAddress")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#getMonitoredAddress")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |

### Return type

[**AddressMonitoringDetailsSchema**](AddressMonitoringDetailsSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMonitoredSmartContractEventDetails"></a>
# **getMonitoredSmartContractEventDetails**
> SmartContractMonitoringDetailsSchema getMonitoredSmartContractEventDetails(authorization, resourceMonitoringId)

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
try {
    val result : SmartContractMonitoringDetailsSchema = apiInstance.getMonitoredSmartContractEventDetails(authorization, resourceMonitoringId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#getMonitoredSmartContractEventDetails")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#getMonitoredSmartContractEventDetails")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |

### Return type

[**SmartContractMonitoringDetailsSchema**](SmartContractMonitoringDetailsSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateEventMonitoring"></a>
# **updateEventMonitoring**
> SmartContractMonitoringSchema updateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
val statusUpdateMonitoringRequestSchema : StatusUpdateMonitoringRequestSchema = {"statusUpdate":{"value":"INACTIVE"}} // StatusUpdateMonitoringRequestSchema | 
try {
    val result : SmartContractMonitoringSchema = apiInstance.updateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#updateEventMonitoring")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#updateEventMonitoring")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |
 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="updateResourceMonitoringAddress"></a>
# **updateResourceMonitoringAddress**
> UpdateAddressMonitoringSchema updateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageMonitoredResourcesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val resourceMonitoringId : kotlin.String = resourceMonitoringId_example // kotlin.String | 
val statusUpdateMonitoringRequestSchema : StatusUpdateMonitoringRequestSchema = {"statusUpdate":{"value":"INACTIVE"}} // StatusUpdateMonitoringRequestSchema | 
try {
    val result : UpdateAddressMonitoringSchema = apiInstance.updateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageMonitoredResourcesApi#updateResourceMonitoringAddress")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageMonitoredResourcesApi#updateResourceMonitoringAddress")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **resourceMonitoringId** | **kotlin.String**|  |
 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**UpdateAddressMonitoringSchema**](UpdateAddressMonitoringSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

