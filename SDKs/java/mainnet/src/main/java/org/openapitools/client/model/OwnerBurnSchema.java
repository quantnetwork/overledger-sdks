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
import org.openapitools.client.model.BurnSchema;

/**
 * Who is the owner of the tokens
 */
@ApiModel(description = "Who is the owner of the tokens")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class OwnerBurnSchema {
  public static final String SERIALIZED_NAME_ACCOUNT_ID = "accountId";
  @SerializedName(SERIALIZED_NAME_ACCOUNT_ID)
  private String accountId;

  public static final String SERIALIZED_NAME_BURN = "burn";
  @SerializedName(SERIALIZED_NAME_BURN)
  private BurnSchema burn;


  public OwnerBurnSchema accountId(String accountId) {
    
    this.accountId = accountId;
    return this;
  }

   /**
   * Unique Identifier of the owner
   * @return accountId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Unique Identifier of the owner")

  public String getAccountId() {
    return accountId;
  }


  public void setAccountId(String accountId) {
    this.accountId = accountId;
  }


  public OwnerBurnSchema burn(BurnSchema burn) {
    
    this.burn = burn;
    return this;
  }

   /**
   * Get burn
   * @return burn
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BurnSchema getBurn() {
    return burn;
  }


  public void setBurn(BurnSchema burn) {
    this.burn = burn;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OwnerBurnSchema ownerBurnSchema = (OwnerBurnSchema) o;
    return Objects.equals(this.accountId, ownerBurnSchema.accountId) &&
        Objects.equals(this.burn, ownerBurnSchema.burn);
  }

  @Override
  public int hashCode() {
    return Objects.hash(accountId, burn);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OwnerBurnSchema {\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    burn: ").append(toIndentedString(burn)).append("\n");
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

