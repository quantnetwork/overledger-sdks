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

// MDappTransactionQueryApiService MDappTransactionQueryApi service
type MDappTransactionQueryApiService service

type ApiGetOvlTransactionByTxIdRequest struct {
	ctx _context.Context
	ApiService *MDappTransactionQueryApiService
	authorization *string
	overledgertransactionid string
}

func (r ApiGetOvlTransactionByTxIdRequest) Authorization(authorization string) ApiGetOvlTransactionByTxIdRequest {
	r.authorization = &authorization
	return r
}

func (r ApiGetOvlTransactionByTxIdRequest) Execute() (OverledgerTransactionResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.GetOvlTransactionByTxIdExecute(r)
}

/*
GetOvlTransactionByTxId Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param overledgertransactionid
 @return ApiGetOvlTransactionByTxIdRequest
*/
func (a *MDappTransactionQueryApiService) GetOvlTransactionByTxId(ctx _context.Context, overledgertransactionid string) ApiGetOvlTransactionByTxIdRequest {
	return ApiGetOvlTransactionByTxIdRequest{
		ApiService: a,
		ctx: ctx,
		overledgertransactionid: overledgertransactionid,
	}
}

// Execute executes the request
//  @return OverledgerTransactionResponseSchema
func (a *MDappTransactionQueryApiService) GetOvlTransactionByTxIdExecute(r ApiGetOvlTransactionByTxIdRequest) (OverledgerTransactionResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodGet
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  OverledgerTransactionResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "MDappTransactionQueryApiService.GetOvlTransactionByTxId")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/mdapptransaction/{overledgertransactionid}"
	localVarPath = strings.Replace(localVarPath, "{"+"overledgertransactionid"+"}", _neturl.PathEscape(parameterToString(r.overledgertransactionid, "")), -1)

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
	if strlen(r.overledgertransactionid) < 0 {
		return localVarReturnValue, nil, reportError("overledgertransactionid must have at least 0 elements")
	}
	if strlen(r.overledgertransactionid) > 36 {
		return localVarReturnValue, nil, reportError("overledgertransactionid must have less than 36 elements")
	}

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

type ApiGetOvlTransactionsByClientIdRequest struct {
	ctx _context.Context
	ApiService *MDappTransactionQueryApiService
	authorization *string
	offset *int32
	length *int32
}

func (r ApiGetOvlTransactionsByClientIdRequest) Authorization(authorization string) ApiGetOvlTransactionsByClientIdRequest {
	r.authorization = &authorization
	return r
}
func (r ApiGetOvlTransactionsByClientIdRequest) Offset(offset int32) ApiGetOvlTransactionsByClientIdRequest {
	r.offset = &offset
	return r
}
func (r ApiGetOvlTransactionsByClientIdRequest) Length(length int32) ApiGetOvlTransactionsByClientIdRequest {
	r.length = &length
	return r
}

func (r ApiGetOvlTransactionsByClientIdRequest) Execute() ([]OverledgerTransactionResponseSchema, *_nethttp.Response, error) {
	return r.ApiService.GetOvlTransactionsByClientIdExecute(r)
}

/*
GetOvlTransactionsByClientId Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiGetOvlTransactionsByClientIdRequest
*/
func (a *MDappTransactionQueryApiService) GetOvlTransactionsByClientId(ctx _context.Context) ApiGetOvlTransactionsByClientIdRequest {
	return ApiGetOvlTransactionsByClientIdRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return []OverledgerTransactionResponseSchema
func (a *MDappTransactionQueryApiService) GetOvlTransactionsByClientIdExecute(r ApiGetOvlTransactionsByClientIdRequest) ([]OverledgerTransactionResponseSchema, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodGet
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  []OverledgerTransactionResponseSchema
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "MDappTransactionQueryApiService.GetOvlTransactionsByClientId")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/mdapptransactions"

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

	if r.offset != nil {
		localVarQueryParams.Add("offset", parameterToString(*r.offset, ""))
	}
	if r.length != nil {
		localVarQueryParams.Add("length", parameterToString(*r.length, ""))
	}
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
