# WWW::OpenAPIClient::ManageMonitoredResourcesApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::ManageMonitoredResourcesApi;
```

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_event_monitoring**](ManageMonitoredResourcesApi.md#delete_event_monitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**delete_resource_monitoring_address**](ManageMonitoredResourcesApi.md#delete_resource_monitoring_address) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**get_list_of_addresses**](ManageMonitoredResourcesApi.md#get_list_of_addresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**get_list_of_resources**](ManageMonitoredResourcesApi.md#get_list_of_resources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**get_list_of_smart_contract_events**](ManageMonitoredResourcesApi.md#get_list_of_smart_contract_events) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**get_monitored_address**](ManageMonitoredResourcesApi.md#get_monitored_address) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**get_monitored_smart_contract_event_details**](ManageMonitoredResourcesApi.md#get_monitored_smart_contract_event_details) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**update_event_monitoring**](ManageMonitoredResourcesApi.md#update_event_monitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**update_resource_monitoring_address**](ManageMonitoredResourcesApi.md#update_resource_monitoring_address) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address


# **delete_event_monitoring**
> SmartContractMonitoringSchema delete_event_monitoring(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id)

Stop monitoring a smart contract

Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 

eval {
    my $result = $api_instance->delete_event_monitoring(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->delete_event_monitoring: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_resource_monitoring_address**
> DeleteResourceMonitoringAddressSchema delete_resource_monitoring_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id)

Stop monitoring an address

Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 

eval {
    my $result = $api_instance->delete_resource_monitoring_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->delete_resource_monitoring_address: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 

### Return type

[**DeleteResourceMonitoringAddressSchema**](DeleteResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_list_of_addresses**
> ARRAY[ResourceMonitoringAddressSchema] get_list_of_addresses(authorization => $authorization)

Retrieve a list of addresses being monitored

Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 

eval {
    my $result = $api_instance->get_list_of_addresses(authorization => $authorization);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->get_list_of_addresses: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 

### Return type

[**ARRAY[ResourceMonitoringAddressSchema]**](ResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_list_of_resources**
> ARRAY[SmartContractMonitoringSchema] get_list_of_resources(authorization => $authorization)

Retrieve a list of all resources being monitored

Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 

eval {
    my $result = $api_instance->get_list_of_resources(authorization => $authorization);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->get_list_of_resources: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 

### Return type

[**ARRAY[SmartContractMonitoringSchema]**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_list_of_smart_contract_events**
> ARRAY[SmartContractMonitoringSchema] get_list_of_smart_contract_events(authorization => $authorization)

Retrieve a list of smart contracts being monitored

Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 

eval {
    my $result = $api_instance->get_list_of_smart_contract_events(authorization => $authorization);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->get_list_of_smart_contract_events: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 

### Return type

[**ARRAY[SmartContractMonitoringSchema]**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_monitored_address**
> AddressMonitoringDetailsSchema get_monitored_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id)

Retrieve recorded updates for a specific monitored address

Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 

eval {
    my $result = $api_instance->get_monitored_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->get_monitored_address: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 

### Return type

[**AddressMonitoringDetailsSchema**](AddressMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_monitored_smart_contract_event_details**
> SmartContractMonitoringDetailsSchema get_monitored_smart_contract_event_details(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id)

Retrieve recorded updates for a specific monitored smart contract

Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 

eval {
    my $result = $api_instance->get_monitored_smart_contract_event_details(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->get_monitored_smart_contract_event_details: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 

### Return type

[**SmartContractMonitoringDetailsSchema**](SmartContractMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_event_monitoring**
> SmartContractMonitoringSchema update_event_monitoring(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id, status_update_monitoring_request_schema => $status_update_monitoring_request_schema)

Update the monitoring status of a smart contract

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 
my $status_update_monitoring_request_schema = WWW::OpenAPIClient::Object::StatusUpdateMonitoringRequestSchema->new(); # StatusUpdateMonitoringRequestSchema | 

eval {
    my $result = $api_instance->update_event_monitoring(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id, status_update_monitoring_request_schema => $status_update_monitoring_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->update_event_monitoring: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 
 **status_update_monitoring_request_schema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  | 

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_resource_monitoring_address**
> UpdateAddressMonitoringSchema update_resource_monitoring_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id, status_update_monitoring_request_schema => $status_update_monitoring_request_schema)

Update the monitoring status of an address

Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ManageMonitoredResourcesApi;
my $api_instance = WWW::OpenAPIClient::ManageMonitoredResourcesApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $resource_monitoring_id = "resource_monitoring_id_example"; # string | 
my $status_update_monitoring_request_schema = WWW::OpenAPIClient::Object::StatusUpdateMonitoringRequestSchema->new(); # StatusUpdateMonitoringRequestSchema | 

eval {
    my $result = $api_instance->update_resource_monitoring_address(authorization => $authorization, resource_monitoring_id => $resource_monitoring_id, status_update_monitoring_request_schema => $status_update_monitoring_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ManageMonitoredResourcesApi->update_resource_monitoring_address: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **resource_monitoring_id** | **string**|  | 
 **status_update_monitoring_request_schema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md)|  | 

### Return type

[**UpdateAddressMonitoringSchema**](UpdateAddressMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

