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
import org.openapitools.client.model.DestinationPaymentSchema;
import org.openapitools.client.model.OriginPaymentSchema;

/**
 * PaymentRequestDetailsSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class PaymentRequestDetailsSchema {
  public static final String SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE = "overledgerSigningType";
  @SerializedName(SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE)
  private String overledgerSigningType;

  public static final String SERIALIZED_NAME_ORIGIN = "origin";
  @SerializedName(SERIALIZED_NAME_ORIGIN)
  private List<OriginPaymentSchema> origin = null;

  public static final String SERIALIZED_NAME_DESTINATION = "destination";
  @SerializedName(SERIALIZED_NAME_DESTINATION)
  private List<DestinationPaymentSchema> destination = null;

  public static final String SERIALIZED_NAME_MESSAGE = "message";
  @SerializedName(SERIALIZED_NAME_MESSAGE)
  private String message;


  public PaymentRequestDetailsSchema overledgerSigningType(String overledgerSigningType) {
    
    this.overledgerSigningType = overledgerSigningType;
    return this;
  }

   /**
   * Get overledgerSigningType
   * @return overledgerSigningType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getOverledgerSigningType() {
    return overledgerSigningType;
  }


  public void setOverledgerSigningType(String overledgerSigningType) {
    this.overledgerSigningType = overledgerSigningType;
  }


  public PaymentRequestDetailsSchema origin(List<OriginPaymentSchema> origin) {
    
    this.origin = origin;
    return this;
  }

  public PaymentRequestDetailsSchema addOriginItem(OriginPaymentSchema originItem) {
    if (this.origin == null) {
      this.origin = new ArrayList<OriginPaymentSchema>();
    }
    this.origin.add(originItem);
    return this;
  }

   /**
   * Where is this transaction coming from
   * @return origin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Where is this transaction coming from")

  public List<OriginPaymentSchema> getOrigin() {
    return origin;
  }


  public void setOrigin(List<OriginPaymentSchema> origin) {
    this.origin = origin;
  }


  public PaymentRequestDetailsSchema destination(List<DestinationPaymentSchema> destination) {
    
    this.destination = destination;
    return this;
  }

  public PaymentRequestDetailsSchema addDestinationItem(DestinationPaymentSchema destinationItem) {
    if (this.destination == null) {
      this.destination = new ArrayList<DestinationPaymentSchema>();
    }
    this.destination.add(destinationItem);
    return this;
  }

   /**
   * The Destination of this transaction
   * @return destination
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The Destination of this transaction")

  public List<DestinationPaymentSchema> getDestination() {
    return destination;
  }


  public void setDestination(List<DestinationPaymentSchema> destination) {
    this.destination = destination;
  }


  public PaymentRequestDetailsSchema message(String message) {
    
    this.message = message;
    return this;
  }

   /**
   * Any text-based element of the data payload
   * @return message
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Any text-based element of the data payload")

  public String getMessage() {
    return message;
  }


  public void setMessage(String message) {
    this.message = message;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PaymentRequestDetailsSchema paymentRequestDetailsSchema = (PaymentRequestDetailsSchema) o;
    return Objects.equals(this.overledgerSigningType, paymentRequestDetailsSchema.overledgerSigningType) &&
        Objects.equals(this.origin, paymentRequestDetailsSchema.origin) &&
        Objects.equals(this.destination, paymentRequestDetailsSchema.destination) &&
        Objects.equals(this.message, paymentRequestDetailsSchema.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(overledgerSigningType, origin, destination, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PaymentRequestDetailsSchema {\n");
    sb.append("    overledgerSigningType: ").append(toIndentedString(overledgerSigningType)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
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

