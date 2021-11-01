/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import org.openapitools.client.model.Status;
import org.openapitools.client.model.UTXODestination;
import org.openapitools.client.model.UTXONativeData;
import org.openapitools.client.model.UTXOTimestampSchema;

/**
 * ExecuteSearchUTXOResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-11-01T15:12:40.004989Z[Europe/London]")
public class ExecuteSearchUTXOResponseSchema {
  public static final String SERIALIZED_NAME_DESTINATION = "destination";
  @SerializedName(SERIALIZED_NAME_DESTINATION)
  private List<UTXODestination> destination = null;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private UTXOTimestampSchema timestamp;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;

  public static final String SERIALIZED_NAME_NATIVE_DATA = "nativeData";
  @SerializedName(SERIALIZED_NAME_NATIVE_DATA)
  private UTXONativeData nativeData;


  public ExecuteSearchUTXOResponseSchema destination(List<UTXODestination> destination) {
    
    this.destination = destination;
    return this;
  }

  public ExecuteSearchUTXOResponseSchema addDestinationItem(UTXODestination destinationItem) {
    if (this.destination == null) {
      this.destination = new ArrayList<UTXODestination>();
    }
    this.destination.add(destinationItem);
    return this;
  }

   /**
   * Get destination
   * @return destination
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<UTXODestination> getDestination() {
    return destination;
  }


  public void setDestination(List<UTXODestination> destination) {
    this.destination = destination;
  }


  public ExecuteSearchUTXOResponseSchema location(Location location) {
    
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


  public ExecuteSearchUTXOResponseSchema timestamp(UTXOTimestampSchema timestamp) {
    
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public UTXOTimestampSchema getTimestamp() {
    return timestamp;
  }


  public void setTimestamp(UTXOTimestampSchema timestamp) {
    this.timestamp = timestamp;
  }


  public ExecuteSearchUTXOResponseSchema status(Status status) {
    
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


  public ExecuteSearchUTXOResponseSchema nativeData(UTXONativeData nativeData) {
    
    this.nativeData = nativeData;
    return this;
  }

   /**
   * Get nativeData
   * @return nativeData
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public UTXONativeData getNativeData() {
    return nativeData;
  }


  public void setNativeData(UTXONativeData nativeData) {
    this.nativeData = nativeData;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExecuteSearchUTXOResponseSchema executeSearchUTXOResponseSchema = (ExecuteSearchUTXOResponseSchema) o;
    return Objects.equals(this.destination, executeSearchUTXOResponseSchema.destination) &&
        Objects.equals(this.location, executeSearchUTXOResponseSchema.location) &&
        Objects.equals(this.timestamp, executeSearchUTXOResponseSchema.timestamp) &&
        Objects.equals(this.status, executeSearchUTXOResponseSchema.status) &&
        Objects.equals(this.nativeData, executeSearchUTXOResponseSchema.nativeData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(destination, location, timestamp, status, nativeData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExecuteSearchUTXOResponseSchema {\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    nativeData: ").append(toIndentedString(nativeData)).append("\n");
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

