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
)

// Linger please
var (
	_ _context.Context
)

// SmartContractSearchApiService SmartContractSearchApi service
type SmartContractSearchApiService service

type ApiExecutePreparedSearchRequestRequest struct {
	ctx _context.Context
	ApiService *SmartContractSearchApiService
	authorization *string
	requestId *string
}

func (r ApiExecutePreparedSearchRequestRequest) Authorization(authorization string) ApiExecutePreparedSearchRequestRequest {
	r.authorization = &authorization
	return r
}
func (r ApiExecutePreparedSearchRequestRequest) RequestId(requestId string) ApiExecutePreparedSearchRequestRequest {
	r.requestId = &requestId
	return r
}

func (r ApiExecutePreparedSearchRequestRequest) Execute() (ExecuteSmartContractReadResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.ExecutePreparedSearchRequestExecute(r)
}

/*
ExecutePreparedSearchRequest Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiExecutePreparedSearchRequestRequest
*/
func (a *SmartContractSearchApiService) ExecutePreparedSearchRequest(ctx _context.Context) ApiExecutePreparedSearchRequestRequest {
	return ApiExecutePreparedSearchRequestRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return ExecuteSmartContractReadResponseSchema
func (a *SmartContractSearchApiService) ExecutePreparedSearchRequestExecute(r ApiExecutePreparedSearchRequestRequest) (ExecuteSmartContractReadResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  ExecuteSmartContractReadResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "SmartContractSearchApiService.ExecutePreparedSearchRequest")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/execution/search/smartcontract"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 1024 {
		return localVarReturnValue, nil, reportError("authorization must have less than 1024 elements")
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

type ApiPrepareSmartContractQueryRequestRequest struct {
	ctx _context.Context
	ApiService *SmartContractSearchApiService
	authorization *string
	prepareSearchSmartContractRequestSchema *PrepareSearchSmartContractRequestSchema
}

func (r ApiPrepareSmartContractQueryRequestRequest) Authorization(authorization string) ApiPrepareSmartContractQueryRequestRequest {
	r.authorization = &authorization
	return r
}
func (r ApiPrepareSmartContractQueryRequestRequest) PrepareSearchSmartContractRequestSchema(prepareSearchSmartContractRequestSchema PrepareSearchSmartContractRequestSchema) ApiPrepareSmartContractQueryRequestRequest {
	r.prepareSearchSmartContractRequestSchema = &prepareSearchSmartContractRequestSchema
	return r
}

func (r ApiPrepareSmartContractQueryRequestRequest) Execute() (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.PrepareSmartContractQueryRequestExecute(r)
}

/*
PrepareSmartContractQueryRequest Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiPrepareSmartContractQueryRequestRequest
*/
func (a *SmartContractSearchApiService) PrepareSmartContractQueryRequest(ctx _context.Context) ApiPrepareSmartContractQueryRequestRequest {
	return ApiPrepareSmartContractQueryRequestRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return PrepareSearchResponseSchema
func (a *SmartContractSearchApiService) PrepareSmartContractQueryRequestExecute(r ApiPrepareSmartContractQueryRequestRequest) (PrepareSearchResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  PrepareSearchResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "SmartContractSearchApiService.PrepareSmartContractQueryRequest")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/preparation/search/smartcontract"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 1024 {
		return localVarReturnValue, nil, reportError("authorization must have less than 1024 elements")
	}
	if r.prepareSearchSmartContractRequestSchema == nil {
		return localVarReturnValue, nil, reportError("prepareSearchSmartContractRequestSchema is required and must be specified")
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
	localVarPostBody = r.prepareSearchSmartContractRequestSchema
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
