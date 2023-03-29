# PaymentSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Amount** | **string** | The payload amount. The exact format depends on the unit of the token. | 
**Unit** | **string** | The currency or token code | 

## Methods

### NewPaymentSchema

`func NewPaymentSchema(amount string, unit string, ) *PaymentSchema`

NewPaymentSchema instantiates a new PaymentSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPaymentSchemaWithDefaults

`func NewPaymentSchemaWithDefaults() *PaymentSchema`

NewPaymentSchemaWithDefaults instantiates a new PaymentSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAmount

`func (o *PaymentSchema) GetAmount() string`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *PaymentSchema) GetAmountOk() (*string, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *PaymentSchema) SetAmount(v string)`

SetAmount sets Amount field to given value.


### GetUnit

`func (o *PaymentSchema) GetUnit() string`

GetUnit returns the Unit field if non-nil, zero value otherwise.

### GetUnitOk

`func (o *PaymentSchema) GetUnitOk() (*string, bool)`

GetUnitOk returns a tuple with the Unit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnit

`func (o *PaymentSchema) SetUnit(v string)`

SetUnit sets Unit field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


