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

package org.openapitools.client.models

import org.openapitools.client.models.BlockHash
import org.openapitools.client.models.BlockSize
import org.openapitools.client.models.LinkedBlocks

import com.squareup.moshi.Json

/**
 * 
 *
 * @param blockId 
 * @param number 
 * @param transactionIds 
 * @param propertySize 
 * @param hashes 
 * @param linkedBlocks 
 * @param numberOfTransactions 
 * @param message 
 * @param timestamp 
 * @param nativeData 
 */

data class Block (

    @Json(name = "blockId")
    val blockId: kotlin.String? = null,

    @Json(name = "number")
    val number: kotlin.Int? = null,

    @Json(name = "transactionIds")
    val transactionIds: kotlin.collections.List<kotlin.String>? = null,

    @Json(name = "size")
    val propertySize: kotlin.collections.List<BlockSize>? = null,

    @Json(name = "hashes")
    val hashes: kotlin.collections.List<BlockHash>? = null,

    @Json(name = "linkedBlocks")
    val linkedBlocks: LinkedBlocks? = null,

    @Json(name = "numberOfTransactions")
    val numberOfTransactions: kotlin.Int? = null,

    @Json(name = "message")
    val message: kotlin.String? = null,

    @Json(name = "timestamp")
    val timestamp: kotlin.Int? = null,

    @Json(name = "nativeData")
    val nativeData: kotlin.Any? = null

)

