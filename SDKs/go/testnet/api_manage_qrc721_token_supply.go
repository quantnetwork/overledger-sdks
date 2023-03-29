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

// ManageQRC721TokenSupplyApiService ManageQRC721TokenSupplyApi service
type ManageQRC721TokenSupplyApiService service

type ApiPrepareSupplyRequestRequest struct {
	ctx _context.Context
	ApiService *ManageQRC721TokenSupplyApiService
	authorization *string
	prepareMintTransactionRequestSchemaQrc721 *PrepareMintTransactionRequestSchemaQrc721
}

func (r ApiPrepareSupplyRequestRequest) Authorization(authorization string) ApiPrepareSupplyRequestRequest {
	r.authorization = &authorization
	return r
}
func (r ApiPrepareSupplyRequestRequest) PrepareMintTransactionRequestSchemaQrc721(prepareMintTransactionRequestSchemaQrc721 PrepareMintTransactionRequestSchemaQrc721) ApiPrepareSupplyRequestRequest {
	r.prepareMintTransactionRequestSchemaQrc721 = &prepareMintTransactionRequestSchemaQrc721
	return r
}

func (r ApiPrepareSupplyRequestRequest) Execute() (PrepareTransactionResponse, *_nethttp.Response, error) {
	return r.ApiService.PrepareSupplyRequestExecute(r)
}

/*
PrepareSupplyRequest Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and "Burn Tokens" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

 @param ctx _context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiPrepareSupplyRequestRequest
*/
func (a *ManageQRC721TokenSupplyApiService) PrepareSupplyRequest(ctx _context.Context) ApiPrepareSupplyRequestRequest {
	return ApiPrepareSupplyRequestRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return PrepareTransactionResponse
func (a *ManageQRC721TokenSupplyApiService) PrepareSupplyRequestExecute(r ApiPrepareSupplyRequestRequest) (PrepareTransactionResponse, *_nethttp.Response, error) {
	var (
		localVarHTTPMethod   = _nethttp.MethodPost
		localVarPostBody     interface{}
		localVarFormFileName string
		localVarFileName     string
		localVarFileBytes    []byte
		localVarReturnValue  PrepareTransactionResponse
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "ManageQRC721TokenSupplyApiService.PrepareSupplyRequest")
	if err != nil {
		return localVarReturnValue, nil, GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v2/tokenise/preparation/transaction/qrc721/supply"

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
	if r.prepareMintTransactionRequestSchemaQrc721 == nil {
		return localVarReturnValue, nil, reportError("prepareMintTransactionRequestSchemaQrc721 is required and must be specified")
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
	localVarPostBody = r.prepareMintTransactionRequestSchemaQrc721
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
