/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiCallback;
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.ApiResponse;
import org.openapitools.client.Configuration;
import org.openapitools.client.Pair;
import org.openapitools.client.ProgressRequestBody;
import org.openapitools.client.ProgressResponseBody;

import com.google.gson.reflect.TypeToken;

import java.io.IOException;


import org.openapitools.client.model.ErrorDetails;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ExecuteTransactionRequest;
import org.openapitools.client.model.ExecuteTransactionResponse;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PrepareNativeTransactionRequestSchema;
import org.openapitools.client.model.PreparePaymentTransactionRequestSchema;
import org.openapitools.client.model.PrepareSearchResponseSchema;
import org.openapitools.client.model.PrepareTransactionResponse;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CreateTransactionApi {
    private ApiClient localVarApiClient;

    public CreateTransactionApi() {
        this(Configuration.getDefaultApiClient());
    }

    public CreateTransactionApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for executePreparedRequestNativeTransaction
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call executePreparedRequestNativeTransactionCall(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = executeTransactionRequest;

        // create path and map variables
        String localVarPath = "/v2/execution/nativetransaction";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (authorization != null) {
            localVarHeaderParams.put("Authorization", localVarApiClient.parameterToString(authorization));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            "application/json"
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call executePreparedRequestNativeTransactionValidateBeforeCall(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling executePreparedRequestNativeTransaction(Async)");
        }
        
        // verify the required parameter 'executeTransactionRequest' is set
        if (executeTransactionRequest == null) {
            throw new ApiException("Missing the required parameter 'executeTransactionRequest' when calling executePreparedRequestNativeTransaction(Async)");
        }
        

        okhttp3.Call localVarCall = executePreparedRequestNativeTransactionCall(authorization, executeTransactionRequest, _callback);
        return localVarCall;

    }

    /**
     * Execute a native transaction on the DLT
     * Takes a request ID and submits a signed native transaction to the requested DLT
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @return ExecuteTransactionResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ExecuteTransactionResponse executePreparedRequestNativeTransaction(String authorization, ExecuteTransactionRequest executeTransactionRequest) throws ApiException {
        ApiResponse<ExecuteTransactionResponse> localVarResp = executePreparedRequestNativeTransactionWithHttpInfo(authorization, executeTransactionRequest);
        return localVarResp.getData();
    }

    /**
     * Execute a native transaction on the DLT
     * Takes a request ID and submits a signed native transaction to the requested DLT
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @return ApiResponse&lt;ExecuteTransactionResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<ExecuteTransactionResponse> executePreparedRequestNativeTransactionWithHttpInfo(String authorization, ExecuteTransactionRequest executeTransactionRequest) throws ApiException {
        okhttp3.Call localVarCall = executePreparedRequestNativeTransactionValidateBeforeCall(authorization, executeTransactionRequest, null);
        Type localVarReturnType = new TypeToken<ExecuteTransactionResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Execute a native transaction on the DLT (asynchronously)
     * Takes a request ID and submits a signed native transaction to the requested DLT
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call executePreparedRequestNativeTransactionAsync(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback<ExecuteTransactionResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = executePreparedRequestNativeTransactionValidateBeforeCall(authorization, executeTransactionRequest, _callback);
        Type localVarReturnType = new TypeToken<ExecuteTransactionResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for executePreparedRequestTransaction
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call executePreparedRequestTransactionCall(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = executeTransactionRequest;

        // create path and map variables
        String localVarPath = "/v2/execution/transaction";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (authorization != null) {
            localVarHeaderParams.put("Authorization", localVarApiClient.parameterToString(authorization));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            "application/json"
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call executePreparedRequestTransactionValidateBeforeCall(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling executePreparedRequestTransaction(Async)");
        }
        
        // verify the required parameter 'executeTransactionRequest' is set
        if (executeTransactionRequest == null) {
            throw new ApiException("Missing the required parameter 'executeTransactionRequest' when calling executePreparedRequestTransaction(Async)");
        }
        

        okhttp3.Call localVarCall = executePreparedRequestTransactionCall(authorization, executeTransactionRequest, _callback);
        return localVarCall;

    }

    /**
     * Execute a transaction on the DLT
     * Takes a request ID and submits a signed transaction to the requested DLT.
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @return ExecuteTransactionResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ExecuteTransactionResponse executePreparedRequestTransaction(String authorization, ExecuteTransactionRequest executeTransactionRequest) throws ApiException {
        ApiResponse<ExecuteTransactionResponse> localVarResp = executePreparedRequestTransactionWithHttpInfo(authorization, executeTransactionRequest);
        return localVarResp.getData();
    }

    /**
     * Execute a transaction on the DLT
     * Takes a request ID and submits a signed transaction to the requested DLT.
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @return ApiResponse&lt;ExecuteTransactionResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<ExecuteTransactionResponse> executePreparedRequestTransactionWithHttpInfo(String authorization, ExecuteTransactionRequest executeTransactionRequest) throws ApiException {
        okhttp3.Call localVarCall = executePreparedRequestTransactionValidateBeforeCall(authorization, executeTransactionRequest, null);
        Type localVarReturnType = new TypeToken<ExecuteTransactionResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Execute a transaction on the DLT (asynchronously)
     * Takes a request ID and submits a signed transaction to the requested DLT.
     * @param authorization  (required)
     * @param executeTransactionRequest  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call executePreparedRequestTransactionAsync(String authorization, ExecuteTransactionRequest executeTransactionRequest, final ApiCallback<ExecuteTransactionResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = executePreparedRequestTransactionValidateBeforeCall(authorization, executeTransactionRequest, _callback);
        Type localVarReturnType = new TypeToken<ExecuteTransactionResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for prepareNativeTransaction
     * @param authorization  (required)
     * @param prepareNativeTransactionRequestSchema  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call prepareNativeTransactionCall(String authorization, PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = prepareNativeTransactionRequestSchema;

        // create path and map variables
        String localVarPath = "/v2/preparation/nativetransaction";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (authorization != null) {
            localVarHeaderParams.put("Authorization", localVarApiClient.parameterToString(authorization));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            "application/json"
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call prepareNativeTransactionValidateBeforeCall(String authorization, PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling prepareNativeTransaction(Async)");
        }
        
        // verify the required parameter 'prepareNativeTransactionRequestSchema' is set
        if (prepareNativeTransactionRequestSchema == null) {
            throw new ApiException("Missing the required parameter 'prepareNativeTransactionRequestSchema' when calling prepareNativeTransaction(Async)");
        }
        

        okhttp3.Call localVarCall = prepareNativeTransactionCall(authorization, prepareNativeTransactionRequestSchema, _callback);
        return localVarCall;

    }

    /**
     * Prepare a DLT native transaction
     * Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
     * @param authorization  (required)
     * @param prepareNativeTransactionRequestSchema  (required)
     * @return PrepareSearchResponseSchema
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public PrepareSearchResponseSchema prepareNativeTransaction(String authorization, PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema) throws ApiException {
        ApiResponse<PrepareSearchResponseSchema> localVarResp = prepareNativeTransactionWithHttpInfo(authorization, prepareNativeTransactionRequestSchema);
        return localVarResp.getData();
    }

    /**
     * Prepare a DLT native transaction
     * Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
     * @param authorization  (required)
     * @param prepareNativeTransactionRequestSchema  (required)
     * @return ApiResponse&lt;PrepareSearchResponseSchema&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<PrepareSearchResponseSchema> prepareNativeTransactionWithHttpInfo(String authorization, PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema) throws ApiException {
        okhttp3.Call localVarCall = prepareNativeTransactionValidateBeforeCall(authorization, prepareNativeTransactionRequestSchema, null);
        Type localVarReturnType = new TypeToken<PrepareSearchResponseSchema>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Prepare a DLT native transaction (asynchronously)
     * Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
     * @param authorization  (required)
     * @param prepareNativeTransactionRequestSchema  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call prepareNativeTransactionAsync(String authorization, PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema, final ApiCallback<PrepareSearchResponseSchema> _callback) throws ApiException {

        okhttp3.Call localVarCall = prepareNativeTransactionValidateBeforeCall(authorization, prepareNativeTransactionRequestSchema, _callback);
        Type localVarReturnType = new TypeToken<PrepareSearchResponseSchema>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for prepareTransactionRequest
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call prepareTransactionRequestCall(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = preparePaymentTransactionRequestSchema;

        // create path and map variables
        String localVarPath = "/v2/preparation/transaction";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (authorization != null) {
            localVarHeaderParams.put("Authorization", localVarApiClient.parameterToString(authorization));
        }

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            "application/json"
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call prepareTransactionRequestValidateBeforeCall(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling prepareTransactionRequest(Async)");
        }
        
        // verify the required parameter 'preparePaymentTransactionRequestSchema' is set
        if (preparePaymentTransactionRequestSchema == null) {
            throw new ApiException("Missing the required parameter 'preparePaymentTransactionRequestSchema' when calling prepareTransactionRequest(Async)");
        }
        

        okhttp3.Call localVarCall = prepareTransactionRequestCall(authorization, preparePaymentTransactionRequestSchema, _callback);
        return localVarCall;

    }

    /**
     * Prepare a DLT transaction for signing
     * Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @return PrepareTransactionResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public PrepareTransactionResponse prepareTransactionRequest(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema) throws ApiException {
        ApiResponse<PrepareTransactionResponse> localVarResp = prepareTransactionRequestWithHttpInfo(authorization, preparePaymentTransactionRequestSchema);
        return localVarResp.getData();
    }

    /**
     * Prepare a DLT transaction for signing
     * Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @return ApiResponse&lt;PrepareTransactionResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<PrepareTransactionResponse> prepareTransactionRequestWithHttpInfo(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema) throws ApiException {
        okhttp3.Call localVarCall = prepareTransactionRequestValidateBeforeCall(authorization, preparePaymentTransactionRequestSchema, null);
        Type localVarReturnType = new TypeToken<PrepareTransactionResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Prepare a DLT transaction for signing (asynchronously)
     * Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call prepareTransactionRequestAsync(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback<PrepareTransactionResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = prepareTransactionRequestValidateBeforeCall(authorization, preparePaymentTransactionRequestSchema, _callback);
        Type localVarReturnType = new TypeToken<PrepareTransactionResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
