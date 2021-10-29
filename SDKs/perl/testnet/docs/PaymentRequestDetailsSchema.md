# WWW::OpenAPIClient::Object::PaymentRequestDetailsSchema

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PaymentRequestDetailsSchema;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**overledger_signing_type** | **string** |  | [optional] 
**origin** | [**ARRAY[OriginPaymentSchema]**](OriginPaymentSchema.md) | Where is this transaction coming from | [optional] 
**destination** | [**ARRAY[DestinationPaymentSchema]**](DestinationPaymentSchema.md) | The Destination of this transaction | [optional] 
**message** | **string** | Any text-based element of the data payload | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


