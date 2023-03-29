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
import org.openapitools.client.model.SmartContract;

/**
 * Where is this transaction coming from
 */
@ApiModel(description = "Where is this transaction coming from")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class Origin {
  public static final String SERIALIZED_NAME_SEQUENCE = "sequence";
  @SerializedName(SERIALIZED_NAME_SEQUENCE)
  private String sequence;

  public static final String SERIALIZED_NAME_SMART_CONTRACT = "smartContract";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT)
  private SmartContract smartContract;

  public static final String SERIALIZED_NAME_ORIGIN_ID = "originId";
  @SerializedName(SERIALIZED_NAME_ORIGIN_ID)
  private String originId;


  public Origin sequence(String sequence) {
    
    this.sequence = sequence;
    return this;
  }

   /**
   * Get sequence
   * @return sequence
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSequence() {
    return sequence;
  }


  public void setSequence(String sequence) {
    this.sequence = sequence;
  }


  public Origin smartContract(SmartContract smartContract) {
    
    this.smartContract = smartContract;
    return this;
  }

   /**
   * Get smartContract
   * @return smartContract
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public SmartContract getSmartContract() {
    return smartContract;
  }


  public void setSmartContract(SmartContract smartContract) {
    this.smartContract = smartContract;
  }


  public Origin originId(String originId) {
    
    this.originId = originId;
    return this;
  }

   /**
   * The unique identifier of the origin
   * @return originId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unique identifier of the origin")

  public String getOriginId() {
    return originId;
  }


  public void setOriginId(String originId) {
    this.originId = originId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Origin origin = (Origin) o;
    return Objects.equals(this.sequence, origin.sequence) &&
        Objects.equals(this.smartContract, origin.smartContract) &&
        Objects.equals(this.originId, origin.originId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(sequence, smartContract, originId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Origin {\n");
    sb.append("    sequence: ").append(toIndentedString(sequence)).append("\n");
    sb.append("    smartContract: ").append(toIndentedString(smartContract)).append("\n");
    sb.append("    originId: ").append(toIndentedString(originId)).append("\n");
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

