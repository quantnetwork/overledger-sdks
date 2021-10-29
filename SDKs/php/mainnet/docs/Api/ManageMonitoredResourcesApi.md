# OpenAPI\Client\ManageMonitoredResourcesApi

All URIs are relative to https://api.overledger.io.

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteEventMonitoring()**](ManageMonitoredResourcesApi.md#deleteEventMonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**deleteResourceMonitoringAddress()**](ManageMonitoredResourcesApi.md#deleteResourceMonitoringAddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**getListOfAddresses()**](ManageMonitoredResourcesApi.md#getListOfAddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**getListOfResources()**](ManageMonitoredResourcesApi.md#getListOfResources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**getListOfSmartContractEvents()**](ManageMonitoredResourcesApi.md#getListOfSmartContractEvents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**getMonitoredAddress()**](ManageMonitoredResourcesApi.md#getMonitoredAddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**getMonitoredSmartContractEventDetails()**](ManageMonitoredResourcesApi.md#getMonitoredSmartContractEventDetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**updateEventMonitoring()**](ManageMonitoredResourcesApi.md#updateEventMonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**updateResourceMonitoringAddress()**](ManageMonitoredResourcesApi.md#updateResourceMonitoringAddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address


## `deleteEventMonitoring()`

```php
deleteEventMonitoring($authorization, $resource_monitoring_id): \OpenAPI\Client\Model\SmartContractMonitoringSchema
```

Stop monitoring a smart contract

Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string

try {
    $result = $apiInstance->deleteEventMonitoring($authorization, $resource_monitoring_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->deleteEventMonitoring: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\SmartContractMonitoringSchema**](../Model/SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `deleteResourceMonitoringAddress()`

```php
deleteResourceMonitoringAddress($authorization, $resource_monitoring_id): \OpenAPI\Client\Model\DeleteResourceMonitoringAddressSchema
```

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string

try {
    $result = $apiInstance->deleteResourceMonitoringAddress($authorization, $resource_monitoring_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->deleteResourceMonitoringAddress: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\DeleteResourceMonitoringAddressSchema**](../Model/DeleteResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getListOfAddresses()`

```php
getListOfAddresses($authorization): \OpenAPI\Client\Model\ResourceMonitoringAddressSchema[]
```

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string

try {
    $result = $apiInstance->getListOfAddresses($authorization);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->getListOfAddresses: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\ResourceMonitoringAddressSchema[]**](../Model/ResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getListOfResources()`

```php
getListOfResources($authorization): \OpenAPI\Client\Model\SmartContractMonitoringSchema[]
```

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string

try {
    $result = $apiInstance->getListOfResources($authorization);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->getListOfResources: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\SmartContractMonitoringSchema[]**](../Model/SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getListOfSmartContractEvents()`

```php
getListOfSmartContractEvents($authorization): \OpenAPI\Client\Model\SmartContractMonitoringSchema[]
```

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string

try {
    $result = $apiInstance->getListOfSmartContractEvents($authorization);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->getListOfSmartContractEvents: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\SmartContractMonitoringSchema[]**](../Model/SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getMonitoredAddress()`

```php
getMonitoredAddress($authorization, $resource_monitoring_id): \OpenAPI\Client\Model\AddressMonitoringDetailsSchema
```

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string

try {
    $result = $apiInstance->getMonitoredAddress($authorization, $resource_monitoring_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->getMonitoredAddress: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\AddressMonitoringDetailsSchema**](../Model/AddressMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getMonitoredSmartContractEventDetails()`

```php
getMonitoredSmartContractEventDetails($authorization, $resource_monitoring_id): \OpenAPI\Client\Model\SmartContractMonitoringDetailsSchema
```

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string

try {
    $result = $apiInstance->getMonitoredSmartContractEventDetails($authorization, $resource_monitoring_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->getMonitoredSmartContractEventDetails: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\SmartContractMonitoringDetailsSchema**](../Model/SmartContractMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateEventMonitoring()`

```php
updateEventMonitoring($authorization, $resource_monitoring_id, $status_update_monitoring_request_schema): \OpenAPI\Client\Model\SmartContractMonitoringSchema
```

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string
$status_update_monitoring_request_schema = {"statusUpdate":{"value":"INACTIVE"}}; // \OpenAPI\Client\Model\StatusUpdateMonitoringRequestSchema

try {
    $result = $apiInstance->updateEventMonitoring($authorization, $resource_monitoring_id, $status_update_monitoring_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->updateEventMonitoring: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |
 **status_update_monitoring_request_schema** | [**\OpenAPI\Client\Model\StatusUpdateMonitoringRequestSchema**](../Model/StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\SmartContractMonitoringSchema**](../Model/SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `updateResourceMonitoringAddress()`

```php
updateResourceMonitoringAddress($authorization, $resource_monitoring_id, $status_update_monitoring_request_schema): \OpenAPI\Client\Model\UpdateAddressMonitoringSchema
```

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\ManageMonitoredResourcesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$resource_monitoring_id = 'resource_monitoring_id_example'; // string
$status_update_monitoring_request_schema = {"statusUpdate":{"value":"INACTIVE"}}; // \OpenAPI\Client\Model\StatusUpdateMonitoringRequestSchema

try {
    $result = $apiInstance->updateResourceMonitoringAddress($authorization, $resource_monitoring_id, $status_update_monitoring_request_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ManageMonitoredResourcesApi->updateResourceMonitoringAddress: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  |
 **resource_monitoring_id** | **string**|  |
 **status_update_monitoring_request_schema** | [**\OpenAPI\Client\Model\StatusUpdateMonitoringRequestSchema**](../Model/StatusUpdateMonitoringRequestSchema.md)|  |

### Return type

[**\OpenAPI\Client\Model\UpdateAddressMonitoringSchema**](../Model/UpdateAddressMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
