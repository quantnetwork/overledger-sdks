# Payment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Amount** | Pointer to **string** | The amount of a currency | [optional] 
**Unit** | Pointer to **string** | The unit of this currency/token | [optional] 
**Issuer** | Pointer to **string** |  | [optional] 

## Methods

### NewPayment

`func NewPayment() *Payment`

NewPayment instantiates a new Payment object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPaymentWithDefaults

`func NewPaymentWithDefaults() *Payment`

NewPaymentWithDefaults instantiates a new Payment object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAmount

`func (o *Payment) GetAmount() string`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *Payment) GetAmountOk() (*string, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *Payment) SetAmount(v string)`

SetAmount sets Amount field to given value.

### HasAmount

`func (o *Payment) HasAmount() bool`

HasAmount returns a boolean if a field has been set.

### GetUnit

`func (o *Payment) GetUnit() string`

GetUnit returns the Unit field if non-nil, zero value otherwise.

### GetUnitOk

`func (o *Payment) GetUnitOk() (*string, bool)`

GetUnitOk returns a tuple with the Unit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnit

`func (o *Payment) SetUnit(v string)`

SetUnit sets Unit field to given value.

### HasUnit

`func (o *Payment) HasUnit() bool`

HasUnit returns a boolean if a field has been set.

### GetIssuer

`func (o *Payment) GetIssuer() string`

GetIssuer returns the Issuer field if non-nil, zero value otherwise.

### GetIssuerOk

`func (o *Payment) GetIssuerOk() (*string, bool)`

GetIssuerOk returns a tuple with the Issuer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIssuer

`func (o *Payment) SetIssuer(v string)`

SetIssuer sets Issuer field to given value.

### HasIssuer

`func (o *Payment) HasIssuer() bool`

HasIssuer returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


