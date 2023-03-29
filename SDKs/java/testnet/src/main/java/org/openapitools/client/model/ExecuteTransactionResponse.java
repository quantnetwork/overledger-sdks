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
import org.openapitools.client.model.Location;
import org.openapitools.client.model.Status;

/**
 * ExecuteTransactionResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class ExecuteTransactionResponse {
  public static final String SERIALIZED_NAME_URGENCY = "urgency";
  @SerializedName(SERIALIZED_NAME_URGENCY)
  private String urgency;

  public static final String SERIALIZED_NAME_REQUEST_ID = "requestId";
  @SerializedName(SERIALIZED_NAME_REQUEST_ID)
  private String requestId;

  public static final String SERIALIZED_NAME_OVERLEDGER_TRANSACTION_ID = "overledgerTransactionId";
  @SerializedName(SERIALIZED_NAME_OVERLEDGER_TRANSACTION_ID)
  private String overledgerTransactionId;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_TRANSACTION_ID = "transactionId";
  @SerializedName(SERIALIZED_NAME_TRANSACTION_ID)
  private String transactionId;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;


  public ExecuteTransactionResponse urgency(String urgency) {
    
    this.urgency = urgency;
    return this;
  }

   /**
   * Get urgency
   * @return urgency
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getUrgency() {
    return urgency;
  }


  public void setUrgency(String urgency) {
    this.urgency = urgency;
  }


  public ExecuteTransactionResponse requestId(String requestId) {
    
    this.requestId = requestId;
    return this;
  }

   /**
   * The ID assigned to a preparation request in Overledger
   * @return requestId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The ID assigned to a preparation request in Overledger")

  public String getRequestId() {
    return requestId;
  }


  public void setRequestId(String requestId) {
    this.requestId = requestId;
  }


  public ExecuteTransactionResponse overledgerTransactionId(String overledgerTransactionId) {
    
    this.overledgerTransactionId = overledgerTransactionId;
    return this;
  }

   /**
   * Get overledgerTransactionId
   * @return overledgerTransactionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getOverledgerTransactionId() {
    return overledgerTransactionId;
  }


  public void setOverledgerTransactionId(String overledgerTransactionId) {
    this.overledgerTransactionId = overledgerTransactionId;
  }


  public ExecuteTransactionResponse location(Location location) {
    
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


  public ExecuteTransactionResponse type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * The type of the transaction executed
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The type of the transaction executed")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public ExecuteTransactionResponse transactionId(String transactionId) {
    
    this.transactionId = transactionId;
    return this;
  }

   /**
   * The ID assigned by Overledger to a transaction submitted to a DLT via Overledger
   * @return transactionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The ID assigned by Overledger to a transaction submitted to a DLT via Overledger")

  public String getTransactionId() {
    return transactionId;
  }


  public void setTransactionId(String transactionId) {
    this.transactionId = transactionId;
  }


  public ExecuteTransactionResponse status(Status status) {
    
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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExecuteTransactionResponse executeTransactionResponse = (ExecuteTransactionResponse) o;
    return Objects.equals(this.urgency, executeTransactionResponse.urgency) &&
        Objects.equals(this.requestId, executeTransactionResponse.requestId) &&
        Objects.equals(this.overledgerTransactionId, executeTransactionResponse.overledgerTransactionId) &&
        Objects.equals(this.location, executeTransactionResponse.location) &&
        Objects.equals(this.type, executeTransactionResponse.type) &&
        Objects.equals(this.transactionId, executeTransactionResponse.transactionId) &&
        Objects.equals(this.status, executeTransactionResponse.status);
  }

  @Override
  public int hashCode() {
    return Objects.hash(urgency, requestId, overledgerTransactionId, location, type, transactionId, status);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExecuteTransactionResponse {\n");
    sb.append("    urgency: ").append(toIndentedString(urgency)).append("\n");
    sb.append("    requestId: ").append(toIndentedString(requestId)).append("\n");
    sb.append("    overledgerTransactionId: ").append(toIndentedString(overledgerTransactionId)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    transactionId: ").append(toIndentedString(transactionId)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
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

