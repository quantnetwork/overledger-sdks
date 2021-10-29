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

import org.openapitools.client.models.Destination
import org.openapitools.client.models.Fee
import org.openapitools.client.models.Origin
import org.openapitools.client.models.Payment

import com.squareup.moshi.Json

/**
 * Smallest unit of a work process related to interactions with distributed ledgers
 *
 * @param signature The signatures of this transaction
 * @param origin 
 * @param fee 
 * @param destination 
 * @param signed 
 * @param totalPaymentAmount 
 * @param message Any text-based element of the data payload
 * @param transactionId The unique identifier of the transaction on this DLN
 * @param encoded 
 * @param nativeData 
 * @param extraFields 
 */

data class Transaction (

    /* The signatures of this transaction */
    @Json(name = "signature")
    val signature: kotlin.collections.List<kotlin.String>? = null,

    @Json(name = "origin")
    val origin: kotlin.collections.List<Origin>? = null,

    @Json(name = "fee")
    val fee: Fee? = null,

    @Json(name = "destination")
    val destination: kotlin.collections.List<Destination>? = null,

    @Json(name = "signed")
    val signed: kotlin.String? = null,

    @Json(name = "totalPaymentAmount")
    val totalPaymentAmount: kotlin.collections.List<Payment>? = null,

    /* Any text-based element of the data payload */
    @Json(name = "message")
    val message: kotlin.String? = null,

    /* The unique identifier of the transaction on this DLN */
    @Json(name = "transactionId")
    val transactionId: kotlin.String? = null,

    @Json(name = "encoded")
    val encoded: kotlin.collections.List<kotlin.String>? = null,

    @Json(name = "nativeData")
    val nativeData: kotlin.Any? = null,

    @Json(name = "extraFields")
    val extraFields: kotlin.Any? = null

)

