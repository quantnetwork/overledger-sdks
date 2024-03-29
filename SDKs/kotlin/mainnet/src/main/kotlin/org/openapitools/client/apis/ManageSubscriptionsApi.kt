/**
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.apis

import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.InternalServerErrorSchema
import org.openapitools.client.models.ListWebhookSubscriptionResponseSchema
import org.openapitools.client.models.UpdateWebhookSubscriptionRequestSchema
import org.openapitools.client.models.WebhookSubscriptionStatusUpdateResponse

import org.openapitools.client.infrastructure.ApiClient
import org.openapitools.client.infrastructure.ClientException
import org.openapitools.client.infrastructure.ClientError
import org.openapitools.client.infrastructure.ServerException
import org.openapitools.client.infrastructure.ServerError
import org.openapitools.client.infrastructure.MultiValueMap
import org.openapitools.client.infrastructure.RequestConfig
import org.openapitools.client.infrastructure.RequestMethod
import org.openapitools.client.infrastructure.ResponseType
import org.openapitools.client.infrastructure.Success
import org.openapitools.client.infrastructure.toMultiValue

class ManageSubscriptionsApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.overledger.io")
        }
    }

    /**
    * Remove a subscription created by your application
    * Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
    * @param authorization  
    * @param subscriptionId  
    * @return WebhookSubscriptionStatusUpdateResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun deleteSubscription(authorization: kotlin.String, subscriptionId: kotlin.String) : WebhookSubscriptionStatusUpdateResponse {
        val localVariableConfig = deleteSubscriptionRequestConfig(authorization = authorization, subscriptionId = subscriptionId)

        val localVarResponse = request<Unit, WebhookSubscriptionStatusUpdateResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as WebhookSubscriptionStatusUpdateResponse
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
    * To obtain the request config of the operation deleteSubscription
    *
    * @param authorization  
    * @param subscriptionId  
    * @return RequestConfig
    */
    fun deleteSubscriptionRequestConfig(authorization: kotlin.String, subscriptionId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.DELETE,
            path = "/v2/webhook/subscription/{subscriptionId}".replace("{"+"subscriptionId"+"}", "$subscriptionId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Retrieve a list of subscriptions created by your application
    * Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
    * @param authorization  
    * @return kotlin.collections.List<ListWebhookSubscriptionResponseSchema>
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun listSubscriptions(authorization: kotlin.String) : kotlin.collections.List<ListWebhookSubscriptionResponseSchema> {
        val localVariableConfig = listSubscriptionsRequestConfig(authorization = authorization)

        val localVarResponse = request<Unit, kotlin.collections.List<ListWebhookSubscriptionResponseSchema>>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<ListWebhookSubscriptionResponseSchema>
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
    * To obtain the request config of the operation listSubscriptions
    *
    * @param authorization  
    * @return RequestConfig
    */
    fun listSubscriptionsRequestConfig(authorization: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v2/webhook/subscriptions",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Update a specific subscription created by your application
    * Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
    * @param authorization  
    * @param subscriptionId  
    * @param updateWebhookSubscriptionRequestSchema  
    * @return WebhookSubscriptionStatusUpdateResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun updateSubscription(authorization: kotlin.String, subscriptionId: kotlin.String, updateWebhookSubscriptionRequestSchema: UpdateWebhookSubscriptionRequestSchema) : WebhookSubscriptionStatusUpdateResponse {
        val localVariableConfig = updateSubscriptionRequestConfig(authorization = authorization, subscriptionId = subscriptionId, updateWebhookSubscriptionRequestSchema = updateWebhookSubscriptionRequestSchema)

        val localVarResponse = request<UpdateWebhookSubscriptionRequestSchema, WebhookSubscriptionStatusUpdateResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as WebhookSubscriptionStatusUpdateResponse
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
    * To obtain the request config of the operation updateSubscription
    *
    * @param authorization  
    * @param subscriptionId  
    * @param updateWebhookSubscriptionRequestSchema  
    * @return RequestConfig
    */
    fun updateSubscriptionRequestConfig(authorization: kotlin.String, subscriptionId: kotlin.String, updateWebhookSubscriptionRequestSchema: UpdateWebhookSubscriptionRequestSchema) : RequestConfig<UpdateWebhookSubscriptionRequestSchema> {
        val localVariableBody = updateWebhookSubscriptionRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.PATCH,
            path = "/v2/webhook/subscription/{subscriptionId}".replace("{"+"subscriptionId"+"}", "$subscriptionId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
