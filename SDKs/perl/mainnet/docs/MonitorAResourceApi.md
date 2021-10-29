# WWW::OpenAPIClient::MonitorAResourceApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::MonitorAResourceApi;
```

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resource_monitoring_address**](MonitorAResourceApi.md#resource_monitoring_address) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
[**track_and_subscribe_event**](MonitorAResourceApi.md#track_and_subscribe_event) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event


# **resource_monitoring_address**
> AddressMonitoringResponseSchema resource_monitoring_address(authorization => $authorization, address_monitoring_request_schema => $address_monitoring_request_schema)

Monitor an address for incoming and outgoing transactions

Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MonitorAResourceApi;
my $api_instance = WWW::OpenAPIClient::MonitorAResourceApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $address_monitoring_request_schema = WWW::OpenAPIClient::Object::AddressMonitoringRequestSchema->new(); # AddressMonitoringRequestSchema | 

eval {
    my $result = $api_instance->resource_monitoring_address(authorization => $authorization, address_monitoring_request_schema => $address_monitoring_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MonitorAResourceApi->resource_monitoring_address: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **address_monitoring_request_schema** | [**AddressMonitoringRequestSchema**](AddressMonitoringRequestSchema.md)|  | 

### Return type

[**AddressMonitoringResponseSchema**](AddressMonitoringResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **track_and_subscribe_event**
> CreateSmartContractMonitoringSchema track_and_subscribe_event(authorization => $authorization, monitor_smart_contract_request_schema => $monitor_smart_contract_request_schema)

Monitor a smart contract for an event

Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MonitorAResourceApi;
my $api_instance = WWW::OpenAPIClient::MonitorAResourceApi->new(

    # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    access_token => 'YOUR_ACCESS_TOKEN',
);

my $authorization = "authorization_example"; # string | 
my $monitor_smart_contract_request_schema = WWW::OpenAPIClient::Object::MonitorSmartContractRequestSchema->new(); # MonitorSmartContractRequestSchema | 

eval {
    my $result = $api_instance->track_and_subscribe_event(authorization => $authorization, monitor_smart_contract_request_schema => $monitor_smart_contract_request_schema);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MonitorAResourceApi->track_and_subscribe_event: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **monitor_smart_contract_request_schema** | [**MonitorSmartContractRequestSchema**](MonitorSmartContractRequestSchema.md)|  | 

### Return type

[**CreateSmartContractMonitoringSchema**](CreateSmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

