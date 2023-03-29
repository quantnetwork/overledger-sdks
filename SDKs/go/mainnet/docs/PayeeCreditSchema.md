# PayeeCreditSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Payment** | Pointer to [**PaymentSchema**](PaymentSchema.md) |  | [optional] 
**PayeeId** | Pointer to **string** | The unique identifiers of the payees | [optional] 

## Methods

### NewPayeeCreditSchema

`func NewPayeeCreditSchema() *PayeeCreditSchema`

NewPayeeCreditSchema instantiates a new PayeeCreditSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPayeeCreditSchemaWithDefaults

`func NewPayeeCreditSchemaWithDefaults() *PayeeCreditSchema`

NewPayeeCreditSchemaWithDefaults instantiates a new PayeeCreditSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPayment

`func (o *PayeeCreditSchema) GetPayment() PaymentSchema`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *PayeeCreditSchema) GetPaymentOk() (*PaymentSchema, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *PayeeCreditSchema) SetPayment(v PaymentSchema)`

SetPayment sets Payment field to given value.

### HasPayment

`func (o *PayeeCreditSchema) HasPayment() bool`

HasPayment returns a boolean if a field has been set.

### GetPayeeId

`func (o *PayeeCreditSchema) GetPayeeId() string`

GetPayeeId returns the PayeeId field if non-nil, zero value otherwise.

### GetPayeeIdOk

`func (o *PayeeCreditSchema) GetPayeeIdOk() (*string, bool)`

GetPayeeIdOk returns a tuple with the PayeeId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayeeId

`func (o *PayeeCreditSchema) SetPayeeId(v string)`

SetPayeeId sets PayeeId field to given value.

### HasPayeeId

`func (o *PayeeCreditSchema) HasPayeeId() bool`

HasPayeeId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


