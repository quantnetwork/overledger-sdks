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

/**
 * OverledgerTransactionResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:38:46.604397+01:00[Europe/London]")
public class OverledgerTransactionResponseSchema {
  public static final String SERIALIZED_NAME_CLIENT_ID = "clientId";
  @SerializedName(SERIALIZED_NAME_CLIENT_ID)
  private String clientId;

  public static final String SERIALIZED_NAME_REQUEST_ID = "requestId";
  @SerializedName(SERIALIZED_NAME_REQUEST_ID)
  private String requestId;

  public static final String SERIALIZED_NAME_OVERLEDGER_TRANSACTION_ID = "overledgerTransactionId";
  @SerializedName(SERIALIZED_NAME_OVERLEDGER_TRANSACTION_ID)
  private String overledgerTransactionId;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TRANSACTION_HISTORY = "transactionHistory";
  @SerializedName(SERIALIZED_NAME_TRANSACTION_HISTORY)
  private List<Status> transactionHistory = null;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_TRANSACTION_ID = "transactionId";
  @SerializedName(SERIALIZED_NAME_TRANSACTION_ID)
  private String transactionId;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;


  public OverledgerTransactionResponseSchema clientId(String clientId) {
    
    this.clientId = clientId;
    return this;
  }

   /**
   * Get clientId
   * @return clientId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getClientId() {
    return clientId;
  }


  public void setClientId(String clientId) {
    this.clientId = clientId;
  }


  public OverledgerTransactionResponseSchema requestId(String requestId) {
    
    this.requestId = requestId;
    return this;
  }

   /**
   * Get requestId
   * @return requestId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getRequestId() {
    return requestId;
  }


  public void setRequestId(String requestId) {
    this.requestId = requestId;
  }


  public OverledgerTransactionResponseSchema overledgerTransactionId(String overledgerTransactionId) {
    
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


  public OverledgerTransactionResponseSchema location(Location location) {
    
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


  public OverledgerTransactionResponseSchema transactionHistory(List<Status> transactionHistory) {
    
    this.transactionHistory = transactionHistory;
    return this;
  }

  public OverledgerTransactionResponseSchema addTransactionHistoryItem(Status transactionHistoryItem) {
    if (this.transactionHistory == null) {
      this.transactionHistory = new ArrayList<Status>();
    }
    this.transactionHistory.add(transactionHistoryItem);
    return this;
  }

   /**
   * Get transactionHistory
   * @return transactionHistory
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Status> getTransactionHistory() {
    return transactionHistory;
  }


  public void setTransactionHistory(List<Status> transactionHistory) {
    this.transactionHistory = transactionHistory;
  }


  public OverledgerTransactionResponseSchema type(String type) {
    
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


  public OverledgerTransactionResponseSchema transactionId(String transactionId) {
    
    this.transactionId = transactionId;
    return this;
  }

   /**
   * Get transactionId
   * @return transactionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getTransactionId() {
    return transactionId;
  }


  public void setTransactionId(String transactionId) {
    this.transactionId = transactionId;
  }


  public OverledgerTransactionResponseSchema status(Status status) {
    
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
    OverledgerTransactionResponseSchema overledgerTransactionResponseSchema = (OverledgerTransactionResponseSchema) o;
    return Objects.equals(this.clientId, overledgerTransactionResponseSchema.clientId) &&
        Objects.equals(this.requestId, overledgerTransactionResponseSchema.requestId) &&
        Objects.equals(this.overledgerTransactionId, overledgerTransactionResponseSchema.overledgerTransactionId) &&
        Objects.equals(this.location, overledgerTransactionResponseSchema.location) &&
        Objects.equals(this.transactionHistory, overledgerTransactionResponseSchema.transactionHistory) &&
        Objects.equals(this.type, overledgerTransactionResponseSchema.type) &&
        Objects.equals(this.transactionId, overledgerTransactionResponseSchema.transactionId) &&
        Objects.equals(this.status, overledgerTransactionResponseSchema.status);
  }

  @Override
  public int hashCode() {
    return Objects.hash(clientId, requestId, overledgerTransactionId, location, transactionHistory, type, transactionId, status);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OverledgerTransactionResponseSchema {\n");
    sb.append("    clientId: ").append(toIndentedString(clientId)).append("\n");
    sb.append("    requestId: ").append(toIndentedString(requestId)).append("\n");
    sb.append("    overledgerTransactionId: ").append(toIndentedString(overledgerTransactionId)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    transactionHistory: ").append(toIndentedString(transactionHistory)).append("\n");
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
