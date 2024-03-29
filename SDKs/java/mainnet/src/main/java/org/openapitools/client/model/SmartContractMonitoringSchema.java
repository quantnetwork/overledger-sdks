/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.openapitools.client.model.ResourceMonitoringDetails;
import org.openapitools.client.model.ResourceMonitoringSmartContractEventDetails;

/**
 * SmartContractMonitoringSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class SmartContractMonitoringSchema {
  public static final String SERIALIZED_NAME_SMART_CONTRACT_EVENT_MONITORING_DETAILS = "smartContractEventMonitoringDetails";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_EVENT_MONITORING_DETAILS)
  private ResourceMonitoringSmartContractEventDetails smartContractEventMonitoringDetails;

  public static final String SERIALIZED_NAME_RESOURCE_MONITORING = "resourceMonitoring";
  @SerializedName(SERIALIZED_NAME_RESOURCE_MONITORING)
  private ResourceMonitoringDetails resourceMonitoring;


  public SmartContractMonitoringSchema smartContractEventMonitoringDetails(ResourceMonitoringSmartContractEventDetails smartContractEventMonitoringDetails) {
    
    this.smartContractEventMonitoringDetails = smartContractEventMonitoringDetails;
    return this;
  }

   /**
   * Get smartContractEventMonitoringDetails
   * @return smartContractEventMonitoringDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringSmartContractEventDetails getSmartContractEventMonitoringDetails() {
    return smartContractEventMonitoringDetails;
  }


  public void setSmartContractEventMonitoringDetails(ResourceMonitoringSmartContractEventDetails smartContractEventMonitoringDetails) {
    this.smartContractEventMonitoringDetails = smartContractEventMonitoringDetails;
  }


  public SmartContractMonitoringSchema resourceMonitoring(ResourceMonitoringDetails resourceMonitoring) {
    
    this.resourceMonitoring = resourceMonitoring;
    return this;
  }

   /**
   * Get resourceMonitoring
   * @return resourceMonitoring
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringDetails getResourceMonitoring() {
    return resourceMonitoring;
  }


  public void setResourceMonitoring(ResourceMonitoringDetails resourceMonitoring) {
    this.resourceMonitoring = resourceMonitoring;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SmartContractMonitoringSchema smartContractMonitoringSchema = (SmartContractMonitoringSchema) o;
    return Objects.equals(this.smartContractEventMonitoringDetails, smartContractMonitoringSchema.smartContractEventMonitoringDetails) &&
        Objects.equals(this.resourceMonitoring, smartContractMonitoringSchema.resourceMonitoring);
  }

  @Override
  public int hashCode() {
    return Objects.hash(smartContractEventMonitoringDetails, resourceMonitoring);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SmartContractMonitoringSchema {\n");
    sb.append("    smartContractEventMonitoringDetails: ").append(toIndentedString(smartContractEventMonitoringDetails)).append("\n");
    sb.append("    resourceMonitoring: ").append(toIndentedString(resourceMonitoring)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

