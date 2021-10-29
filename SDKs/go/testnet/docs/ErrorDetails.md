# ErrorDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Code** | Pointer to **string** |  | [optional] 
**Description** | Pointer to **string** |  | [optional] 
**Category** | Pointer to **string** |  | [optional] 

## Methods

### NewErrorDetails

`func NewErrorDetails() *ErrorDetails`

NewErrorDetails instantiates a new ErrorDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewErrorDetailsWithDefaults

`func NewErrorDetailsWithDefaults() *ErrorDetails`

NewErrorDetailsWithDefaults instantiates a new ErrorDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCode

`func (o *ErrorDetails) GetCode() string`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *ErrorDetails) GetCodeOk() (*string, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *ErrorDetails) SetCode(v string)`

SetCode sets Code field to given value.

### HasCode

`func (o *ErrorDetails) HasCode() bool`

HasCode returns a boolean if a field has been set.

### GetDescription

`func (o *ErrorDetails) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *ErrorDetails) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *ErrorDetails) SetDescription(v string)`

SetDescription sets Description field to given value.

### HasDescription

`func (o *ErrorDetails) HasDescription() bool`

HasDescription returns a boolean if a field has been set.

### GetCategory

`func (o *ErrorDetails) GetCategory() string`

GetCategory returns the Category field if non-nil, zero value otherwise.

### GetCategoryOk

`func (o *ErrorDetails) GetCategoryOk() (*string, bool)`

GetCategoryOk returns a tuple with the Category field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCategory

`func (o *ErrorDetails) SetCategory(v string)`

SetCategory sets Category field to given value.

### HasCategory

`func (o *ErrorDetails) HasCategory() bool`

HasCategory returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


