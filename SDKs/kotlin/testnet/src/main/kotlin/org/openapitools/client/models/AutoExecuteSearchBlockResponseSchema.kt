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

import org.openapitools.client.models.ExecuteSearchBlockResponse
import org.openapitools.client.models.PrepareAndExecuteOverledgerErrorResponse
import org.openapitools.client.models.PrepareSearchResponseSchema

import com.squareup.moshi.Json

/**
 * 
 *
 * @param prepareAndExecuteOverledgerErrorResponse 
 * @param executionBlockSearchResponse 
 * @param preparationBlockSearchResponse 
 */

data class AutoExecuteSearchBlockResponseSchema (

    @Json(name = "prepareAndExecuteOverledgerErrorResponse")
    val prepareAndExecuteOverledgerErrorResponse: PrepareAndExecuteOverledgerErrorResponse? = null,

    @Json(name = "executionBlockSearchResponse")
    val executionBlockSearchResponse: ExecuteSearchBlockResponse? = null,

    @Json(name = "preparationBlockSearchResponse")
    val preparationBlockSearchResponse: PrepareSearchResponseSchema? = null

)

