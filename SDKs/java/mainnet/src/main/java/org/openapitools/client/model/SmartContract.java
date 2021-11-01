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
import org.openapitools.client.model.Function;

/**
 * Computer program storage in a DLT system where the outcome is recorded on the distributed ledger
 */
@ApiModel(description = "Computer program storage in a DLT system where the outcome is recorded on the distributed ledger")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:38:46.604397+01:00[Europe/London]")
public class SmartContract {
  public static final String SERIALIZED_NAME_FUNCTION = "function";
  @SerializedName(SERIALIZED_NAME_FUNCTION)
  private Function function;

  public static final String SERIALIZED_NAME_DETAIL = "detail";
  @SerializedName(SERIALIZED_NAME_DETAIL)
  private String detail;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_SMART_CONTRACT_ID = "smartContractId";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_ID)
  private String smartContractId;

  public static final String SERIALIZED_NAME_EXTRA_FIELDS = "extraFields";
  @SerializedName(SERIALIZED_NAME_EXTRA_FIELDS)
  private Object extraFields;


  public SmartContract function(Function function) {
    
    this.function = function;
    return this;
  }

   /**
   * Get function
   * @return function
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Function getFunction() {
    return function;
  }


  public void setFunction(Function function) {
    this.function = function;
  }


  public SmartContract detail(String detail) {
    
    this.detail = detail;
    return this;
  }

   /**
   * Get detail
   * @return detail
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getDetail() {
    return detail;
  }


  public void setDetail(String detail) {
    this.detail = detail;
  }


  public SmartContract type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Information on the object type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Information on the object type")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public SmartContract smartContractId(String smartContractId) {
    
    this.smartContractId = smartContractId;
    return this;
  }

   /**
   * Get smartContractId
   * @return smartContractId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSmartContractId() {
    return smartContractId;
  }


  public void setSmartContractId(String smartContractId) {
    this.smartContractId = smartContractId;
  }


  public SmartContract extraFields(Object extraFields) {
    
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
    SmartContract smartContract = (SmartContract) o;
    return Objects.equals(this.function, smartContract.function) &&
        Objects.equals(this.detail, smartContract.detail) &&
        Objects.equals(this.type, smartContract.type) &&
        Objects.equals(this.smartContractId, smartContract.smartContractId) &&
        Objects.equals(this.extraFields, smartContract.extraFields);
  }

  @Override
  public int hashCode() {
    return Objects.hash(function, detail, type, smartContractId, extraFields);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SmartContract {\n");
    sb.append("    function: ").append(toIndentedString(function)).append("\n");
    sb.append("    detail: ").append(toIndentedString(detail)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    smartContractId: ").append(toIndentedString(smartContractId)).append("\n");
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
