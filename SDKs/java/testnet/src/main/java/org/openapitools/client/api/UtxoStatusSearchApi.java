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
import org.openapitools.client.model.ExecuteSearchUTXOResponseSchema;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PrepareSearchResponseSchema;
import org.openapitools.client.model.PrepareSearchSchema;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class UtxoStatusSearchApi {
    private ApiClient localVarApiClient;

    public UtxoStatusSearchApi() {
        this(Configuration.getDefaultApiClient());
    }

    public UtxoStatusSearchApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for executeUTXOPreparedSearchRequest
     * @param authorization  (required)
     * @param requestId  (required)
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
    public okhttp3.Call executeUTXOPreparedSearchRequestCall(String authorization, String requestId, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/v2/execution/search/utxo";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        if (requestId != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("requestId", requestId));
        }

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
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call executeUTXOPreparedSearchRequestValidateBeforeCall(String authorization, String requestId, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling executeUTXOPreparedSearchRequest(Async)");
        }
        
        // verify the required parameter 'requestId' is set
        if (requestId == null) {
            throw new ApiException("Missing the required parameter 'requestId' when calling executeUTXOPreparedSearchRequest(Async)");
        }
        

        okhttp3.Call localVarCall = executeUTXOPreparedSearchRequestCall(authorization, requestId, _callback);
        return localVarCall;

    }

    /**
     * Execute a search for UTXO state on a DLT
     * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
     * @param authorization  (required)
     * @param requestId  (required)
     * @return ExecuteSearchUTXOResponseSchema
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
    public ExecuteSearchUTXOResponseSchema executeUTXOPreparedSearchRequest(String authorization, String requestId) throws ApiException {
        ApiResponse<ExecuteSearchUTXOResponseSchema> localVarResp = executeUTXOPreparedSearchRequestWithHttpInfo(authorization, requestId);
        return localVarResp.getData();
    }

    /**
     * Execute a search for UTXO state on a DLT
     * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
     * @param authorization  (required)
     * @param requestId  (required)
     * @return ApiResponse&lt;ExecuteSearchUTXOResponseSchema&gt;
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
    public ApiResponse<ExecuteSearchUTXOResponseSchema> executeUTXOPreparedSearchRequestWithHttpInfo(String authorization, String requestId) throws ApiException {
        okhttp3.Call localVarCall = executeUTXOPreparedSearchRequestValidateBeforeCall(authorization, requestId, null);
        Type localVarReturnType = new TypeToken<ExecuteSearchUTXOResponseSchema>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Execute a search for UTXO state on a DLT (asynchronously)
     * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
     * @param authorization  (required)
     * @param requestId  (required)
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
    public okhttp3.Call executeUTXOPreparedSearchRequestAsync(String authorization, String requestId, final ApiCallback<ExecuteSearchUTXOResponseSchema> _callback) throws ApiException {

        okhttp3.Call localVarCall = executeUTXOPreparedSearchRequestValidateBeforeCall(authorization, requestId, _callback);
        Type localVarReturnType = new TypeToken<ExecuteSearchUTXOResponseSchema>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for prepareSearchUTXOState
     * @param authorization  (required)
     * @param utxoId  (required)
     * @param prepareSearchSchema  (required)
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
    public okhttp3.Call prepareSearchUTXOStateCall(String authorization, String utxoId, PrepareSearchSchema prepareSearchSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = prepareSearchSchema;

        // create path and map variables
        String localVarPath = "/v2/preparation/search/utxo/{utxoId}"
            .replaceAll("\\{" + "utxoId" + "\\}", localVarApiClient.escapeString(utxoId.toString()));

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
    private okhttp3.Call prepareSearchUTXOStateValidateBeforeCall(String authorization, String utxoId, PrepareSearchSchema prepareSearchSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling prepareSearchUTXOState(Async)");
        }
        
        // verify the required parameter 'utxoId' is set
        if (utxoId == null) {
            throw new ApiException("Missing the required parameter 'utxoId' when calling prepareSearchUTXOState(Async)");
        }
        
        // verify the required parameter 'prepareSearchSchema' is set
        if (prepareSearchSchema == null) {
            throw new ApiException("Missing the required parameter 'prepareSearchSchema' when calling prepareSearchUTXOState(Async)");
        }
        

        okhttp3.Call localVarCall = prepareSearchUTXOStateCall(authorization, utxoId, prepareSearchSchema, _callback);
        return localVarCall;

    }

    /**
     * Prepare Search for a UTXO State.
     * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
     * @param authorization  (required)
     * @param utxoId  (required)
     * @param prepareSearchSchema  (required)
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
    public PrepareSearchResponseSchema prepareSearchUTXOState(String authorization, String utxoId, PrepareSearchSchema prepareSearchSchema) throws ApiException {
        ApiResponse<PrepareSearchResponseSchema> localVarResp = prepareSearchUTXOStateWithHttpInfo(authorization, utxoId, prepareSearchSchema);
        return localVarResp.getData();
    }

    /**
     * Prepare Search for a UTXO State.
     * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
     * @param authorization  (required)
     * @param utxoId  (required)
     * @param prepareSearchSchema  (required)
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
    public ApiResponse<PrepareSearchResponseSchema> prepareSearchUTXOStateWithHttpInfo(String authorization, String utxoId, PrepareSearchSchema prepareSearchSchema) throws ApiException {
        okhttp3.Call localVarCall = prepareSearchUTXOStateValidateBeforeCall(authorization, utxoId, prepareSearchSchema, null);
        Type localVarReturnType = new TypeToken<PrepareSearchResponseSchema>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Prepare Search for a UTXO State. (asynchronously)
     * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
     * @param authorization  (required)
     * @param utxoId  (required)
     * @param prepareSearchSchema  (required)
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
    public okhttp3.Call prepareSearchUTXOStateAsync(String authorization, String utxoId, PrepareSearchSchema prepareSearchSchema, final ApiCallback<PrepareSearchResponseSchema> _callback) throws ApiException {

        okhttp3.Call localVarCall = prepareSearchUTXOStateValidateBeforeCall(authorization, utxoId, prepareSearchSchema, _callback);
        Type localVarReturnType = new TypeToken<PrepareSearchResponseSchema>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}