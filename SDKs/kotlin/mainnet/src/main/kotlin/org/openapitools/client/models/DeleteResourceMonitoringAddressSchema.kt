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

import org.openapitools.client.models.ResourceMonitoringAddressDetails
import org.openapitools.client.models.ResourceMonitoringDetails

import com.squareup.moshi.Json

/**
 * 
 *
 * @param addressMonitoringDetails 
 * @param resourceMonitoring 
 */

data class DeleteResourceMonitoringAddressSchema (

    @Json(name = "addressMonitoringDetails")
    val addressMonitoringDetails: ResourceMonitoringAddressDetails? = null,

    @Json(name = "resourceMonitoring")
    val resourceMonitoring: ResourceMonitoringDetails? = null

)

