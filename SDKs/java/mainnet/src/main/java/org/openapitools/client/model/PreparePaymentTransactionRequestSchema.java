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
import org.openapitools.client.model.Location;
import org.openapitools.client.model.PaymentRequestDetailsSchema;

/**
 * PreparePaymentTransactionRequestSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-11-01T15:12:40.004989Z[Europe/London]")
public class PreparePaymentTransactionRequestSchema {
  public static final String SERIALIZED_NAME_URGENCY = "urgency";
  @SerializedName(SERIALIZED_NAME_URGENCY)
  private String urgency;

  public static final String SERIALIZED_NAME_REQUEST_DETAILS = "requestDetails";
  @SerializedName(SERIALIZED_NAME_REQUEST_DETAILS)
  private PaymentRequestDetailsSchema requestDetails;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;


  public PreparePaymentTransactionRequestSchema urgency(String urgency) {
    
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


  public PreparePaymentTransactionRequestSchema requestDetails(PaymentRequestDetailsSchema requestDetails) {
    
    this.requestDetails = requestDetails;
    return this;
  }

   /**
   * Get requestDetails
   * @return requestDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PaymentRequestDetailsSchema getRequestDetails() {
    return requestDetails;
  }


  public void setRequestDetails(PaymentRequestDetailsSchema requestDetails) {
    this.requestDetails = requestDetails;
  }


  public PreparePaymentTransactionRequestSchema location(Location location) {
    
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


  public PreparePaymentTransactionRequestSchema type(String type) {
    
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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema = (PreparePaymentTransactionRequestSchema) o;
    return Objects.equals(this.urgency, preparePaymentTransactionRequestSchema.urgency) &&
        Objects.equals(this.requestDetails, preparePaymentTransactionRequestSchema.requestDetails) &&
        Objects.equals(this.location, preparePaymentTransactionRequestSchema.location) &&
        Objects.equals(this.type, preparePaymentTransactionRequestSchema.type);
  }

  @Override
  public int hashCode() {
    return Objects.hash(urgency, requestDetails, location, type);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PreparePaymentTransactionRequestSchema {\n");
    sb.append("    urgency: ").append(toIndentedString(urgency)).append("\n");
    sb.append("    requestDetails: ").append(toIndentedString(requestDetails)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
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

