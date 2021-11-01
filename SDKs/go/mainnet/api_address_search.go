/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"bytes"
	_context "context"
	_ioutil "io/ioutil"
	_nethttp "net/http"
	_neturl "net/url"
	"strings"
)

// Linger please
var (
	_ _context.Context
)

// AddressSearchApiService AddressSearchApi service
type AddressSearchApiService service

type ApiExecutePreparedSearchRequestAddressBalanceRequest struct {
	ctx _context.Context
	ApiService *AddressSearchApiService
	authorization *string
	requestId *string
}

func (r ApiExecutePreparedSearchRequestAddressBalanceRequest) Authorization(authorization string) ApiExecutePreparedSearchRequestAddressBalanceRequest {
	r.authorization = &authorization
	return r
}
func (r ApiExecutePreparedSearchRequestAddressBalanceRequest) RequestId(requestId string) ApiExecutePreparedSearchRequestAddressBalanceRequest {
	r.requestId = &requestId
	return r
}

func (r ApiExecutePreparedSearchRequestAddressBalanceRequest) Execute() (ExecuteSearchBalanceResponse, *_nethttp.Response, error) {
	return r.ApiService.ExecutePreparedSearchRequestAddressBalanceExecute(r)
}

/*
ExecutePreparedSearchRequestAddressBalance Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiExecutePreparedSearchRequestAddressBalanceRequest
*/
func (a *AddressSearchApiService) ExecutePreparedSearchRequestAddressBalance(ctx _context.Context) ApiExecutePreparedSearchRequestAddressBalanceRequest {
	return ApiExecutePreparedSearchRequestAddressBalanceRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return ExecuteSearchBalanceResponse
func (a *AddressSearchApiService) ExecutePreparedSearchRequestAddressBalanceExecute(r ApiExecutePreparedSearchRequestAddressBalanceRequest) (ExecuteSearchBalanceResponse, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  ExecuteSearchBalanceResponse
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "AddressSearchApiService.ExecutePreparedSearchRequestAddressBalance")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/execution/search/address/balance"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 4096 {
		return localVarReturnValue, nil, reportError("authorization must have less than 4096 elements")
	}
	if r.requestId == nil {
		return localVarReturnValue, nil, reportError("requestId is required and must be specified")
	}
	if strlen(*r.requestId) < 0 {
		return localVarReturnValue, nil, reportError("requestId must have at least 0 elements")
	}
	if strlen(*r.requestId) > 36 {
		return localVarReturnValue, nil, reportError("requestId must have less than 36 elements")
	}

	localVarQueryParams.Add("requestId", parameterToString(*r.requestId, ""))
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	localVarHeaderParams["Authorization"] = parameterToString(*r.authorization, "")
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, localVarFormFileName, localVarFileName, localVarFileBytes)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := _ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = _ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 401 {
			var v ErrorList
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 404 {
			var v ErrorDetails
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 500 {
			var v InternalServerErrorSchema
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiExecutePreparedSearchRequestAddressSequenceRequest struct {
	ctx _context.Context
	ApiService *AddressSearchApiService
	authorization *string
	requestId *string
}

func (r ApiExecutePreparedSearchRequestAddressSequenceRequest) Authorization(authorization string) ApiExecutePreparedSearchRequestAddressSequenceRequest {
	r.authorization = &authorization
	return r
}
func (r ApiExecutePreparedSearchRequestAddressSequenceRequest) RequestId(requestId string) ApiExecutePreparedSearchRequestAddressSequenceRequest {
	r.requestId = &requestId
	return r
}

func (r ApiExecutePreparedSearchRequestAddressSequenceRequest) Execute() (ExecuteSearchSequenceResponse, *_nethttp.Response, error) {
	return r.ApiService.ExecutePreparedSearchRequestAddressSequenceExecute(r)
}

/*
ExecutePreparedSearchRequestAddressSequence Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiExecutePreparedSearchRequestAddressSequenceRequest
*/
func (a *AddressSearchApiService) ExecutePreparedSearchRequestAddressSequence(ctx _context.Context) ApiExecutePreparedSearchRequestAddressSequenceRequest {
	return ApiExecutePreparedSearchRequestAddressSequenceRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return ExecuteSearchSequenceResponse
func (a *AddressSearchApiService) ExecutePreparedSearchRequestAddressSequenceExecute(r ApiExecutePreparedSearchRequestAddressSequenceRequest) (ExecuteSearchSequenceResponse, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  ExecuteSearchSequenceResponse
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "AddressSearchApiService.ExecutePreparedSearchRequestAddressSequence")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/execution/search/address/sequence"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 4096 {
		return localVarReturnValue, nil, reportError("authorization must have less than 4096 elements")
	}
	if r.requestId == nil {
		return localVarReturnValue, nil, reportError("requestId is required and must be specified")
	}
	if strlen(*r.requestId) < 0 {
		return localVarReturnValue, nil, reportError("requestId must have at least 0 elements")
	}
	if strlen(*r.requestId) > 36 {
		return localVarReturnValue, nil, reportError("requestId must have less than 36 elements")
	}

	localVarQueryParams.Add("requestId", parameterToString(*r.requestId, ""))
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	localVarHeaderParams["Authorization"] = parameterToString(*r.authorization, "")
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, localVarFormFileName, localVarFileName, localVarFileBytes)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := _ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = _ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 401 {
			var v ErrorList
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 404 {
			var v ErrorDetails
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 500 {
			var v InternalServerErrorSchema
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiPrepareAddressBalanceSearchRequestRequest struct {
	ctx _context.Context
	ApiService *AddressSearchApiService
	authorization *string
	addressId string
	prepareSearchSchema *PrepareSearchSchema
}

func (r ApiPrepareAddressBalanceSearchRequestRequest) Authorization(authorization string) ApiPrepareAddressBalanceSearchRequestRequest {
	r.authorization = &authorization
	return r
}
func (r ApiPrepareAddressBalanceSearchRequestRequest) PrepareSearchSchema(prepareSearchSchema PrepareSearchSchema) ApiPrepareAddressBalanceSearchRequestRequest {
	r.prepareSearchSchema = &prepareSearchSchema
	return r
}

func (r ApiPrepareAddressBalanceSearchRequestRequest) Execute() (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.PrepareAddressBalanceSearchRequestExecute(r)
}

/*
PrepareAddressBalanceSearchRequest Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param addressId
 @return ApiPrepareAddressBalanceSearchRequestRequest
*/
func (a *AddressSearchApiService) PrepareAddressBalanceSearchRequest(ctx _context.Context, addressId string) ApiPrepareAddressBalanceSearchRequestRequest {
	return ApiPrepareAddressBalanceSearchRequestRequest{
		ApiService: a,
		ctx: ctx,
		addressId: addressId,
	}
}

// Execute executes the request
//  @return PrepareSearchResponseSchema
func (a *AddressSearchApiService) PrepareAddressBalanceSearchRequestExecute(r ApiPrepareAddressBalanceSearchRequestRequest) (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  PrepareSearchResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "AddressSearchApiService.PrepareAddressBalanceSearchRequest")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/preparation/search/address/balance/{addressId}"
	localVarPath = strings.Replace(localVarPath, "{"+"addressId"+"}", _neturl.PathEscape(parameterToString(r.addressId, "")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 4096 {
		return localVarReturnValue, nil, reportError("authorization must have less than 4096 elements")
	}
	if strlen(r.addressId) < 0 {
		return localVarReturnValue, nil, reportError("addressId must have at least 0 elements")
	}
	if strlen(r.addressId) > 100 {
		return localVarReturnValue, nil, reportError("addressId must have less than 100 elements")
	}
	if r.prepareSearchSchema == nil {
		return localVarReturnValue, nil, reportError("prepareSearchSchema is required and must be specified")
	}

	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{"application/json"}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	localVarHeaderParams["Authorization"] = parameterToString(*r.authorization, "")
	// body params
	localVarPostBody = r.prepareSearchSchema
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, localVarFormFileName, localVarFileName, localVarFileBytes)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := _ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = _ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 401 {
			var v ErrorList
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 500 {
			var v InternalServerErrorSchema
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiPrepareAddressSequenceSearchRequestRequest struct {
	ctx _context.Context
	ApiService *AddressSearchApiService
	authorization *string
	addressId string
	prepareSearchSchema *PrepareSearchSchema
}

func (r ApiPrepareAddressSequenceSearchRequestRequest) Authorization(authorization string) ApiPrepareAddressSequenceSearchRequestRequest {
	r.authorization = &authorization
	return r
}
func (r ApiPrepareAddressSequenceSearchRequestRequest) PrepareSearchSchema(prepareSearchSchema PrepareSearchSchema) ApiPrepareAddressSequenceSearchRequestRequest {
	r.prepareSearchSchema = &prepareSearchSchema
	return r
}

func (r ApiPrepareAddressSequenceSearchRequestRequest) Execute() (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.PrepareAddressSequenceSearchRequestExecute(r)
}

/*
PrepareAddressSequenceSearchRequest Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param addressId
 @return ApiPrepareAddressSequenceSearchRequestRequest
*/
func (a *AddressSearchApiService) PrepareAddressSequenceSearchRequest(ctx _context.Context, addressId string) ApiPrepareAddressSequenceSearchRequestRequest {
	return ApiPrepareAddressSequenceSearchRequestRequest{
		ApiService: a,
		ctx: ctx,
		addressId: addressId,
	}
}

// Execute executes the request
//  @return PrepareSearchResponseSchema
func (a *AddressSearchApiService) PrepareAddressSequenceSearchRequestExecute(r ApiPrepareAddressSequenceSearchRequestRequest) (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  PrepareSearchResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "AddressSearchApiService.PrepareAddressSequenceSearchRequest")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/preparation/search/address/sequence/{addressId}"
	localVarPath = strings.Replace(localVarPath, "{"+"addressId"+"}", _neturl.PathEscape(parameterToString(r.addressId, "")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 4096 {
		return localVarReturnValue, nil, reportError("authorization must have less than 4096 elements")
	}
	if strlen(r.addressId) < 0 {
		return localVarReturnValue, nil, reportError("addressId must have at least 0 elements")
	}
	if strlen(r.addressId) > 100 {
		return localVarReturnValue, nil, reportError("addressId must have less than 100 elements")
	}
	if r.prepareSearchSchema == nil {
		return localVarReturnValue, nil, reportError("prepareSearchSchema is required and must be specified")
	}

	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{"application/json"}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	localVarHeaderParams["Authorization"] = parameterToString(*r.authorization, "")
	// body params
	localVarPostBody = r.prepareSearchSchema
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, localVarFormFileName, localVarFileName, localVarFileBytes)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := _ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = _ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 401 {
			var v ErrorList
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
		if localVarHTTPResponse.StatusCode == 500 {
			var v InternalServerErrorSchema
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}
