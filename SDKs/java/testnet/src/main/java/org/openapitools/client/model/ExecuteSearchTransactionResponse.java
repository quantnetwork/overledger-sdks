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
import org.openapitools.client.model.Transaction;

/**
 * ExecuteSearchTransactionResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class ExecuteSearchTransactionResponse {
  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_TRANSACTION = "transaction";
  @SerializedName(SERIALIZED_NAME_TRANSACTION)
  private Transaction transaction;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private String timestamp;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private Status status;

  public static final String SERIALIZED_NAME_EXTRA_FIELDS = "extraFields";
  @SerializedName(SERIALIZED_NAME_EXTRA_FIELDS)
  private Object extraFields;


  public ExecuteSearchTransactionResponse location(Location location) {
    
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


  public ExecuteSearchTransactionResponse type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * The type of the transaction object returned
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The type of the transaction object returned")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public ExecuteSearchTransactionResponse transaction(Transaction transaction) {
    
    this.transaction = transaction;
    return this;
  }

   /**
   * Get transaction
   * @return transaction
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Transaction getTransaction() {
    return transaction;
  }


  public void setTransaction(Transaction transaction) {
    this.transaction = transaction;
  }


  public ExecuteSearchTransactionResponse timestamp(String timestamp) {
    
    this.timestamp = timestamp;
    return this;
  }

   /**
   * The unix time to read the object from
   * @return timestamp
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unix time to read the object from")

  public String getTimestamp() {
    return timestamp;
  }


  public void setTimestamp(String timestamp) {
    this.timestamp = timestamp;
  }


  public ExecuteSearchTransactionResponse status(Status status) {
    
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


  public ExecuteSearchTransactionResponse extraFields(Object extraFields) {
    
    this.extraFields = extraFields;
    return this;
  }

   /**
   * Get extraFields
   * @return extraFields
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Object getExtraFields() {
    return extraFields;
  }


  public void setExtraFields(Object extraFields) {
    this.extraFields = extraFields;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExecuteSearchTransactionResponse executeSearchTransactionResponse = (ExecuteSearchTransactionResponse) o;
    return Objects.equals(this.location, executeSearchTransactionResponse.location) &&
        Objects.equals(this.type, executeSearchTransactionResponse.type) &&
        Objects.equals(this.transaction, executeSearchTransactionResponse.transaction) &&
        Objects.equals(this.timestamp, executeSearchTransactionResponse.timestamp) &&
        Objects.equals(this.status, executeSearchTransactionResponse.status) &&
        Objects.equals(this.extraFields, executeSearchTransactionResponse.extraFields);
  }

  @Override
  public int hashCode() {
    return Objects.hash(location, type, transaction, timestamp, status, extraFields);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExecuteSearchTransactionResponse {\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    transaction: ").append(toIndentedString(transaction)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    extraFields: ").append(toIndentedString(extraFields)).append("\n");
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

