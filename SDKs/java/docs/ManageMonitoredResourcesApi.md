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
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    try {
      SmartContractMonitoringSchema result = apiInstance.deleteEventMonitoring(authorization, resourceMonitoringId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#deleteEventMonitoring");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="deleteResourceMonitoringAddress"></a>
# **deleteResourceMonitoringAddress**
> DeleteResourceMonitoringAddressSchema deleteResourceMonitoringAddress(authorization, resourceMonitoringId)

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    try {
      DeleteResourceMonitoringAddressSchema result = apiInstance.deleteResourceMonitoringAddress(authorization, resourceMonitoringId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#deleteResourceMonitoringAddress");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |

### Return type

[**DeleteResourceMonitoringAddressSchema**](DeleteResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="getListOfAddresses"></a>
# **getListOfAddresses**
> List&lt;ResourceMonitoringAddressSchema&gt; getListOfAddresses(authorization)

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    try {
      List<ResourceMonitoringAddressSchema> result = apiInstance.getListOfAddresses(authorization);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#getListOfAddresses");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |

### Return type

[**List&lt;ResourceMonitoringAddressSchema&gt;**](ResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="getListOfResources"></a>
# **getListOfResources**
> List&lt;SmartContractMonitoringSchema&gt; getListOfResources(authorization)

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    try {
      List<SmartContractMonitoringSchema> result = apiInstance.getListOfResources(authorization);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#getListOfResources");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |

### Return type

[**List&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="getListOfSmartContractEvents"></a>
# **getListOfSmartContractEvents**
> List&lt;SmartContractMonitoringSchema&gt; getListOfSmartContractEvents(authorization)

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    try {
      List<SmartContractMonitoringSchema> result = apiInstance.getListOfSmartContractEvents(authorization);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#getListOfSmartContractEvents");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |

### Return type

[**List&lt;SmartContractMonitoringSchema&gt;**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="getMonitoredAddress"></a>
# **getMonitoredAddress**
> AddressMonitoringDetailsSchema getMonitoredAddress(authorization, resourceMonitoringId)

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    try {
      AddressMonitoringDetailsSchema result = apiInstance.getMonitoredAddress(authorization, resourceMonitoringId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#getMonitoredAddress");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |

### Return type

[**AddressMonitoringDetailsSchema**](AddressMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="getMonitoredSmartContractEventDetails"></a>
# **getMonitoredSmartContractEventDetails**
> SmartContractMonitoringDetailsSchema getMonitoredSmartContractEventDetails(authorization, resourceMonitoringId)

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    try {
      SmartContractMonitoringDetailsSchema result = apiInstance.getMonitoredSmartContractEventDetails(authorization, resourceMonitoringId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#getMonitoredSmartContractEventDetails");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |

### Return type

[**SmartContractMonitoringDetailsSchema**](SmartContractMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="updateEventMonitoring"></a>
# **updateEventMonitoring**
> SmartContractMonitoringSchema updateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema = new StatusUpdateMonitoringRequestSchema(); // StatusUpdateMonitoringRequestSchema | 
    try {
      SmartContractMonitoringSchema result = apiInstance.updateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#updateEventMonitoring");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |
 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="updateResourceMonitoringAddress"></a>
# **updateResourceMonitoringAddress**
> UpdateAddressMonitoringSchema updateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema)

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageMonitoredResourcesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageMonitoredResourcesApi apiInstance = new ManageMonitoredResourcesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String resourceMonitoringId = "resourceMonitoringId_example"; // String | 
    StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema = new StatusUpdateMonitoringRequestSchema(); // StatusUpdateMonitoringRequestSchema | 
    try {
      UpdateAddressMonitoringSchema result = apiInstance.updateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageMonitoredResourcesApi#updateResourceMonitoringAddress");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **resourceMonitoringId** | **String**|  |
 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**UpdateAddressMonitoringSchema**](UpdateAddressMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

