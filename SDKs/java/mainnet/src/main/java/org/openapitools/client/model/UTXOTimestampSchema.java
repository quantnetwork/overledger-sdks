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

/**
 * UTXOTimestampSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-11-01T15:12:40.004989Z[Europe/London]")
public class UTXOTimestampSchema {
  public static final String SERIALIZED_NAME_NANO = "nano";
  @SerializedName(SERIALIZED_NAME_NANO)
  private String nano;

  public static final String SERIALIZED_NAME_EPOCH_SECOND = "epochSecond";
  @SerializedName(SERIALIZED_NAME_EPOCH_SECOND)
  private String epochSecond;


  public UTXOTimestampSchema nano(String nano) {
    
    this.nano = nano;
    return this;
  }

   /**
   * Get nano
   * @return nano
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getNano() {
    return nano;
  }


  public void setNano(String nano) {
    this.nano = nano;
  }


  public UTXOTimestampSchema epochSecond(String epochSecond) {
    
    this.epochSecond = epochSecond;
    return this;
  }

   /**
   * Get epochSecond
   * @return epochSecond
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getEpochSecond() {
    return epochSecond;
  }


  public void setEpochSecond(String epochSecond) {
    this.epochSecond = epochSecond;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UTXOTimestampSchema utXOTimestampSchema = (UTXOTimestampSchema) o;
    return Objects.equals(this.nano, utXOTimestampSchema.nano) &&
        Objects.equals(this.epochSecond, utXOTimestampSchema.epochSecond);
  }

  @Override
  public int hashCode() {
    return Objects.hash(nano, epochSecond);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UTXOTimestampSchema {\n");
    sb.append("    nano: ").append(toIndentedString(nano)).append("\n");
    sb.append("    epochSecond: ").append(toIndentedString(epochSecond)).append("\n");
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

