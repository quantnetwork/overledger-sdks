# ErrorResponseMessage

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Code** | Pointer to **int32** |  | [optional] 
**ErrorMessageExtraDetails** | Pointer to **map[string]interface{}** |  | [optional] 
**SubCode** | Pointer to **int32** |  | [optional] 
**LogTraceId** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**Title** | Pointer to **string** |  | [optional] 
**Message** | Pointer to **string** |  | [optional] 

## Methods

### NewErrorResponseMessage

`func NewErrorResponseMessage() *ErrorResponseMessage`

NewErrorResponseMessage instantiates a new ErrorResponseMessage object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewErrorResponseMessageWithDefaults

`func NewErrorResponseMessageWithDefaults() *ErrorResponseMessage`

NewErrorResponseMessageWithDefaults instantiates a new ErrorResponseMessage object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCode

`func (o *ErrorResponseMessage) GetCode() int32`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *ErrorResponseMessage) GetCodeOk() (*int32, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *ErrorResponseMessage) SetCode(v int32)`

SetCode sets Code field to given value.

### HasCode

`func (o *ErrorResponseMessage) HasCode() bool`

HasCode returns a boolean if a field has been set.

### GetErrorMessageExtraDetails

`func (o *ErrorResponseMessage) GetErrorMessageExtraDetails() map[string]interface{}`

GetErrorMessageExtraDetails returns the ErrorMessageExtraDetails field if non-nil, zero value otherwise.

### GetErrorMessageExtraDetailsOk

`func (o *ErrorResponseMessage) GetErrorMessageExtraDetailsOk() (*map[string]interface{}, bool)`

GetErrorMessageExtraDetailsOk returns a tuple with the ErrorMessageExtraDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorMessageExtraDetails

`func (o *ErrorResponseMessage) SetErrorMessageExtraDetails(v map[string]interface{})`

SetErrorMessageExtraDetails sets ErrorMessageExtraDetails field to given value.

### HasErrorMessageExtraDetails

`func (o *ErrorResponseMessage) HasErrorMessageExtraDetails() bool`

HasErrorMessageExtraDetails returns a boolean if a field has been set.

### GetSubCode

`func (o *ErrorResponseMessage) GetSubCode() int32`

GetSubCode returns the SubCode field if non-nil, zero value otherwise.

### GetSubCodeOk

`func (o *ErrorResponseMessage) GetSubCodeOk() (*int32, bool)`

GetSubCodeOk returns a tuple with the SubCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubCode

`func (o *ErrorResponseMessage) SetSubCode(v int32)`

SetSubCode sets SubCode field to given value.

### HasSubCode

`func (o *ErrorResponseMessage) HasSubCode() bool`

HasSubCode returns a boolean if a field has been set.

### GetLogTraceId

`func (o *ErrorResponseMessage) GetLogTraceId() string`

GetLogTraceId returns the LogTraceId field if non-nil, zero value otherwise.

### GetLogTraceIdOk

`func (o *ErrorResponseMessage) GetLogTraceIdOk() (*string, bool)`

GetLogTraceIdOk returns a tuple with the LogTraceId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLogTraceId

`func (o *ErrorResponseMessage) SetLogTraceId(v string)`

SetLogTraceId sets LogTraceId field to given value.

### HasLogTraceId

`func (o *ErrorResponseMessage) HasLogTraceId() bool`

HasLogTraceId returns a boolean if a field has been set.

### GetType

`func (o *ErrorResponseMessage) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ErrorResponseMessage) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ErrorResponseMessage) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ErrorResponseMessage) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTitle

`func (o *ErrorResponseMessage) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *ErrorResponseMessage) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *ErrorResponseMessage) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *ErrorResponseMessage) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetMessage

`func (o *ErrorResponseMessage) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *ErrorResponseMessage) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *ErrorResponseMessage) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *ErrorResponseMessage) HasMessage() bool`

HasMessage returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


