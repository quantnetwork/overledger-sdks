/**
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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

import org.openapitools.client.models.ErrorDetails
import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.ExecuteSearchTransactionResponse
import org.openapitools.client.models.InternalServerErrorSchema
import org.openapitools.client.models.PrepareSearchResponseSchema
import org.openapitools.client.models.PrepareSearchSchema

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

class TransactionSearchApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.sandbox.overledger.io")
        }
    }

    /**
    * Execute a search for a transaction on a DLT
    * Takes a request ID and searches for the transaction on the requested DLT
    * @param authorization  
    * @param requestId  
    * @return ExecuteSearchTransactionResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun executePreparedSearchRequestTransaction(authorization: kotlin.String, requestId: kotlin.String) : ExecuteSearchTransactionResponse {
        val localVariableConfig = executePreparedSearchRequestTransactionRequestConfig(authorization = authorization, requestId = requestId)

        val localVarResponse = request<Unit, ExecuteSearchTransactionResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ExecuteSearchTransactionResponse
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
    * To obtain the request config of the operation executePreparedSearchRequestTransaction
    *
    * @param authorization  
    * @param requestId  
    * @return RequestConfig
    */
    fun executePreparedSearchRequestTransactionRequestConfig(authorization: kotlin.String, requestId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, List<kotlin.String>>()
            .apply {
                put("requestId", listOf(requestId.toString()))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/execution/search/transaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Prepare a search for a transaction on a DLT
    * Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
    * @param authorization  
    * @param transactionId  
    * @param prepareSearchSchema  
    * @return PrepareSearchResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun prepareSearchRequest(authorization: kotlin.String, transactionId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : PrepareSearchResponseSchema {
        val localVariableConfig = prepareSearchRequestRequestConfig(authorization = authorization, transactionId = transactionId, prepareSearchSchema = prepareSearchSchema)

        val localVarResponse = request<PrepareSearchSchema, PrepareSearchResponseSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as PrepareSearchResponseSchema
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
    * To obtain the request config of the operation prepareSearchRequest
    *
    * @param authorization  
    * @param transactionId  
    * @param prepareSearchSchema  
    * @return RequestConfig
    */
    fun prepareSearchRequestRequestConfig(authorization: kotlin.String, transactionId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : RequestConfig<PrepareSearchSchema> {
        val localVariableBody = prepareSearchSchema
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, List<kotlin.String>>()
            .apply {
                put("transactionId", listOf(transactionId.toString()))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/preparation/search/transaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
