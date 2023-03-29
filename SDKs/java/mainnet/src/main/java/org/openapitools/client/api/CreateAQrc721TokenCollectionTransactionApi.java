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
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PreparePaymentTransactionRequestSchema;
import org.openapitools.client.model.PrepareTransactionResponse;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CreateAQrc721TokenCollectionTransactionApi {
    private ApiClient localVarApiClient;

    public CreateAQrc721TokenCollectionTransactionApi() {
        this(Configuration.getDefaultApiClient());
    }

    public CreateAQrc721TokenCollectionTransactionApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for prepareCollectRequest
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
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
    public okhttp3.Call prepareCollectRequestCall(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = preparePaymentTransactionRequestSchema;

        // create path and map variables
        String localVarPath = "/v2/tokenise/preparation/transaction/qrc721/collect";

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
    private okhttp3.Call prepareCollectRequestValidateBeforeCall(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling prepareCollectRequest(Async)");
        }
        
        // verify the required parameter 'preparePaymentTransactionRequestSchema' is set
        if (preparePaymentTransactionRequestSchema == null) {
            throw new ApiException("Missing the required parameter 'preparePaymentTransactionRequestSchema' when calling prepareCollectRequest(Async)");
        }
        

        okhttp3.Call localVarCall = prepareCollectRequestCall(authorization, preparePaymentTransactionRequestSchema, _callback);
        return localVarCall;

    }

    /**
     * Prepare a QRC721 token collection transaction for signing
     * Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @return PrepareTransactionResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public PrepareTransactionResponse prepareCollectRequest(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema) throws ApiException {
        ApiResponse<PrepareTransactionResponse> localVarResp = prepareCollectRequestWithHttpInfo(authorization, preparePaymentTransactionRequestSchema);
        return localVarResp.getData();
    }

    /**
     * Prepare a QRC721 token collection transaction for signing
     * Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
     * @return ApiResponse&lt;PrepareTransactionResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<PrepareTransactionResponse> prepareCollectRequestWithHttpInfo(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema) throws ApiException {
        okhttp3.Call localVarCall = prepareCollectRequestValidateBeforeCall(authorization, preparePaymentTransactionRequestSchema, null);
        Type localVarReturnType = new TypeToken<PrepareTransactionResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Prepare a QRC721 token collection transaction for signing (asynchronously)
     * Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
     * @param authorization  (required)
     * @param preparePaymentTransactionRequestSchema  (required)
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
    public okhttp3.Call prepareCollectRequestAsync(String authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema, final ApiCallback<PrepareTransactionResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = prepareCollectRequestValidateBeforeCall(authorization, preparePaymentTransactionRequestSchema, _callback);
        Type localVarReturnType = new TypeToken<PrepareTransactionResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}