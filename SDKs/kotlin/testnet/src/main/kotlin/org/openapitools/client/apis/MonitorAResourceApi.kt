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

import org.openapitools.client.models.AddressMonitoringRequestSchema
import org.openapitools.client.models.AddressMonitoringResponseSchema
import org.openapitools.client.models.CreateSmartContractMonitoringSchema
import org.openapitools.client.models.ErrorList
import org.openapitools.client.models.InternalServerErrorSchema
import org.openapitools.client.models.MonitorSmartContractRequestSchema

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

class MonitorAResourceApi(basePath: kotlin.String = defaultBasePath) : ApiClient(basePath) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty("org.openapitools.client.baseUrl", "https://api.sandbox.overledger.io")
        }
    }

    /**
    * Monitor an address for incoming and outgoing transactions
    * Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
    * @param authorization  
    * @param addressMonitoringRequestSchema  
    * @return AddressMonitoringResponseSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun resourceMonitoringAddress(authorization: kotlin.String, addressMonitoringRequestSchema: AddressMonitoringRequestSchema) : AddressMonitoringResponseSchema {
        val localVariableConfig = resourceMonitoringAddressRequestConfig(authorization = authorization, addressMonitoringRequestSchema = addressMonitoringRequestSchema)

        val localVarResponse = request<AddressMonitoringRequestSchema, AddressMonitoringResponseSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as AddressMonitoringResponseSchema
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
    * To obtain the request config of the operation resourceMonitoringAddress
    *
    * @param authorization  
    * @param addressMonitoringRequestSchema  
    * @return RequestConfig
    */
    fun resourceMonitoringAddressRequestConfig(authorization: kotlin.String, addressMonitoringRequestSchema: AddressMonitoringRequestSchema) : RequestConfig<AddressMonitoringRequestSchema> {
        val localVariableBody = addressMonitoringRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/resourcemonitoring/address",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

    /**
    * Monitor a smart contract for an event
    * Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
    * @param authorization  
    * @param monitorSmartContractRequestSchema  
    * @return CreateSmartContractMonitoringSchema
    * @throws UnsupportedOperationException If the API returns an informational or redirection response
    * @throws ClientException If the API returns a client error response
    * @throws ServerException If the API returns a server error response
    */
    @Suppress("UNCHECKED_CAST")
    @Throws(UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun trackAndSubscribeEvent(authorization: kotlin.String, monitorSmartContractRequestSchema: MonitorSmartContractRequestSchema) : CreateSmartContractMonitoringSchema {
        val localVariableConfig = trackAndSubscribeEventRequestConfig(authorization = authorization, monitorSmartContractRequestSchema = monitorSmartContractRequestSchema)

        val localVarResponse = request<MonitorSmartContractRequestSchema, CreateSmartContractMonitoringSchema>(
            localVariableConfig
        )

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as CreateSmartContractMonitoringSchema
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
    * To obtain the request config of the operation trackAndSubscribeEvent
    *
    * @param authorization  
    * @param monitorSmartContractRequestSchema  
    * @return RequestConfig
    */
    fun trackAndSubscribeEventRequestConfig(authorization: kotlin.String, monitorSmartContractRequestSchema: MonitorSmartContractRequestSchema) : RequestConfig<MonitorSmartContractRequestSchema> {
        val localVariableBody = monitorSmartContractRequestSchema
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        authorization.apply { localVariableHeaders["Authorization"] = this.toString() }

        return RequestConfig(
            method = RequestMethod.POST,
            path = "/v2/resourcemonitoring/smartcontractevent",
            query = localVariableQuery,
            headers = localVariableHeaders,
            body = localVariableBody
        )
    }

}
