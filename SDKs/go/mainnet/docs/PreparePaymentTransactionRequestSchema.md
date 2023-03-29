# PreparePaymentTransactionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Location** | [**Location**](Location.md) |  | 
**Type** | **string** | The type of the transaction | 
**Urgency** | **string** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**RequestDetails** | [**PaymentRequestDetailsSchema**](PaymentRequestDetailsSchema.md) |  | 

## Methods

### NewPreparePaymentTransactionRequestSchema

`func NewPreparePaymentTransactionRequestSchema(location Location, type_ string, urgency string, requestDetails PaymentRequestDetailsSchema, ) *PreparePaymentTransactionRequestSchema`

NewPreparePaymentTransactionRequestSchema instantiates a new PreparePaymentTransactionRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPreparePaymentTransactionRequestSchemaWithDefaults

`func NewPreparePaymentTransactionRequestSchemaWithDefaults() *PreparePaymentTransactionRequestSchema`

NewPreparePaymentTransactionRequestSchemaWithDefaults instantiates a new PreparePaymentTransactionRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocation

`func (o *PreparePaymentTransactionRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PreparePaymentTransactionRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PreparePaymentTransactionRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.


### GetType

`func (o *PreparePaymentTransactionRequestSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *PreparePaymentTransactionRequestSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *PreparePaymentTransactionRequestSchema) SetType(v string)`

SetType sets Type field to given value.


### GetUrgency

`func (o *PreparePaymentTransactionRequestSchema) GetUrgency() string`

GetUrgency returns the Urgency field if non-nil, zero value otherwise.

### GetUrgencyOk

`func (o *PreparePaymentTransactionRequestSchema) GetUrgencyOk() (*string, bool)`

GetUrgencyOk returns a tuple with the Urgency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrgency

`func (o *PreparePaymentTransactionRequestSchema) SetUrgency(v string)`

SetUrgency sets Urgency field to given value.


### GetRequestDetails

`func (o *PreparePaymentTransactionRequestSchema) GetRequestDetails() PaymentRequestDetailsSchema`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *PreparePaymentTransactionRequestSchema) GetRequestDetailsOk() (*PaymentRequestDetailsSchema, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *PreparePaymentTransactionRequestSchema) SetRequestDetails(v PaymentRequestDetailsSchema)`

SetRequestDetails sets RequestDetails field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


