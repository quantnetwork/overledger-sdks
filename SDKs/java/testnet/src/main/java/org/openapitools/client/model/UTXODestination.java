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
import org.openapitools.client.model.Payment;
import org.openapitools.client.model.UTXOSmartContract;

/**
 * UTXODestination
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class UTXODestination {
  public static final String SERIALIZED_NAME_SMART_CONTRACT = "smartContract";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT)
  private UTXOSmartContract smartContract;

  public static final String SERIALIZED_NAME_PAYMENT = "payment";
  @SerializedName(SERIALIZED_NAME_PAYMENT)
  private Payment payment;

  public static final String SERIALIZED_NAME_DESTINATION_ID = "destinationId";
  @SerializedName(SERIALIZED_NAME_DESTINATION_ID)
  private String destinationId;


  public UTXODestination smartContract(UTXOSmartContract smartContract) {
    
    this.smartContract = smartContract;
    return this;
  }

   /**
   * Get smartContract
   * @return smartContract
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public UTXOSmartContract getSmartContract() {
    return smartContract;
  }


  public void setSmartContract(UTXOSmartContract smartContract) {
    this.smartContract = smartContract;
  }


  public UTXODestination payment(Payment payment) {
    
    this.payment = payment;
    return this;
  }

   /**
   * Get payment
   * @return payment
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Payment getPayment() {
    return payment;
  }


  public void setPayment(Payment payment) {
    this.payment = payment;
  }


  public UTXODestination destinationId(String destinationId) {
    
    this.destinationId = destinationId;
    return this;
  }

   /**
   * Get destinationId
   * @return destinationId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

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
    UTXODestination utXODestination = (UTXODestination) o;
    return Objects.equals(this.smartContract, utXODestination.smartContract) &&
        Objects.equals(this.payment, utXODestination.payment) &&
        Objects.equals(this.destinationId, utXODestination.destinationId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(smartContract, payment, destinationId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UTXODestination {\n");
    sb.append("    smartContract: ").append(toIndentedString(smartContract)).append("\n");
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
