# Org.OpenAPITools.Api.MonitorAResourceApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ResourceMonitoringAddress**](MonitorAResourceApi.md#resourcemonitoringaddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**TrackAndSubscribeEvent**](MonitorAResourceApi.md#trackandsubscribeevent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event



## ResourceMonitoringAddress

> AddressMonitoringResponseSchema ResourceMonitoringAddress (string authorization, AddressMonitoringRequestSchema addressMonitoringRequestSchema)

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ResourceMonitoringAddressExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://OVL 2.0";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new MonitorAResourceApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var addressMonitoringRequestSchema = new AddressMonitoringRequestSchema(); // AddressMonitoringRequestSchema | 

            try
            {
                // Monitor an address for incoming and outgoing transactions
                AddressMonitoringResponseSchema result = apiInstance.ResourceMonitoringAddress(authorization, addressMonitoringRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling MonitorAResourceApi.ResourceMonitoringAddress: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TrackAndSubscribeEvent

> CreateSmartContractMonitoringSchema TrackAndSubscribeEvent (string authorization, MonitorSmartContractRequestSchema monitorSmartContractRequestSchema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class TrackAndSubscribeEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://OVL 2.0";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new MonitorAResourceApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var monitorSmartContractRequestSchema = new MonitorSmartContractRequestSchema(); // MonitorSmartContractRequestSchema | 

            try
            {
                // Monitor a smart contract for an event
                CreateSmartContractMonitoringSchema result = apiInstance.TrackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling MonitorAResourceApi.TrackAndSubscribeEvent: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

