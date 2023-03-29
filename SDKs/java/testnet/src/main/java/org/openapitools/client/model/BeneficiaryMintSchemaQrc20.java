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
import org.openapitools.client.model.MintSchemaQrc20;

/**
 * Who is the beneficiary of this transaction
 */
@ApiModel(description = "Who is the beneficiary of this transaction")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class BeneficiaryMintSchemaQrc20 {
  public static final String SERIALIZED_NAME_ACCOUNT_ID = "accountId";
  @SerializedName(SERIALIZED_NAME_ACCOUNT_ID)
  private String accountId;

  public static final String SERIALIZED_NAME_MINT = "mint";
  @SerializedName(SERIALIZED_NAME_MINT)
  private MintSchemaQrc20 mint;


  public BeneficiaryMintSchemaQrc20 accountId(String accountId) {
    
    this.accountId = accountId;
    return this;
  }

   /**
   * The unique identifiers of the beneficiaries
   * @return accountId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unique identifiers of the beneficiaries")

  public String getAccountId() {
    return accountId;
  }


  public void setAccountId(String accountId) {
    this.accountId = accountId;
  }


  public BeneficiaryMintSchemaQrc20 mint(MintSchemaQrc20 mint) {
    
    this.mint = mint;
    return this;
  }

   /**
   * Get mint
   * @return mint
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public MintSchemaQrc20 getMint() {
    return mint;
  }


  public void setMint(MintSchemaQrc20 mint) {
    this.mint = mint;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BeneficiaryMintSchemaQrc20 beneficiaryMintSchemaQrc20 = (BeneficiaryMintSchemaQrc20) o;
    return Objects.equals(this.accountId, beneficiaryMintSchemaQrc20.accountId) &&
        Objects.equals(this.mint, beneficiaryMintSchemaQrc20.mint);
  }

  @Override
  public int hashCode() {
    return Objects.hash(accountId, mint);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BeneficiaryMintSchemaQrc20 {\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    mint: ").append(toIndentedString(mint)).append("\n");
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

