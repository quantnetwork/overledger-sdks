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
import org.openapitools.client.models.ReadTokenOwnerRequestSchema
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

class RetrieveOwnerInformationForAQRC721TokenApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.overledger.io")
        }
    }

    /**
    * Retrieve which account currently owns a specific QRC721 token
    * Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.
    * @param authorization  
    * @param readTokenOwnerRequestSchema  
    * @return TokenReadQRC721Response
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun readQRC721SmartContractTokenOwner(authorization: kotlin.String, readTokenOwnerRequestSchema: ReadTokenOwnerRequestSchema) : TokenReadQRC721Response {
        val localVariableConfig = readQRC721SmartContractTokenOwnerRequestConfig(authorization = authorization, readTokenOwnerRequestSchema = readTokenOwnerRequestSchema)

        val localVarResponse = request<ReadTokenOwnerRequestSchema, TokenReadQRC721Response>(
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
    * To obtain the request config of the operation readQRC721SmartContractTokenOwner
    *
    * @param authorization  
    * @param readTokenOwnerRequestSchema  
    * @return RequestConfig
    */
    fun readQRC721SmartContractTokenOwnerRequestConfig(authorization: kotlin.String, readTokenOwnerRequestSchema: ReadTokenOwnerRequestSchema) : RequestConfig<ReadTokenOwnerRequestSchema> {
        val localVariableBody = readTokenOwnerRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/tokenise/tokens/qrc721/token-owner",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
