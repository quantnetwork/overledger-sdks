/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
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


import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ErrorResponseMessage;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.ReadApprovedAccountAllowanceRequestSchema;
import org.openapitools.client.model.TokenReadQRC20Response;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class RetrieveApprovedAccountAllowanceForAQrc20TokenApi {
    private ApiClient localVarApiClient;

    public RetrieveApprovedAccountAllowanceForAQrc20TokenApi() {
        this(Configuration.getDefaultApiClient());
    }

    public RetrieveApprovedAccountAllowanceForAQrc20TokenApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for readApprovedDebitAmount
     * @param authorization  (required)
     * @param readApprovedAccountAllowanceRequestSchema  (required)
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
    public okhttp3.Call readApprovedDebitAmountCall(String authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = readApprovedAccountAllowanceRequestSchema;

        // create path and map variables
        String localVarPath = "/v2/tokenise/tokens/qrc20/approved-debit-amount";

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
    private okhttp3.Call readApprovedDebitAmountValidateBeforeCall(String authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling readApprovedDebitAmount(Async)");
        }
        
        // verify the required parameter 'readApprovedAccountAllowanceRequestSchema' is set
        if (readApprovedAccountAllowanceRequestSchema == null) {
            throw new ApiException("Missing the required parameter 'readApprovedAccountAllowanceRequestSchema' when calling readApprovedDebitAmount(Async)");
        }
        

        okhttp3.Call localVarCall = readApprovedDebitAmountCall(authorization, readApprovedAccountAllowanceRequestSchema, _callback);
        return localVarCall;

    }

    /**
     * Retrieve how many QRC20 tokens an address is allowed to debit
     * Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
     * @param authorization  (required)
     * @param readApprovedAccountAllowanceRequestSchema  (required)
     * @return TokenReadQRC20Response
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
    public TokenReadQRC20Response readApprovedDebitAmount(String authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema) throws ApiException {
        ApiResponse<TokenReadQRC20Response> localVarResp = readApprovedDebitAmountWithHttpInfo(authorization, readApprovedAccountAllowanceRequestSchema);
        return localVarResp.getData();
    }

    /**
     * Retrieve how many QRC20 tokens an address is allowed to debit
     * Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
     * @param authorization  (required)
     * @param readApprovedAccountAllowanceRequestSchema  (required)
     * @return ApiResponse&lt;TokenReadQRC20Response&gt;
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
    public ApiResponse<TokenReadQRC20Response> readApprovedDebitAmountWithHttpInfo(String authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema) throws ApiException {
        okhttp3.Call localVarCall = readApprovedDebitAmountValidateBeforeCall(authorization, readApprovedAccountAllowanceRequestSchema, null);
        Type localVarReturnType = new TypeToken<TokenReadQRC20Response>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Retrieve how many QRC20 tokens an address is allowed to debit (asynchronously)
     * Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
     * @param authorization  (required)
     * @param readApprovedAccountAllowanceRequestSchema  (required)
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
    public okhttp3.Call readApprovedDebitAmountAsync(String authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema, final ApiCallback<TokenReadQRC20Response> _callback) throws ApiException {

        okhttp3.Call localVarCall = readApprovedDebitAmountValidateBeforeCall(authorization, readApprovedAccountAllowanceRequestSchema, _callback);
        Type localVarReturnType = new TypeToken<TokenReadQRC20Response>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
