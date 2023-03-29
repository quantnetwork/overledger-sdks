# Org.OpenAPITools.Api.ManageMonitoredResourcesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteEventMonitoring**](ManageMonitoredResourcesApi.md#deleteeventmonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**DeleteResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#deleteresourcemonitoringaddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**GetListOfAddresses**](ManageMonitoredResourcesApi.md#getlistofaddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**GetListOfResources**](ManageMonitoredResourcesApi.md#getlistofresources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**GetListOfSmartContractEvents**](ManageMonitoredResourcesApi.md#getlistofsmartcontractevents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**GetMonitoredAddress**](ManageMonitoredResourcesApi.md#getmonitoredaddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**GetMonitoredSmartContractEventDetails**](ManageMonitoredResourcesApi.md#getmonitoredsmartcontracteventdetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**UpdateEventMonitoring**](ManageMonitoredResourcesApi.md#updateeventmonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**UpdateResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#updateresourcemonitoringaddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address



## DeleteEventMonitoring

> SmartContractMonitoringSchema DeleteEventMonitoring (string authorization, string resourceMonitoringId)

Stop monitoring a smart contract

Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class DeleteEventMonitoringExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 

            try
            {
                // Stop monitoring a smart contract
                SmartContractMonitoringSchema result = apiInstance.DeleteEventMonitoring(authorization, resourceMonitoringId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.DeleteEventMonitoring: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteResourceMonitoringAddress

> DeleteResourceMonitoringAddressSchema DeleteResourceMonitoringAddress (string authorization, string resourceMonitoringId)

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class DeleteResourceMonitoringAddressExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 

            try
            {
                // Stop monitoring an address
                DeleteResourceMonitoringAddressSchema result = apiInstance.DeleteResourceMonitoringAddress(authorization, resourceMonitoringId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.DeleteResourceMonitoringAddress: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfAddresses

> List&lt;ResourceMonitoringAddressSchema&gt; GetListOfAddresses (string authorization)

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetListOfAddressesExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 

            try
            {
                // Retrieve a list of addresses being monitored
                List<ResourceMonitoringAddressSchema> result = apiInstance.GetListOfAddresses(authorization);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.GetListOfAddresses: " + e.Message );
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfResources

> List&lt;SmartContractMonitoringSchema&gt; GetListOfResources (string authorization)

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetListOfResourcesExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 

            try
            {
                // Retrieve a list of all resources being monitored
                List<SmartContractMonitoringSchema> result = apiInstance.GetListOfResources(authorization);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.GetListOfResources: " + e.Message );
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfSmartContractEvents

> List&lt;SmartContractMonitoringSchema&gt; GetListOfSmartContractEvents (string authorization)

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetListOfSmartContractEventsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 

            try
            {
                // Retrieve a list of smart contracts being monitored
                List<SmartContractMonitoringSchema> result = apiInstance.GetListOfSmartContractEvents(authorization);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.GetListOfSmartContractEvents: " + e.Message );
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMonitoredAddress

> AddressMonitoringDetailsSchema GetMonitoredAddress (string authorization, string resourceMonitoringId)

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetMonitoredAddressExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 

            try
            {
                // Retrieve recorded updates for a specific monitored address
                AddressMonitoringDetailsSchema result = apiInstance.GetMonitoredAddress(authorization, resourceMonitoringId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.GetMonitoredAddress: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMonitoredSmartContractEventDetails

> SmartContractMonitoringDetailsSchema GetMonitoredSmartContractEventDetails (string authorization, string resourceMonitoringId)

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetMonitoredSmartContractEventDetailsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 

            try
            {
                // Retrieve recorded updates for a specific monitored smart contract
                SmartContractMonitoringDetailsSchema result = apiInstance.GetMonitoredSmartContractEventDetails(authorization, resourceMonitoringId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.GetMonitoredSmartContractEventDetails: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateEventMonitoring

> SmartContractMonitoringSchema UpdateEventMonitoring (string authorization, string resourceMonitoringId, StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema)

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class UpdateEventMonitoringExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 
            var statusUpdateMonitoringRequestSchema = new StatusUpdateMonitoringRequestSchema(); // StatusUpdateMonitoringRequestSchema | 

            try
            {
                // Update the monitoring status of a smart contract
                SmartContractMonitoringSchema result = apiInstance.UpdateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.UpdateEventMonitoring: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateResourceMonitoringAddress

> UpdateAddressMonitoringSchema UpdateResourceMonitoringAddress (string authorization, string resourceMonitoringId, StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema)

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class UpdateResourceMonitoringAddressExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageMonitoredResourcesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var resourceMonitoringId = resourceMonitoringId_example;  // string | 
            var statusUpdateMonitoringRequestSchema = new StatusUpdateMonitoringRequestSchema(); // StatusUpdateMonitoringRequestSchema | 

            try
            {
                // Update the monitoring status of an address
                UpdateAddressMonitoringSchema result = apiInstance.UpdateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageMonitoredResourcesApi.UpdateResourceMonitoringAddress: " + e.Message );
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
 **resourceMonitoringId** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

