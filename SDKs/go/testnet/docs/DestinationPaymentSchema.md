# DestinationPaymentSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DestinationId** | **string** | Unique identifier of the destination/recipient | 
**Payment** | [**PaymentSchema**](PaymentSchema.md) |  | 

## Methods

### NewDestinationPaymentSchema

`func NewDestinationPaymentSchema(destinationId string, payment PaymentSchema, ) *DestinationPaymentSchema`

NewDestinationPaymentSchema instantiates a new DestinationPaymentSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDestinationPaymentSchemaWithDefaults

`func NewDestinationPaymentSchemaWithDefaults() *DestinationPaymentSchema`

NewDestinationPaymentSchemaWithDefaults instantiates a new DestinationPaymentSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDestinationId

`func (o *DestinationPaymentSchema) GetDestinationId() string`

GetDestinationId returns the DestinationId field if non-nil, zero value otherwise.

### GetDestinationIdOk

`func (o *DestinationPaymentSchema) GetDestinationIdOk() (*string, bool)`

GetDestinationIdOk returns a tuple with the DestinationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestinationId

`func (o *DestinationPaymentSchema) SetDestinationId(v string)`

SetDestinationId sets DestinationId field to given value.


### GetPayment

`func (o *DestinationPaymentSchema) GetPayment() PaymentSchema`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *DestinationPaymentSchema) GetPaymentOk() (*PaymentSchema, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *DestinationPaymentSchema) SetPayment(v PaymentSchema)`

SetPayment sets Payment field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


