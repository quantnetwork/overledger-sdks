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
import org.openapitools.client.model.PaymentSchema;

/**
 * Who are the payees of this transaction
 */
@ApiModel(description = "Who are the payees of this transaction")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class PayeeCreditSchema {
  public static final String SERIALIZED_NAME_PAYMENT = "payment";
  @SerializedName(SERIALIZED_NAME_PAYMENT)
  private PaymentSchema payment;

  public static final String SERIALIZED_NAME_PAYEE_ID = "payeeId";
  @SerializedName(SERIALIZED_NAME_PAYEE_ID)
  private String payeeId;


  public PayeeCreditSchema payment(PaymentSchema payment) {
    
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


  public PayeeCreditSchema payeeId(String payeeId) {
    
    this.payeeId = payeeId;
    return this;
  }

   /**
   * The unique identifiers of the payees
   * @return payeeId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unique identifiers of the payees")

  public String getPayeeId() {
    return payeeId;
  }


  public void setPayeeId(String payeeId) {
    this.payeeId = payeeId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PayeeCreditSchema payeeCreditSchema = (PayeeCreditSchema) o;
    return Objects.equals(this.payment, payeeCreditSchema.payment) &&
        Objects.equals(this.payeeId, payeeCreditSchema.payeeId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(payment, payeeId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PayeeCreditSchema {\n");
    sb.append("    payment: ").append(toIndentedString(payment)).append("\n");
    sb.append("    payeeId: ").append(toIndentedString(payeeId)).append("\n");
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

