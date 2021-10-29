# InternalServerErrorSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Path** | Pointer to **string** |  | [optional] 
**Error** | Pointer to **string** |  | [optional] 
**Message** | Pointer to **string** |  | [optional] 
**Timestamp** | Pointer to **time.Time** |  | [optional] 
**Status** | Pointer to **int32** |  | [optional] 

## Methods

### NewInternalServerErrorSchema

`func NewInternalServerErrorSchema() *InternalServerErrorSchema`

NewInternalServerErrorSchema instantiates a new InternalServerErrorSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewInternalServerErrorSchemaWithDefaults

`func NewInternalServerErrorSchemaWithDefaults() *InternalServerErrorSchema`

NewInternalServerErrorSchemaWithDefaults instantiates a new InternalServerErrorSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPath

`func (o *InternalServerErrorSchema) GetPath() string`

GetPath returns the Path field if non-nil, zero value otherwise.

### GetPathOk

`func (o *InternalServerErrorSchema) GetPathOk() (*string, bool)`

GetPathOk returns a tuple with the Path field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPath

`func (o *InternalServerErrorSchema) SetPath(v string)`

SetPath sets Path field to given value.

### HasPath

`func (o *InternalServerErrorSchema) HasPath() bool`

HasPath returns a boolean if a field has been set.

### GetError

`func (o *InternalServerErrorSchema) GetError() string`

GetError returns the Error field if non-nil, zero value otherwise.

### GetErrorOk

`func (o *InternalServerErrorSchema) GetErrorOk() (*string, bool)`

GetErrorOk returns a tuple with the Error field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetError

`func (o *InternalServerErrorSchema) SetError(v string)`

SetError sets Error field to given value.

### HasError

`func (o *InternalServerErrorSchema) HasError() bool`

HasError returns a boolean if a field has been set.

### GetMessage

`func (o *InternalServerErrorSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *InternalServerErrorSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *InternalServerErrorSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *InternalServerErrorSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetTimestamp

`func (o *InternalServerErrorSchema) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *InternalServerErrorSchema) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *InternalServerErrorSchema) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *InternalServerErrorSchema) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetStatus

`func (o *InternalServerErrorSchema) GetStatus() int32`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *InternalServerErrorSchema) GetStatusOk() (*int32, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *InternalServerErrorSchema) SetStatus(v int32)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *InternalServerErrorSchema) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


