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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.Location;
import org.openapitools.client.model.ResourceMonitoringSmartContractEventDetails;
import org.openapitools.client.model.SmartContractEventHistory;
import org.openapitools.client.model.Status;

/**
 * SmartContractMonitoringDetailsSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class SmartContractMonitoringDetailsSchema {
  public static final String SERIALIZED_NAME_SMART_CONTRACT_EVENT_DETAILS = "smartContractEventDetails";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_EVENT_DETAILS)
  private ResourceMonitoringSmartContractEventDetails smartContractEventDetails;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_SMART_CONTRACT_EVENT_HISTORY = "smartContractEventHistory";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_EVENT_HISTORY)
  private List<SmartContractEventHistory> smartContractEventHistory = null;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private String timestamp;


  public SmartContractMonitoringDetailsSchema smartContractEventDetails(ResourceMonitoringSmartContractEventDetails smartContractEventDetails) {
    
    this.smartContractEventDetails = smartContractEventDetails;
    return this;
  }

   /**
   * Get smartContractEventDetails
   * @return smartContractEventDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringSmartContractEventDetails getSmartContractEventDetails() {
    return smartContractEventDetails;
  }


  public void setSmartContractEventDetails(ResourceMonitoringSmartContractEventDetails smartContractEventDetails) {
    this.smartContractEventDetails = smartContractEventDetails;
  }


  public SmartContractMonitoringDetailsSchema location(Location location) {
    
    this.location = location;
    return this;
  }

   /**
   * Get location
   * @return location
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Location getLocation() {
    return location;
  }


  public void setLocation(Location location) {
    this.location = location;
  }


  public SmartContractMonitoringDetailsSchema smartContractEventHistory(List<SmartContractEventHistory> smartContractEventHistory) {
    
    this.smartContractEventHistory = smartContractEventHistory;
    return this;
  }

  public SmartContractMonitoringDetailsSchema addSmartContractEventHistoryItem(SmartContractEventHistory smartContractEventHistoryItem) {
    if (this.smartContractEventHistory == null) {
      this.smartContractEventHistory = new ArrayList<SmartContractEventHistory>();
    }
    this.smartContractEventHistory.add(smartContractEventHistoryItem);
    return this;
  }

   /**
   * Get smartContractEventHistory
   * @return smartContractEventHistory
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<SmartContractEventHistory> getSmartContractEventHistory() {
    return smartContractEventHistory;
  }


  public void setSmartContractEventHistory(List<SmartContractEventHistory> smartContractEventHistory) {
    this.smartContractEventHistory = smartContractEventHistory;
  }


  public SmartContractMonitoringDetailsSchema type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public SmartContractMonitoringDetailsSchema status(Status status) {
    
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Status getStatus() {
    return status;
  }


  public void setStatus(Status status) {
    this.status = status;
  }


  public SmartContractMonitoringDetailsSchema timestamp(String timestamp) {
    
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getTimestamp() {
    return timestamp;
  }


  public void setTimestamp(String timestamp) {
    this.timestamp = timestamp;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SmartContractMonitoringDetailsSchema smartContractMonitoringDetailsSchema = (SmartContractMonitoringDetailsSchema) o;
    return Objects.equals(this.smartContractEventDetails, smartContractMonitoringDetailsSchema.smartContractEventDetails) &&
        Objects.equals(this.location, smartContractMonitoringDetailsSchema.location) &&
        Objects.equals(this.smartContractEventHistory, smartContractMonitoringDetailsSchema.smartContractEventHistory) &&
        Objects.equals(this.type, smartContractMonitoringDetailsSchema.type) &&
        Objects.equals(this.status, smartContractMonitoringDetailsSchema.status) &&
        Objects.equals(this.timestamp, smartContractMonitoringDetailsSchema.timestamp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(smartContractEventDetails, location, smartContractEventHistory, type, status, timestamp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SmartContractMonitoringDetailsSchema {\n");
    sb.append("    smartContractEventDetails: ").append(toIndentedString(smartContractEventDetails)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    smartContractEventHistory: ").append(toIndentedString(smartContractEventHistory)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
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

