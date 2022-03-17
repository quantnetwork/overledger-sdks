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

package org.openapitools.client.models


import com.squareup.moshi.Json

/**
 * 
 *
 * @param eventId 
 * @param eventName 
 * @param eventParameters 
 * @param transactionId 
 * @param timestamp 
 */

data class SmartContractEventHistory (

    @Json(name = "eventId")
    val eventId: kotlin.String? = null,

    @Json(name = "eventName")
    val eventName: kotlin.String? = null,

    @Json(name = "eventParameters")
    val eventParameters: kotlin.String? = null,

    @Json(name = "transactionId")
    val transactionId: kotlin.String? = null,

    @Json(name = "timestamp")
    val timestamp: java.time.OffsetDateTime? = null

)

