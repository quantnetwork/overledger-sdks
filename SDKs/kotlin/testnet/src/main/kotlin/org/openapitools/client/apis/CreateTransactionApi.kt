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

import org.openapitools.client.models.ErrorDetails
import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.ExecuteTransactionRequest
import org.openapitools.client.models.ExecuteTransactionResponse
import org.openapitools.client.models.InternalServerErrorSchema
import org.openapitools.client.models.PrepareNativeTransactionRequestSchema
import org.openapitools.client.models.PreparePaymentTransactionRequestSchema
import org.openapitools.client.models.PrepareSearchResponseSchema
import org.openapitools.client.models.PrepareTransactionResponse

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

class CreateTransactionApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.sandbox.overledger.io")
        }
    }

    /**
    * Execute a native transaction on the DLT
    * Takes a request ID and submits a signed native transaction to the requested DLT
    * @param authorization  
    * @param executeTransactionRequest  
    * @return ExecuteTransactionResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun executePreparedRequestNativeTransaction(authorization: kotlin.String, executeTransactionRequest: ExecuteTransactionRequest) : ExecuteTransactionResponse {
        val localVariableConfig = executePreparedRequestNativeTransactionRequestConfig(authorization = authorization, executeTransactionRequest = executeTransactionRequest)

        val localVarResponse = request<ExecuteTransactionRequest, ExecuteTransactionResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ExecuteTransactionResponse
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
    * To obtain the request config of the operation executePreparedRequestNativeTransaction
    *
    * @param authorization  
    * @param executeTransactionRequest  
    * @return RequestConfig
    */
    fun executePreparedRequestNativeTransactionRequestConfig(authorization: kotlin.String, executeTransactionRequest: ExecuteTransactionRequest) : RequestConfig<ExecuteTransactionRequest> {
        val localVariableBody = executeTransactionRequest
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/execution/nativetransaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Execute a transaction on the DLT
    * Takes a request ID and submits a signed transaction to the requested DLT.
    * @param authorization  
    * @param executeTransactionRequest  
    * @return ExecuteTransactionResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun executePreparedRequestTransaction(authorization: kotlin.String, executeTransactionRequest: ExecuteTransactionRequest) : ExecuteTransactionResponse {
        val localVariableConfig = executePreparedRequestTransactionRequestConfig(authorization = authorization, executeTransactionRequest = executeTransactionRequest)

        val localVarResponse = request<ExecuteTransactionRequest, ExecuteTransactionResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as ExecuteTransactionResponse
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
    * To obtain the request config of the operation executePreparedRequestTransaction
    *
    * @param authorization  
    * @param executeTransactionRequest  
    * @return RequestConfig
    */
    fun executePreparedRequestTransactionRequestConfig(authorization: kotlin.String, executeTransactionRequest: ExecuteTransactionRequest) : RequestConfig<ExecuteTransactionRequest> {
        val localVariableBody = executeTransactionRequest
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/execution/transaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Prepare a DLT native transaction
    * Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
    * @param authorization  
    * @param prepareNativeTransactionRequestSchema  
    * @return PrepareSearchResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun prepareNativeTransaction(authorization: kotlin.String, prepareNativeTransactionRequestSchema: PrepareNativeTransactionRequestSchema) : PrepareSearchResponseSchema {
        val localVariableConfig = prepareNativeTransactionRequestConfig(authorization = authorization, prepareNativeTransactionRequestSchema = prepareNativeTransactionRequestSchema)

        val localVarResponse = request<PrepareNativeTransactionRequestSchema, PrepareSearchResponseSchema>(
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
    * To obtain the request config of the operation prepareNativeTransaction
    *
    * @param authorization  
    * @param prepareNativeTransactionRequestSchema  
    * @return RequestConfig
    */
    fun prepareNativeTransactionRequestConfig(authorization: kotlin.String, prepareNativeTransactionRequestSchema: PrepareNativeTransactionRequestSchema) : RequestConfig<PrepareNativeTransactionRequestSchema> {
        val localVariableBody = prepareNativeTransactionRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/preparation/nativetransaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Prepare a DLT transaction for signing
    * Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are \&quot;Payment\&quot; (to send payments) and \&quot;Smart Contract Invoke\&quot; (to invoke arbitrary smart contract functions).   Warning: Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail.
    * @param authorization  
    * @param preparePaymentTransactionRequestSchema  
    * @return PrepareTransactionResponse
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun prepareTransactionRequest(authorization: kotlin.String, preparePaymentTransactionRequestSchema: PreparePaymentTransactionRequestSchema) : PrepareTransactionResponse {
        val localVariableConfig = prepareTransactionRequestRequestConfig(authorization = authorization, preparePaymentTransactionRequestSchema = preparePaymentTransactionRequestSchema)

        val localVarResponse = request<PreparePaymentTransactionRequestSchema, PrepareTransactionResponse>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as PrepareTransactionResponse
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
    * To obtain the request config of the operation prepareTransactionRequest
    *
    * @param authorization  
    * @param preparePaymentTransactionRequestSchema  
    * @return RequestConfig
    */
    fun prepareTransactionRequestRequestConfig(authorization: kotlin.String, preparePaymentTransactionRequestSchema: PreparePaymentTransactionRequestSchema) : RequestConfig<PreparePaymentTransactionRequestSchema> {
        val localVariableBody = preparePaymentTransactionRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/preparation/transaction",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
