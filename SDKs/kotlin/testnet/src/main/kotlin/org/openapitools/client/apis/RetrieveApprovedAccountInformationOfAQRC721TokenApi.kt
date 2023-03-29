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
import org.openapitools.client.models.ErrorResponseMessage
import org.openapitools.client.models.InternalServerErrorSchema
import org.openapitools.client.models.ReadApprovedAccountRequestSchema
import org.openapitools.client.models.TokenReadQRC721Response

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

class RetrieveApprovedAccountInformationOfAQRC721TokenApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.sandbox.overledger.io")
        }
    }

    /**
    * Retrieve which account is approved to collect a QRC721 token
    * Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.
    * @param authorization  
    * @param readApprovedAccountRequestSchema  
    * @return TokenReadQRC721Response
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun readQRC721SmartContractApprovedAccount(authorization: kotlin.String, readApprovedAccountRequestSchema: ReadApprovedAccountRequestSchema) : TokenReadQRC721Response {
        val localVariableConfig = readQRC721SmartContractApprovedAccountRequestConfig(authorization = authorization, readApprovedAccountRequestSchema = readApprovedAccountRequestSchema)

        val localVarResponse = request<ReadApprovedAccountRequestSchema, TokenReadQRC721Response>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as TokenReadQRC721Response
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
    * To obtain the request config of the operation readQRC721SmartContractApprovedAccount
    *
    * @param authorization  
    * @param readApprovedAccountRequestSchema  
    * @return RequestConfig
    */
    fun readQRC721SmartContractApprovedAccountRequestConfig(authorization: kotlin.String, readApprovedAccountRequestSchema: ReadApprovedAccountRequestSchema) : RequestConfig<ReadApprovedAccountRequestSchema> {
        val localVariableBody = readApprovedAccountRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/tokenise/tokens/qrc721/approved-account",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}