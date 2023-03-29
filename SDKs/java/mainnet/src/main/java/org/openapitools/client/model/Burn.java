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
 * Burn
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class Burn {
  public static final String SERIALIZED_NAME_TOKEN_NAME = "tokenName";
  @SerializedName(SERIALIZED_NAME_TOKEN_NAME)
  private String tokenName;

  public static final String SERIALIZED_NAME_AMOUNT = "amount";
  @SerializedName(SERIALIZED_NAME_AMOUNT)
  private String amount;

  public static final String SERIALIZED_NAME_UNIT = "unit";
  @SerializedName(SERIALIZED_NAME_UNIT)
  private String unit;

  public static final String SERIALIZED_NAME_METADATA = "metadata";
  @SerializedName(SERIALIZED_NAME_METADATA)
  private String metadata;

  public static final String SERIALIZED_NAME_TOKEN_ID = "tokenId";
  @SerializedName(SERIALIZED_NAME_TOKEN_ID)
  private String tokenId;


  public Burn tokenName(String tokenName) {
    
    this.tokenName = tokenName;
    return this;
  }

   /**
   * Name of the token
   * @return tokenName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Name of the token")

  public String getTokenName() {
    return tokenName;
  }


  public void setTokenName(String tokenName) {
    this.tokenName = tokenName;
  }


  public Burn amount(String amount) {
    
    this.amount = amount;
    return this;
  }

   /**
   * The amount of a currency
   * @return amount
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The amount of a currency")

  public String getAmount() {
    return amount;
  }


  public void setAmount(String amount) {
    this.amount = amount;
  }


  public Burn unit(String unit) {
    
    this.unit = unit;
    return this;
  }

   /**
   * The unit of this currency/token
   * @return unit
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unit of this currency/token")

  public String getUnit() {
    return unit;
  }


  public void setUnit(String unit) {
    this.unit = unit;
  }


  public Burn metadata(String metadata) {
    
    this.metadata = metadata;
    return this;
  }

   /**
   * (Optional) String of metadata
   * @return metadata
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "(Optional) String of metadata")

  public String getMetadata() {
    return metadata;
  }


  public void setMetadata(String metadata) {
    this.metadata = metadata;
  }


  public Burn tokenId(String tokenId) {
    
    this.tokenId = tokenId;
    return this;
  }

   /**
   * Unique identifier for the specific token
   * @return tokenId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Unique identifier for the specific token")

  public String getTokenId() {
    return tokenId;
  }


  public void setTokenId(String tokenId) {
    this.tokenId = tokenId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Burn burn = (Burn) o;
    return Objects.equals(this.tokenName, burn.tokenName) &&
        Objects.equals(this.amount, burn.amount) &&
        Objects.equals(this.unit, burn.unit) &&
        Objects.equals(this.metadata, burn.metadata) &&
        Objects.equals(this.tokenId, burn.tokenId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(tokenName, amount, unit, metadata, tokenId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Burn {\n");
    sb.append("    tokenName: ").append(toIndentedString(tokenName)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
    sb.append("    metadata: ").append(toIndentedString(metadata)).append("\n");
    sb.append("    tokenId: ").append(toIndentedString(tokenId)).append("\n");
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

