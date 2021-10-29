# ErrorList

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Errors** | Pointer to [**[]Error**](Error.md) |  | [optional] 
**ErrorCount** | Pointer to **int32** |  | [optional] 

## Methods

### NewErrorList

`func NewErrorList() *ErrorList`

NewErrorList instantiates a new ErrorList object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewErrorListWithDefaults

`func NewErrorListWithDefaults() *ErrorList`

NewErrorListWithDefaults instantiates a new ErrorList object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetErrors

`func (o *ErrorList) GetErrors() []Error`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *ErrorList) GetErrorsOk() (*[]Error, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *ErrorList) SetErrors(v []Error)`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *ErrorList) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetErrorCount

`func (o *ErrorList) GetErrorCount() int32`

GetErrorCount returns the ErrorCount field if non-nil, zero value otherwise.

### GetErrorCountOk

`func (o *ErrorList) GetErrorCountOk() (*int32, bool)`

GetErrorCountOk returns a tuple with the ErrorCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorCount

`func (o *ErrorList) SetErrorCount(v int32)`

SetErrorCount sets ErrorCount field to given value.

### HasErrorCount

`func (o *ErrorList) HasErrorCount() bool`

HasErrorCount returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


