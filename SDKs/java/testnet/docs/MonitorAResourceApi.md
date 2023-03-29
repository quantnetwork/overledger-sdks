# MonitorAResourceApi

All URIs are relative to *https://api.sandbox.overledger.io*

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
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MonitorAResourceApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    MonitorAResourceApi apiInstance = new MonitorAResourceApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    AddressMonitoringRequestSchema addressMonitoringRequestSchema = new AddressMonitoringRequestSchema(); // AddressMonitoringRequestSchema | 
    try {
      AddressMonitoringResponseSchema result = apiInstance.resourceMonitoringAddress(authorization, addressMonitoringRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MonitorAResourceApi#resourceMonitoringAddress");
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
 **addressMonitoringRequestSchema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md)|  |

### Return type

[**AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

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

<a name="trackAndSubscribeEvent"></a>
# **trackAndSubscribeEvent**
> CreateSmartContractMonitoringSchema trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MonitorAResourceApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    MonitorAResourceApi apiInstance = new MonitorAResourceApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    MonitorSmartContractRequestSchema monitorSmartContractRequestSchema = new MonitorSmartContractRequestSchema(); // MonitorSmartContractRequestSchema | 
    try {
      CreateSmartContractMonitoringSchema result = apiInstance.trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MonitorAResourceApi#trackAndSubscribeEvent");
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
 **monitorSmartContractRequestSchema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md)|  |

### Return type

[**CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

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

