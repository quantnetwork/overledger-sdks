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

import org.openapitools.client.models.PayeeCreditSchema
import org.openapitools.client.models.PayerCreditSchema

import com.squareup.moshi.Json

/**
 * 
 *
 * @param payee Who are the payees of this transaction
 * @param message Any text-based element of the data payload
 * @param payer Who are the payers of this transaction
 * @param overledgerSigningType 
 */

data class CreditRequestDetailsSchema (

    /* Who are the payees of this transaction */
    @Json(name = "payee")
    val payee: kotlin.collections.List<PayeeCreditSchema>? = null,

    /* Any text-based element of the data payload */
    @Json(name = "message")
    val message: kotlin.String? = null,

    /* Who are the payers of this transaction */
    @Json(name = "payer")
    val payer: kotlin.collections.List<PayerCreditSchema>? = null,

    @Json(name = "overledgerSigningType")
    val overledgerSigningType: kotlin.String? = null

)

