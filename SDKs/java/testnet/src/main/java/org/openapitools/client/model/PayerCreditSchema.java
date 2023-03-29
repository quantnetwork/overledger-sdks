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

/**
 * Who are the payers of this transaction
 */
@ApiModel(description = "Who are the payers of this transaction")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class PayerCreditSchema {
  public static final String SERIALIZED_NAME_PAYER_ID = "payerId";
  @SerializedName(SERIALIZED_NAME_PAYER_ID)
  private String payerId;


  public PayerCreditSchema payerId(String payerId) {
    
    this.payerId = payerId;
    return this;
  }

   /**
   * Unique Identifier of the payer
   * @return payerId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Unique Identifier of the payer")

  public String getPayerId() {
    return payerId;
  }


  public void setPayerId(String payerId) {
    this.payerId = payerId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PayerCreditSchema payerCreditSchema = (PayerCreditSchema) o;
    return Objects.equals(this.payerId, payerCreditSchema.payerId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(payerId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PayerCreditSchema {\n");
    sb.append("    payerId: ").append(toIndentedString(payerId)).append("\n");
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

