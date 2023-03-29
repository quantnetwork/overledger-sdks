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

import org.openapitools.client.models.CreditRequestDetailsSchema
import org.openapitools.client.models.Location

import com.squareup.moshi.Json

/**
 * 
 *
 * @param location 
 * @param type The type of the transaction
 * @param urgency This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
 * @param requestDetails 
 */

data class PrepareCreditTransactionRequestSchema (

    @Json(name = "location")
    val location: Location,

    /* The type of the transaction */
    @Json(name = "type")
    val type: PrepareCreditTransactionRequestSchema.Type,

    /* This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal */
    @Json(name = "urgency")
    val urgency: PrepareCreditTransactionRequestSchema.Urgency,

    @Json(name = "requestDetails")
    val requestDetails: CreditRequestDetailsSchema? = null

) {

    /**
     * The type of the transaction
     *
     * Values: payment,transfer,contractInvoke
     */
    enum class Type(val value: kotlin.String) {
        @Json(name = "Payment") payment("Payment"),
        @Json(name = "Transfer") transfer("Transfer"),
        @Json(name = "Contract Invoke") contractInvoke("Contract Invoke");
    }
    /**
     * This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
     *
     * Values: normal,fast,urgent
     */
    enum class Urgency(val value: kotlin.String) {
        @Json(name = "Normal") normal("Normal"),
        @Json(name = "Fast") fast("Fast"),
        @Json(name = "Urgent") urgent("Urgent");
    }
}
