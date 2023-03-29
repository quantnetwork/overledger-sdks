# WWW::OpenAPIClient::Object::Transaction

## Load the model package
```perl
use WWW::OpenAPIClient::Object::Transaction;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**signature** | **ARRAY[string]** | The signatures of this transaction | [optional] 
**origin** | [**ARRAY[Origin]**](Origin.md) |  | [optional] 
**fee** | [**Fee**](Fee.md) |  | [optional] 
**destination** | [**ARRAY[Destination]**](Destination.md) |  | [optional] 
**signed** | **string** |  | [optional] 
**total_payment_amount** | [**ARRAY[Payment]**](Payment.md) |  | [optional] 
**message** | **string** | Any text-based element of the data payload | [optional] 
**transaction_id** | **string** | The unique identifier of the transaction on this DLN | [optional] 
**encoded** | **ARRAY[string]** |  | [optional] 
**extra_fields** | **object** |  | [optional] 
**native_data** | **object** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


