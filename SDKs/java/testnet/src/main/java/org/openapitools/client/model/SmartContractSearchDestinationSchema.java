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
import org.openapitools.client.model.SmartContractSearchSchema;

/**
 * SmartContractSearchDestinationSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class SmartContractSearchDestinationSchema {
  public static final String SERIALIZED_NAME_SMART_CONTRACT = "smartContract";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT)
  private SmartContractSearchSchema smartContract;


  public SmartContractSearchDestinationSchema smartContract(SmartContractSearchSchema smartContract) {
    
    this.smartContract = smartContract;
    return this;
  }

   /**
   * Get smartContract
   * @return smartContract
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public SmartContractSearchSchema getSmartContract() {
    return smartContract;
  }


  public void setSmartContract(SmartContractSearchSchema smartContract) {
    this.smartContract = smartContract;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SmartContractSearchDestinationSchema smartContractSearchDestinationSchema = (SmartContractSearchDestinationSchema) o;
    return Objects.equals(this.smartContract, smartContractSearchDestinationSchema.smartContract);
  }

  @Override
  public int hashCode() {
    return Objects.hash(smartContract);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SmartContractSearchDestinationSchema {\n");
    sb.append("    smartContract: ").append(toIndentedString(smartContract)).append("\n");
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

