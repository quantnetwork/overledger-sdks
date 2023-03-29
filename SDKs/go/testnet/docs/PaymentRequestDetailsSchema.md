# PaymentRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Destination** | [**[]DestinationPaymentSchema**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**OverledgerSigningType** | Pointer to **string** | The method of signing used to submit the transaction | [optional] 
**Origin** | [**[]OriginPaymentSchema**](OriginPaymentSchema.md) | List of where this transaction is coming from | 

## Methods

### NewPaymentRequestDetailsSchema

`func NewPaymentRequestDetailsSchema(destination []DestinationPaymentSchema, origin []OriginPaymentSchema, ) *PaymentRequestDetailsSchema`

NewPaymentRequestDetailsSchema instantiates a new PaymentRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPaymentRequestDetailsSchemaWithDefaults

`func NewPaymentRequestDetailsSchemaWithDefaults() *PaymentRequestDetailsSchema`

NewPaymentRequestDetailsSchemaWithDefaults instantiates a new PaymentRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDestination

`func (o *PaymentRequestDetailsSchema) GetDestination() []DestinationPaymentSchema`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *PaymentRequestDetailsSchema) GetDestinationOk() (*[]DestinationPaymentSchema, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *PaymentRequestDetailsSchema) SetDestination(v []DestinationPaymentSchema)`

SetDestination sets Destination field to given value.


### GetMessage

`func (o *PaymentRequestDetailsSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *PaymentRequestDetailsSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *PaymentRequestDetailsSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *PaymentRequestDetailsSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *PaymentRequestDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *PaymentRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *PaymentRequestDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *PaymentRequestDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.

### GetOrigin

`func (o *PaymentRequestDetailsSchema) GetOrigin() []OriginPaymentSchema`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *PaymentRequestDetailsSchema) GetOriginOk() (*[]OriginPaymentSchema, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *PaymentRequestDetailsSchema) SetOrigin(v []OriginPaymentSchema)`

SetOrigin sets Origin field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


