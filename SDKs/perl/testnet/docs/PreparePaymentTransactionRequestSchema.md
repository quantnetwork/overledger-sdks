# WWW::OpenAPIClient::Object::PreparePaymentTransactionRequestSchema

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PreparePaymentTransactionRequestSchema;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**Location**](Location.md) |  | 
**type** | **string** | The type of the transaction | 
**urgency** | **string** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**request_details** | [**PaymentRequestDetailsSchema**](PaymentRequestDetailsSchema.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


