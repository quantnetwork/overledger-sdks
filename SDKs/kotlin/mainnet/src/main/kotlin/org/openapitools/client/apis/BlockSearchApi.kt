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

import org.openapitools.client.models.AutoExecuteSearchBlockResponseSchema
import org.openapitools.client.models.ErrorDetails
import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.ExecuteSearchBlockResponse
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

class BlockSearchApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.overledger.io")
        }
    }

    /**
    * Prepare and automatically execute a search for a block on a DLT.
    * Generates a request ID and automatically executes the block search on the requested DLT.
    * @param authorization  
    * @param blockId  
    * @param prepareSearchSchema  
    * @return AutoExecuteSearchBlockResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun autoExecuteSearchBlockRequest(authorization: kotlin.String, blockId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : AutoExecuteSearchBlockResponseSchema {
        val localVariableConfig = autoExecuteSearchBlockRequestRequestConfig(authorization = authorization, blockId = blockId, prepareSearchSchema = prepareSearchSchema)

        val localVarResponse = request<PrepareSearchSchema, AutoExecuteSearchBlockResponseSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as AutoExecuteSearchBlockResponseSchema
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
    * To obtain the request config of the operation autoExecuteSearchBlockRequest
    *
    * @param authorization  
    * @param blockId  
    * @param prepareSearchSchema  
    * @return RequestConfig
    */
    fun autoExecuteSearchBlockRequestRequestConfig(authorization: kotlin.String, blockId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : RequestConfig<PrepareSearchSchema> {
        val localVariableBody = prepareSearchSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/autoexecution/search/block/{blockId}".replace("{"+"blockId"+"}", "$blockId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Execute a search for a block on a DLT
    * Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request
    * @param authorization  
    * @param requestId  
    * @return ExecuteSearchBlockResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun executePreparedSearchRequestBlock(authorization: kotlin.String, requestId: kotlin.String) : ExecuteSearchBlockResponse {
        val localVariableConfig = executePreparedSearchRequestBlockRequestConfig(authorization = authorization, requestId = requestId)

        val localVarResponse = request<Unit, ExecuteSearchBlockResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ExecuteSearchBlockResponse
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
    * To obtain the request config of the operation executePreparedSearchRequestBlock
    *
    * @param authorization  
    * @param requestId  
    * @return RequestConfig
    */
    fun executePreparedSearchRequestBlockRequestConfig(authorization: kotlin.String, requestId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, List<kotlin.String>>()
            .apply {
                put("requestId", listOf(requestId.toString()))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/execution/search/block",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Prepare Search Block by Block Id.
    * Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time
    * @param authorization  
    * @param blockId  
    * @param prepareSearchSchema  
    * @return PrepareSearchResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun prepareSearchBlockByBlockId(authorization: kotlin.String, blockId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : PrepareSearchResponseSchema {
        val localVariableConfig = prepareSearchBlockByBlockIdRequestConfig(authorization = authorization, blockId = blockId, prepareSearchSchema = prepareSearchSchema)

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
    * To obtain the request config of the operation prepareSearchBlockByBlockId
    *
    * @param authorization  
    * @param blockId  
    * @param prepareSearchSchema  
    * @return RequestConfig
    */
    fun prepareSearchBlockByBlockIdRequestConfig(authorization: kotlin.String, blockId: kotlin.String, prepareSearchSchema: PrepareSearchSchema) : RequestConfig<PrepareSearchSchema> {
        val localVariableBody = prepareSearchSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/preparation/search/block/{blockId}".replace("{"+"blockId"+"}", "$blockId"),
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
