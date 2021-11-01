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
import org.openapitools.client.model.PaymentSchema;

/**
 * The Destination of this transaction
 */
@ApiModel(description = "The Destination of this transaction")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class DestinationPaymentSchema {
  public static final String SERIALIZED_NAME_PAYMENT = "payment";
  @SerializedName(SERIALIZED_NAME_PAYMENT)
  private PaymentSchema payment;

  public static final String SERIALIZED_NAME_DESTINATION_ID = "destinationId";
  @SerializedName(SERIALIZED_NAME_DESTINATION_ID)
  private String destinationId;


  public DestinationPaymentSchema payment(PaymentSchema payment) {
    
    this.payment = payment;
    return this;
  }

   /**
   * Get payment
   * @return payment
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PaymentSchema getPayment() {
    return payment;
  }


  public void setPayment(PaymentSchema payment) {
    this.payment = payment;
  }


  public DestinationPaymentSchema destinationId(String destinationId) {
    
    this.destinationId = destinationId;
    return this;
  }

   /**
   * The unique identifiers of the destination
   * @return destinationId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unique identifiers of the destination")

  public String getDestinationId() {
    return destinationId;
  }


  public void setDestinationId(String destinationId) {
    this.destinationId = destinationId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DestinationPaymentSchema destinationPaymentSchema = (DestinationPaymentSchema) o;
    return Objects.equals(this.payment, destinationPaymentSchema.payment) &&
        Objects.equals(this.destinationId, destinationPaymentSchema.destinationId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(payment, destinationId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DestinationPaymentSchema {\n");
    sb.append("    payment: ").append(toIndentedString(payment)).append("\n");
    sb.append("    destinationId: ").append(toIndentedString(destinationId)).append("\n");
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
