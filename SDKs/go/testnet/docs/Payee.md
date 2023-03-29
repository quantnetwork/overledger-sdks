# Payee

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Payment** | Pointer to [**Payment**](Payment.md) |  | [optional] 
**PayeeId** | Pointer to **string** | The unique identifiers of the payee | [optional] 

## Methods

### NewPayee

`func NewPayee() *Payee`

NewPayee instantiates a new Payee object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPayeeWithDefaults

`func NewPayeeWithDefaults() *Payee`

NewPayeeWithDefaults instantiates a new Payee object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPayment

`func (o *Payee) GetPayment() Payment`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *Payee) GetPaymentOk() (*Payment, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *Payee) SetPayment(v Payment)`

SetPayment sets Payment field to given value.

### HasPayment

`func (o *Payee) HasPayment() bool`

HasPayment returns a boolean if a field has been set.

### GetPayeeId

`func (o *Payee) GetPayeeId() string`

GetPayeeId returns the PayeeId field if non-nil, zero value otherwise.

### GetPayeeIdOk

`func (o *Payee) GetPayeeIdOk() (*string, bool)`

GetPayeeIdOk returns a tuple with the PayeeId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayeeId

`func (o *Payee) SetPayeeId(v string)`

SetPayeeId sets PayeeId field to given value.

### HasPayeeId

`func (o *Payee) HasPayeeId() bool`

HasPayeeId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


