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
import org.openapitools.client.model.PrepareRequest;
import org.openapitools.client.model.TokenReadQRC721Response;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class RetrieveContractOwnerInformationOfAQrcTokenApi {
    private ApiClient localVarApiClient;

    public RetrieveContractOwnerInformationOfAQrcTokenApi() {
        this(Configuration.getDefaultApiClient());
    }

    public RetrieveContractOwnerInformationOfAQrcTokenApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for readQRCSmartContractOwner
     * @param authorization  (required)
     * @param flowType  (required)
     * @param prepareRequest  (required)
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
    public okhttp3.Call readQRCSmartContractOwnerCall(String authorization, String flowType, PrepareRequest prepareRequest, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = prepareRequest;

        // create path and map variables
        String localVarPath = "/v2/tokenise/tokens/{flowType}/contract-owner"
            .replaceAll("\\{" + "flowType" + "\\}", localVarApiClient.escapeString(flowType.toString()));

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
    private okhttp3.Call readQRCSmartContractOwnerValidateBeforeCall(String authorization, String flowType, PrepareRequest prepareRequest, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling readQRCSmartContractOwner(Async)");
        }
        
        // verify the required parameter 'flowType' is set
        if (flowType == null) {
            throw new ApiException("Missing the required parameter 'flowType' when calling readQRCSmartContractOwner(Async)");
        }
        
        // verify the required parameter 'prepareRequest' is set
        if (prepareRequest == null) {
            throw new ApiException("Missing the required parameter 'prepareRequest' when calling readQRCSmartContractOwner(Async)");
        }
        

        okhttp3.Call localVarCall = readQRCSmartContractOwnerCall(authorization, flowType, prepareRequest, _callback);
        return localVarCall;

    }

    /**
     * Retrieve which account has contract owner permissions for a QRC token
     * Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
     * @param authorization  (required)
     * @param flowType  (required)
     * @param prepareRequest  (required)
     * @return TokenReadQRC721Response
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
    public TokenReadQRC721Response readQRCSmartContractOwner(String authorization, String flowType, PrepareRequest prepareRequest) throws ApiException {
        ApiResponse<TokenReadQRC721Response> localVarResp = readQRCSmartContractOwnerWithHttpInfo(authorization, flowType, prepareRequest);
        return localVarResp.getData();
    }

    /**
     * Retrieve which account has contract owner permissions for a QRC token
     * Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
     * @param authorization  (required)
     * @param flowType  (required)
     * @param prepareRequest  (required)
     * @return ApiResponse&lt;TokenReadQRC721Response&gt;
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
    public ApiResponse<TokenReadQRC721Response> readQRCSmartContractOwnerWithHttpInfo(String authorization, String flowType, PrepareRequest prepareRequest) throws ApiException {
        okhttp3.Call localVarCall = readQRCSmartContractOwnerValidateBeforeCall(authorization, flowType, prepareRequest, null);
        Type localVarReturnType = new TypeToken<TokenReadQRC721Response>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Retrieve which account has contract owner permissions for a QRC token (asynchronously)
     * Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
     * @param authorization  (required)
     * @param flowType  (required)
     * @param prepareRequest  (required)
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
    public okhttp3.Call readQRCSmartContractOwnerAsync(String authorization, String flowType, PrepareRequest prepareRequest, final ApiCallback<TokenReadQRC721Response> _callback) throws ApiException {

        okhttp3.Call localVarCall = readQRCSmartContractOwnerValidateBeforeCall(authorization, flowType, prepareRequest, _callback);
        Type localVarReturnType = new TypeToken<TokenReadQRC721Response>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
