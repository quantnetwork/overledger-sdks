# OwnerBurnSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | Pointer to **string** | Unique Identifier of the owner | [optional] 
**Burn** | Pointer to [**BurnSchema**](BurnSchema.md) |  | [optional] 

## Methods

### NewOwnerBurnSchema

`func NewOwnerBurnSchema() *OwnerBurnSchema`

NewOwnerBurnSchema instantiates a new OwnerBurnSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOwnerBurnSchemaWithDefaults

`func NewOwnerBurnSchemaWithDefaults() *OwnerBurnSchema`

NewOwnerBurnSchemaWithDefaults instantiates a new OwnerBurnSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *OwnerBurnSchema) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *OwnerBurnSchema) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *OwnerBurnSchema) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *OwnerBurnSchema) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetBurn

`func (o *OwnerBurnSchema) GetBurn() BurnSchema`

GetBurn returns the Burn field if non-nil, zero value otherwise.

### GetBurnOk

`func (o *OwnerBurnSchema) GetBurnOk() (*BurnSchema, bool)`

GetBurnOk returns a tuple with the Burn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBurn

`func (o *OwnerBurnSchema) SetBurn(v BurnSchema)`

SetBurn sets Burn field to given value.

### HasBurn

`func (o *OwnerBurnSchema) HasBurn() bool`

HasBurn returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


