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
import org.openapitools.client.model.Destination;
import org.openapitools.client.model.Location;
import org.openapitools.client.model.Status;

/**
 * ExecuteSearchUTXOResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class ExecuteSearchUTXOResponse {
  public static final String SERIALIZED_NAME_UTXO_ID = "utxoId";
  @SerializedName(SERIALIZED_NAME_UTXO_ID)
  private String utxoId;

  public static final String SERIALIZED_NAME_DESTINATION = "destination";
  @SerializedName(SERIALIZED_NAME_DESTINATION)
  private List<Destination> destination = null;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private String timestamp;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;

  public static final String SERIALIZED_NAME_NATIVE_DATA = "nativeData";
  @SerializedName(SERIALIZED_NAME_NATIVE_DATA)
  private Object nativeData;


  public ExecuteSearchUTXOResponse utxoId(String utxoId) {
    
    this.utxoId = utxoId;
    return this;
  }

   /**
   * Get utxoId
   * @return utxoId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getUtxoId() {
    return utxoId;
  }


  public void setUtxoId(String utxoId) {
    this.utxoId = utxoId;
  }


  public ExecuteSearchUTXOResponse destination(List<Destination> destination) {
    
    this.destination = destination;
    return this;
  }

  public ExecuteSearchUTXOResponse addDestinationItem(Destination destinationItem) {
    if (this.destination == null) {
      this.destination = new ArrayList<Destination>();
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

  public List<Destination> getDestination() {
    return destination;
  }


  public void setDestination(List<Destination> destination) {
    this.destination = destination;
  }


  public ExecuteSearchUTXOResponse location(Location location) {
    
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


  public ExecuteSearchUTXOResponse timestamp(String timestamp) {
    
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


  public ExecuteSearchUTXOResponse status(Status status) {
    
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


  public ExecuteSearchUTXOResponse nativeData(Object nativeData) {
    
    this.nativeData = nativeData;
    return this;
  }

   /**
   * Get nativeData
   * @return nativeData
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Object getNativeData() {
    return nativeData;
  }


  public void setNativeData(Object nativeData) {
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
    ExecuteSearchUTXOResponse executeSearchUTXOResponse = (ExecuteSearchUTXOResponse) o;
    return Objects.equals(this.utxoId, executeSearchUTXOResponse.utxoId) &&
        Objects.equals(this.destination, executeSearchUTXOResponse.destination) &&
        Objects.equals(this.location, executeSearchUTXOResponse.location) &&
        Objects.equals(this.timestamp, executeSearchUTXOResponse.timestamp) &&
        Objects.equals(this.status, executeSearchUTXOResponse.status) &&
        Objects.equals(this.nativeData, executeSearchUTXOResponse.nativeData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(utxoId, destination, location, timestamp, status, nativeData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExecuteSearchUTXOResponse {\n");
    sb.append("    utxoId: ").append(toIndentedString(utxoId)).append("\n");
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

