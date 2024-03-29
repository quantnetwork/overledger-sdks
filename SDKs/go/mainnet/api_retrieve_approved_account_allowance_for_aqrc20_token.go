/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

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

// RetrieveApprovedAccountAllowanceForAQRC20TokenApiService RetrieveApprovedAccountAllowanceForAQRC20TokenApi service
type RetrieveApprovedAccountAllowanceForAQRC20TokenApiService service

type ApiReadApprovedDebitAmountRequest struct {
	ctx _context.Context
	ApiService *RetrieveApprovedAccountAllowanceForAQRC20TokenApiService
	authorization *string
	readApprovedAccountAllowanceRequestSchema *ReadApprovedAccountAllowanceRequestSchema
}

func (r ApiReadApprovedDebitAmountRequest) Authorization(authorization string) ApiReadApprovedDebitAmountRequest {
	r.authorization = &authorization
	return r
}
func (r ApiReadApprovedDebitAmountRequest) ReadApprovedAccountAllowanceRequestSchema(readApprovedAccountAllowanceRequestSchema ReadApprovedAccountAllowanceRequestSchema) ApiReadApprovedDebitAmountRequest {
	r.readApprovedAccountAllowanceRequestSchema = &readApprovedAccountAllowanceRequestSchema
	return r
}

func (r ApiReadApprovedDebitAmountRequest) Execute() (TokenReadQRC20Response, *_nethttp.Response, error) {
	return r.ApiService.ReadApprovedDebitAmountExecute(r)
}

/*
ReadApprovedDebitAmount Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiReadApprovedDebitAmountRequest
*/
func (a *RetrieveApprovedAccountAllowanceForAQRC20TokenApiService) ReadApprovedDebitAmount(ctx _context.Context) ApiReadApprovedDebitAmountRequest {
	return ApiReadApprovedDebitAmountRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return TokenReadQRC20Response
func (a *RetrieveApprovedAccountAllowanceForAQRC20TokenApiService) ReadApprovedDebitAmountExecute(r ApiReadApprovedDebitAmountRequest) (TokenReadQRC20Response, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  TokenReadQRC20Response
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "RetrieveApprovedAccountAllowanceForAQRC20TokenApiService.ReadApprovedDebitAmount")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/tokenise/tokens/qrc20/approved-debit-amount"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := _neturl.Values{}
	localVarFormParams := _neturl.Values{}
	if r.authorization == nil {
		return localVarReturnValue, nil, reportError("authorization is required and must be specified")
	}
	if strlen(*r.authorization) < 0 {
		return localVarReturnValue, nil, reportError("authorization must have at least 0 elements")
	}
	if strlen(*r.authorization) > 5010 {
		return localVarReturnValue, nil, reportError("authorization must have less than 5010 elements")
	}
	if r.readApprovedAccountAllowanceRequestSchema == nil {
		return localVarReturnValue, nil, reportError("readApprovedAccountAllowanceRequestSchema is required and must be specified")
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
	localVarPostBody = r.readApprovedAccountAllowanceRequestSchema
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
		if localVarHTTPResponse.StatusCode == 400 {
			var v ErrorResponseMessage
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
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
