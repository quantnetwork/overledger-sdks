# CreditRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Payee** | Pointer to [**[]PayeeCreditSchema**](PayeeCreditSchema.md) | Who are the payees of this transaction | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**Payer** | Pointer to [**[]PayerCreditSchema**](PayerCreditSchema.md) | Who are the payers of this transaction | [optional] 

## Methods

### NewCreditRequestDetailsSchema

`func NewCreditRequestDetailsSchema() *CreditRequestDetailsSchema`

NewCreditRequestDetailsSchema instantiates a new CreditRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCreditRequestDetailsSchemaWithDefaults

`func NewCreditRequestDetailsSchemaWithDefaults() *CreditRequestDetailsSchema`

NewCreditRequestDetailsSchemaWithDefaults instantiates a new CreditRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPayee

`func (o *CreditRequestDetailsSchema) GetPayee() []PayeeCreditSchema`

GetPayee returns the Payee field if non-nil, zero value otherwise.

### GetPayeeOk

`func (o *CreditRequestDetailsSchema) GetPayeeOk() (*[]PayeeCreditSchema, bool)`

GetPayeeOk returns a tuple with the Payee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayee

`func (o *CreditRequestDetailsSchema) SetPayee(v []PayeeCreditSchema)`

SetPayee sets Payee field to given value.

### HasPayee

`func (o *CreditRequestDetailsSchema) HasPayee() bool`

HasPayee returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *CreditRequestDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *CreditRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *CreditRequestDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *CreditRequestDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.

### GetMessage

`func (o *CreditRequestDetailsSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *CreditRequestDetailsSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *CreditRequestDetailsSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *CreditRequestDetailsSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetPayer

`func (o *CreditRequestDetailsSchema) GetPayer() []PayerCreditSchema`

GetPayer returns the Payer field if non-nil, zero value otherwise.

### GetPayerOk

`func (o *CreditRequestDetailsSchema) GetPayerOk() (*[]PayerCreditSchema, bool)`

GetPayerOk returns a tuple with the Payer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayer

`func (o *CreditRequestDetailsSchema) SetPayer(v []PayerCreditSchema)`

SetPayer sets Payer field to given value.

### HasPayer

`func (o *CreditRequestDetailsSchema) HasPayer() bool`

HasPayer returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


