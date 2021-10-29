# Parameter

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | Pointer to **string** |  | [optional] 
**Value** | Pointer to **map[string]interface{}** |  | [optional] 
**Key** | Pointer to **string** |  | [optional] 

## Methods

### NewParameter

`func NewParameter() *Parameter`

NewParameter instantiates a new Parameter object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewParameterWithDefaults

`func NewParameterWithDefaults() *Parameter`

NewParameterWithDefaults instantiates a new Parameter object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetType

`func (o *Parameter) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *Parameter) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *Parameter) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *Parameter) HasType() bool`

HasType returns a boolean if a field has been set.

### GetValue

`func (o *Parameter) GetValue() map[string]interface{}`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *Parameter) GetValueOk() (*map[string]interface{}, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *Parameter) SetValue(v map[string]interface{})`

SetValue sets Value field to given value.

### HasValue

`func (o *Parameter) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetKey

`func (o *Parameter) GetKey() string`

GetKey returns the Key field if non-nil, zero value otherwise.

### GetKeyOk

`func (o *Parameter) GetKeyOk() (*string, bool)`

GetKeyOk returns a tuple with the Key field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKey

`func (o *Parameter) SetKey(v string)`

SetKey sets Key field to given value.

### HasKey

`func (o *Parameter) HasKey() bool`

HasKey returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


