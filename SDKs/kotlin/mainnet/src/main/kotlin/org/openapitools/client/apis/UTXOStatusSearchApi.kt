/**
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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

import org.openapitools.client.models.AutoExecuteSearchUTXOResponseSchema
import org.openapitools.client.models.ErrorDetails
import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.ExecuteSearchUTXOResponseSchema
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

class UTXOStatusSearchApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.overledger.io")
        }
    }

    /**
    * Prepare and automatically execute a search for a UTXO on a DLT.
    * Generates a request ID and automatically executes the utxo search on the requested DLT.
    * @param authorization  
    * @param utxoId  
    * @param prepareSearchSchema  
    * @return AutoExecuteSearchUTXOResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun autoExecuteSearchUtxoRequest(authorization: kotlin.String, utxoId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : AutoExecuteSearchUTXOResponseSchema {
        val localVariableConfig = autoExecuteSearchUtxoRequestRequestConfig(authorization = authorization, utxoId = utxoId, prepareSearchSchema = prepareSearchSchema)

        val localVarResponse = request<PrepareSearchSchema, AutoExecuteSearchUTXOResponseSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as AutoExecuteSearchUTXOResponseSchema
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
    * To obtain the request config of the operation autoExecuteSearchUtxoRequest
    *
    * @param authorization  
    * @param utxoId  
    * @param prepareSearchSchema  
    * @return RequestConfig
    */
    fun autoExecuteSearchUtxoRequestRequestConfig(authorization: kotlin.String, utxoId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : RequestConfig<PrepareSearchSchema> {
        val localVariableBody = prepareSearchSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/autoexecution/search/utxo/{utxoId}".replace("{"+"utxoId"+"}", "$utxoId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Execute a search for UTXO state on a DLT
    * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
    * @param authorization  
    * @param requestId  
    * @return ExecuteSearchUTXOResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun executeUTXOPreparedSearchRequest(authorization: kotlin.String, requestId: kotlin.String) : ExecuteSearchUTXOResponseSchema {
        val localVariableConfig = executeUTXOPreparedSearchRequestRequestConfig(authorization = authorization, requestId = requestId)

        val localVarResponse = request<Unit, ExecuteSearchUTXOResponseSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ExecuteSearchUTXOResponseSchema
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
    * To obtain the request config of the operation executeUTXOPreparedSearchRequest
    *
    * @param authorization  
    * @param requestId  
    * @return RequestConfig
    */
    fun executeUTXOPreparedSearchRequestRequestConfig(authorization: kotlin.String, requestId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, List<kotlin.String>>()
            .apply {
                put("requestId", listOf(requestId.toString()))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/execution/search/utxo",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Prepare Search for a UTXO State.
    * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT&#39;s
    * @param authorization  
    * @param utxoId  
    * @param prepareSearchSchema  
    * @return PrepareSearchResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun prepareSearchUTXOState(authorization: kotlin.String, utxoId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : PrepareSearchResponseSchema {
        val localVariableConfig = prepareSearchUTXOStateRequestConfig(authorization = authorization, utxoId = utxoId, prepareSearchSchema = prepareSearchSchema)

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
    * To obtain the request config of the operation prepareSearchUTXOState
    *
    * @param authorization  
    * @param utxoId  
    * @param prepareSearchSchema  
    * @return RequestConfig
    */
    fun prepareSearchUTXOStateRequestConfig(authorization: kotlin.String, utxoId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : RequestConfig<PrepareSearchSchema> {
        val localVariableBody = prepareSearchSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/preparation/search/utxo/{utxoId}".replace("{"+"utxoId"+"}", "$utxoId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
