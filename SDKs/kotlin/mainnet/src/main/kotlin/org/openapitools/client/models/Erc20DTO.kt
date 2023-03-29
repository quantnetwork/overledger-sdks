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

package org.openapitools.client.models

import org.openapitools.client.models.LocationDTO
import org.openapitools.client.models.TierFunctionDTO

import com.squareup.moshi.Json

/**
 * 
 *
 * @param isQrc20 
 * @param tokenUnit 
 * @param decimalPlaces 
 * @param functions 
 * @param tokenName 
 * @param smartContractAddress 
 * @param location 
 * @param version 
 * @param url 
 * @param auditDate 
 */

data class Erc20DTO (

    @Json(name = "isQrc20")
    val isQrc20: kotlin.Boolean? = null,

    @Json(name = "tokenUnit")
    val tokenUnit: kotlin.String? = null,

    @Json(name = "decimalPlaces")
    val decimalPlaces: kotlin.Int? = null,

    @Json(name = "functions")
    val functions: kotlin.collections.List<TierFunctionDTO>? = null,

    @Json(name = "tokenName")
    val tokenName: kotlin.String? = null,

    @Json(name = "smartContractAddress")
    val smartContractAddress: kotlin.String? = null,

    @Json(name = "location")
    val location: LocationDTO? = null,

    @Json(name = "version")
    val version: kotlin.String? = null,

    @Json(name = "url")
    val url: kotlin.String? = null,

    @Json(name = "auditDate")
    val auditDate: java.time.LocalDate? = null

)
