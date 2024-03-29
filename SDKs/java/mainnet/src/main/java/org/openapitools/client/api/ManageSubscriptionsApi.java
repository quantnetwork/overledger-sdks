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
import org.openapitools.client.model.ListWebhookSubscriptionResponseSchema;
import org.openapitools.client.model.UpdateWebhookSubscriptionRequestSchema;
import org.openapitools.client.model.WebhookSubscriptionStatusUpdateResponse;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class ManageSubscriptionsApi {
    private ApiClient localVarApiClient;

    public ManageSubscriptionsApi() {
        this(Configuration.getDefaultApiClient());
    }

    public ManageSubscriptionsApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for deleteSubscription
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call deleteSubscriptionCall(String authorization, String subscriptionId, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/v2/webhook/subscription/{subscriptionId}"
            .replaceAll("\\{" + "subscriptionId" + "\\}", localVarApiClient.escapeString(subscriptionId.toString()));

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
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "DELETE", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call deleteSubscriptionValidateBeforeCall(String authorization, String subscriptionId, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling deleteSubscription(Async)");
        }
        
        // verify the required parameter 'subscriptionId' is set
        if (subscriptionId == null) {
            throw new ApiException("Missing the required parameter 'subscriptionId' when calling deleteSubscription(Async)");
        }
        

        okhttp3.Call localVarCall = deleteSubscriptionCall(authorization, subscriptionId, _callback);
        return localVarCall;

    }

    /**
     * Remove a subscription created by your application
     * Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @return WebhookSubscriptionStatusUpdateResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public WebhookSubscriptionStatusUpdateResponse deleteSubscription(String authorization, String subscriptionId) throws ApiException {
        ApiResponse<WebhookSubscriptionStatusUpdateResponse> localVarResp = deleteSubscriptionWithHttpInfo(authorization, subscriptionId);
        return localVarResp.getData();
    }

    /**
     * Remove a subscription created by your application
     * Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @return ApiResponse&lt;WebhookSubscriptionStatusUpdateResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<WebhookSubscriptionStatusUpdateResponse> deleteSubscriptionWithHttpInfo(String authorization, String subscriptionId) throws ApiException {
        okhttp3.Call localVarCall = deleteSubscriptionValidateBeforeCall(authorization, subscriptionId, null);
        Type localVarReturnType = new TypeToken<WebhookSubscriptionStatusUpdateResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Remove a subscription created by your application (asynchronously)
     * Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call deleteSubscriptionAsync(String authorization, String subscriptionId, final ApiCallback<WebhookSubscriptionStatusUpdateResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = deleteSubscriptionValidateBeforeCall(authorization, subscriptionId, _callback);
        Type localVarReturnType = new TypeToken<WebhookSubscriptionStatusUpdateResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for listSubscriptions
     * @param authorization  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 204 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call listSubscriptionsCall(String authorization, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/v2/webhook/subscriptions";

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
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] { "OAuth2_Security_Scheme" };
        return localVarApiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call listSubscriptionsValidateBeforeCall(String authorization, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling listSubscriptions(Async)");
        }
        

        okhttp3.Call localVarCall = listSubscriptionsCall(authorization, _callback);
        return localVarCall;

    }

    /**
     * Retrieve a list of subscriptions created by your application
     * Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
     * @param authorization  (required)
     * @return List&lt;ListWebhookSubscriptionResponseSchema&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 204 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public List<ListWebhookSubscriptionResponseSchema> listSubscriptions(String authorization) throws ApiException {
        ApiResponse<List<ListWebhookSubscriptionResponseSchema>> localVarResp = listSubscriptionsWithHttpInfo(authorization);
        return localVarResp.getData();
    }

    /**
     * Retrieve a list of subscriptions created by your application
     * Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
     * @param authorization  (required)
     * @return ApiResponse&lt;List&lt;ListWebhookSubscriptionResponseSchema&gt;&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 204 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<List<ListWebhookSubscriptionResponseSchema>> listSubscriptionsWithHttpInfo(String authorization) throws ApiException {
        okhttp3.Call localVarCall = listSubscriptionsValidateBeforeCall(authorization, null);
        Type localVarReturnType = new TypeToken<List<ListWebhookSubscriptionResponseSchema>>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Retrieve a list of subscriptions created by your application (asynchronously)
     * Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
     * @param authorization  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 204 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call listSubscriptionsAsync(String authorization, final ApiCallback<List<ListWebhookSubscriptionResponseSchema>> _callback) throws ApiException {

        okhttp3.Call localVarCall = listSubscriptionsValidateBeforeCall(authorization, _callback);
        Type localVarReturnType = new TypeToken<List<ListWebhookSubscriptionResponseSchema>>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for updateSubscription
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param updateWebhookSubscriptionRequestSchema  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 405 </td><td> Method is not allowed </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call updateSubscriptionCall(String authorization, String subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = updateWebhookSubscriptionRequestSchema;

        // create path and map variables
        String localVarPath = "/v2/webhook/subscription/{subscriptionId}"
            .replaceAll("\\{" + "subscriptionId" + "\\}", localVarApiClient.escapeString(subscriptionId.toString()));

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
        return localVarApiClient.buildCall(localVarPath, "PATCH", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call updateSubscriptionValidateBeforeCall(String authorization, String subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'authorization' is set
        if (authorization == null) {
            throw new ApiException("Missing the required parameter 'authorization' when calling updateSubscription(Async)");
        }
        
        // verify the required parameter 'subscriptionId' is set
        if (subscriptionId == null) {
            throw new ApiException("Missing the required parameter 'subscriptionId' when calling updateSubscription(Async)");
        }
        
        // verify the required parameter 'updateWebhookSubscriptionRequestSchema' is set
        if (updateWebhookSubscriptionRequestSchema == null) {
            throw new ApiException("Missing the required parameter 'updateWebhookSubscriptionRequestSchema' when calling updateSubscription(Async)");
        }
        

        okhttp3.Call localVarCall = updateSubscriptionCall(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema, _callback);
        return localVarCall;

    }

    /**
     * Update a specific subscription created by your application
     * Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param updateWebhookSubscriptionRequestSchema  (required)
     * @return WebhookSubscriptionStatusUpdateResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 405 </td><td> Method is not allowed </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public WebhookSubscriptionStatusUpdateResponse updateSubscription(String authorization, String subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema) throws ApiException {
        ApiResponse<WebhookSubscriptionStatusUpdateResponse> localVarResp = updateSubscriptionWithHttpInfo(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema);
        return localVarResp.getData();
    }

    /**
     * Update a specific subscription created by your application
     * Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param updateWebhookSubscriptionRequestSchema  (required)
     * @return ApiResponse&lt;WebhookSubscriptionStatusUpdateResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 405 </td><td> Method is not allowed </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<WebhookSubscriptionStatusUpdateResponse> updateSubscriptionWithHttpInfo(String authorization, String subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema) throws ApiException {
        okhttp3.Call localVarCall = updateSubscriptionValidateBeforeCall(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema, null);
        Type localVarReturnType = new TypeToken<WebhookSubscriptionStatusUpdateResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Update a specific subscription created by your application (asynchronously)
     * Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
     * @param authorization  (required)
     * @param subscriptionId  (required)
     * @param updateWebhookSubscriptionRequestSchema  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> All good! </td><td>  -  </td></tr>
        <tr><td> 401 </td><td> Unauthorised </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> You do not currently have any subscriptions </td><td>  -  </td></tr>
        <tr><td> 405 </td><td> Method is not allowed </td><td>  -  </td></tr>
        <tr><td> 500 </td><td> Something went wrong on our side </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call updateSubscriptionAsync(String authorization, String subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema, final ApiCallback<WebhookSubscriptionStatusUpdateResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = updateSubscriptionValidateBeforeCall(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema, _callback);
        Type localVarReturnType = new TypeToken<WebhookSubscriptionStatusUpdateResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
