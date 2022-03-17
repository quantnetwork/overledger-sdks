# ApproveRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Mandate** | Pointer to [**[]PayeeCreditSchema**](PayeeCreditSchema.md) | Who are the payees of this transaction | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 
**Payer** | Pointer to [**[]PayerCreditSchema**](PayerCreditSchema.md) | Who are the payers of this transaction | [optional] 

## Methods

### NewApproveRequestDetailsSchema

`func NewApproveRequestDetailsSchema() *ApproveRequestDetailsSchema`

NewApproveRequestDetailsSchema instantiates a new ApproveRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewApproveRequestDetailsSchemaWithDefaults

`func NewApproveRequestDetailsSchemaWithDefaults() *ApproveRequestDetailsSchema`

NewApproveRequestDetailsSchemaWithDefaults instantiates a new ApproveRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMandate

`func (o *ApproveRequestDetailsSchema) GetMandate() []PayeeCreditSchema`

GetMandate returns the Mandate field if non-nil, zero value otherwise.

### GetMandateOk

`func (o *ApproveRequestDetailsSchema) GetMandateOk() (*[]PayeeCreditSchema, bool)`

GetMandateOk returns a tuple with the Mandate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMandate

`func (o *ApproveRequestDetailsSchema) SetMandate(v []PayeeCreditSchema)`

SetMandate sets Mandate field to given value.

### HasMandate

`func (o *ApproveRequestDetailsSchema) HasMandate() bool`

HasMandate returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *ApproveRequestDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *ApproveRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *ApproveRequestDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *ApproveRequestDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.

### GetPayer

`func (o *ApproveRequestDetailsSchema) GetPayer() []PayerCreditSchema`

GetPayer returns the Payer field if non-nil, zero value otherwise.

### GetPayerOk

`func (o *ApproveRequestDetailsSchema) GetPayerOk() (*[]PayerCreditSchema, bool)`

GetPayerOk returns a tuple with the Payer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayer

`func (o *ApproveRequestDetailsSchema) SetPayer(v []PayerCreditSchema)`

SetPayer sets Payer field to given value.

### HasPayer

`func (o *ApproveRequestDetailsSchema) HasPayer() bool`

HasPayer returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


