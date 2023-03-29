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
import java.util.UUID;

/**
 * Lock Details of the tokens
 */
@ApiModel(description = "Lock Details of the tokens")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class LockDetails {
  public static final String SERIALIZED_NAME_EXPIRY_DATE = "expiryDate";
  @SerializedName(SERIALIZED_NAME_EXPIRY_DATE)
  private String expiryDate;

  public static final String SERIALIZED_NAME_LOCK_ID = "lockId";
  @SerializedName(SERIALIZED_NAME_LOCK_ID)
  private UUID lockId;

  public static final String SERIALIZED_NAME_ACCOUNT_ID = "accountId";
  @SerializedName(SERIALIZED_NAME_ACCOUNT_ID)
  private String accountId;

  public static final String SERIALIZED_NAME_AMOUNT = "amount";
  @SerializedName(SERIALIZED_NAME_AMOUNT)
  private String amount;

  public static final String SERIALIZED_NAME_UNIT = "unit";
  @SerializedName(SERIALIZED_NAME_UNIT)
  private String unit;

  public static final String SERIALIZED_NAME_ACCOUNT_OWNING_INSTITUTION_ID = "accountOwningInstitutionId";
  @SerializedName(SERIALIZED_NAME_ACCOUNT_OWNING_INSTITUTION_ID)
  private String accountOwningInstitutionId;

  public static final String SERIALIZED_NAME_LOCK_DESCRIPTION = "lockDescription";
  @SerializedName(SERIALIZED_NAME_LOCK_DESCRIPTION)
  private String lockDescription;

  public static final String SERIALIZED_NAME_PAYEE_ID = "payeeId";
  @SerializedName(SERIALIZED_NAME_PAYEE_ID)
  private String payeeId;

  public static final String SERIALIZED_NAME_SECRET = "secret";
  @SerializedName(SERIALIZED_NAME_SECRET)
  private String secret;

  public static final String SERIALIZED_NAME_HASH = "hash";
  @SerializedName(SERIALIZED_NAME_HASH)
  private String hash;

  public static final String SERIALIZED_NAME_PAYEE_OWNING_INSTITUTION_ID = "payeeOwningInstitutionId";
  @SerializedName(SERIALIZED_NAME_PAYEE_OWNING_INSTITUTION_ID)
  private String payeeOwningInstitutionId;

  public static final String SERIALIZED_NAME_LOCK_OWNING_INSTITUTION_ID = "lockOwningInstitutionId";
  @SerializedName(SERIALIZED_NAME_LOCK_OWNING_INSTITUTION_ID)
  private String lockOwningInstitutionId;


  public LockDetails expiryDate(String expiryDate) {
    
    this.expiryDate = expiryDate;
    return this;
  }

   /**
   * Get expiryDate
   * @return expiryDate
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getExpiryDate() {
    return expiryDate;
  }


  public void setExpiryDate(String expiryDate) {
    this.expiryDate = expiryDate;
  }


  public LockDetails lockId(UUID lockId) {
    
    this.lockId = lockId;
    return this;
  }

   /**
   * Get lockId
   * @return lockId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public UUID getLockId() {
    return lockId;
  }


  public void setLockId(UUID lockId) {
    this.lockId = lockId;
  }


  public LockDetails accountId(String accountId) {
    
    this.accountId = accountId;
    return this;
  }

   /**
   * Get accountId
   * @return accountId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getAccountId() {
    return accountId;
  }


  public void setAccountId(String accountId) {
    this.accountId = accountId;
  }


  public LockDetails amount(String amount) {
    
    this.amount = amount;
    return this;
  }

   /**
   * Get amount
   * @return amount
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getAmount() {
    return amount;
  }


  public void setAmount(String amount) {
    this.amount = amount;
  }


  public LockDetails unit(String unit) {
    
    this.unit = unit;
    return this;
  }

   /**
   * Get unit
   * @return unit
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getUnit() {
    return unit;
  }


  public void setUnit(String unit) {
    this.unit = unit;
  }


  public LockDetails accountOwningInstitutionId(String accountOwningInstitutionId) {
    
    this.accountOwningInstitutionId = accountOwningInstitutionId;
    return this;
  }

   /**
   * Get accountOwningInstitutionId
   * @return accountOwningInstitutionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getAccountOwningInstitutionId() {
    return accountOwningInstitutionId;
  }


  public void setAccountOwningInstitutionId(String accountOwningInstitutionId) {
    this.accountOwningInstitutionId = accountOwningInstitutionId;
  }


  public LockDetails lockDescription(String lockDescription) {
    
    this.lockDescription = lockDescription;
    return this;
  }

   /**
   * Get lockDescription
   * @return lockDescription
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getLockDescription() {
    return lockDescription;
  }


  public void setLockDescription(String lockDescription) {
    this.lockDescription = lockDescription;
  }


  public LockDetails payeeId(String payeeId) {
    
    this.payeeId = payeeId;
    return this;
  }

   /**
   * Get payeeId
   * @return payeeId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getPayeeId() {
    return payeeId;
  }


  public void setPayeeId(String payeeId) {
    this.payeeId = payeeId;
  }


  public LockDetails secret(String secret) {
    
    this.secret = secret;
    return this;
  }

   /**
   * Get secret
   * @return secret
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSecret() {
    return secret;
  }


  public void setSecret(String secret) {
    this.secret = secret;
  }


  public LockDetails hash(String hash) {
    
    this.hash = hash;
    return this;
  }

   /**
   * Get hash
   * @return hash
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getHash() {
    return hash;
  }


  public void setHash(String hash) {
    this.hash = hash;
  }


  public LockDetails payeeOwningInstitutionId(String payeeOwningInstitutionId) {
    
    this.payeeOwningInstitutionId = payeeOwningInstitutionId;
    return this;
  }

   /**
   * Get payeeOwningInstitutionId
   * @return payeeOwningInstitutionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getPayeeOwningInstitutionId() {
    return payeeOwningInstitutionId;
  }


  public void setPayeeOwningInstitutionId(String payeeOwningInstitutionId) {
    this.payeeOwningInstitutionId = payeeOwningInstitutionId;
  }


  public LockDetails lockOwningInstitutionId(String lockOwningInstitutionId) {
    
    this.lockOwningInstitutionId = lockOwningInstitutionId;
    return this;
  }

   /**
   * Get lockOwningInstitutionId
   * @return lockOwningInstitutionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getLockOwningInstitutionId() {
    return lockOwningInstitutionId;
  }


  public void setLockOwningInstitutionId(String lockOwningInstitutionId) {
    this.lockOwningInstitutionId = lockOwningInstitutionId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LockDetails lockDetails = (LockDetails) o;
    return Objects.equals(this.expiryDate, lockDetails.expiryDate) &&
        Objects.equals(this.lockId, lockDetails.lockId) &&
        Objects.equals(this.accountId, lockDetails.accountId) &&
        Objects.equals(this.amount, lockDetails.amount) &&
        Objects.equals(this.unit, lockDetails.unit) &&
        Objects.equals(this.accountOwningInstitutionId, lockDetails.accountOwningInstitutionId) &&
        Objects.equals(this.lockDescription, lockDetails.lockDescription) &&
        Objects.equals(this.payeeId, lockDetails.payeeId) &&
        Objects.equals(this.secret, lockDetails.secret) &&
        Objects.equals(this.hash, lockDetails.hash) &&
        Objects.equals(this.payeeOwningInstitutionId, lockDetails.payeeOwningInstitutionId) &&
        Objects.equals(this.lockOwningInstitutionId, lockDetails.lockOwningInstitutionId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(expiryDate, lockId, accountId, amount, unit, accountOwningInstitutionId, lockDescription, payeeId, secret, hash, payeeOwningInstitutionId, lockOwningInstitutionId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LockDetails {\n");
    sb.append("    expiryDate: ").append(toIndentedString(expiryDate)).append("\n");
    sb.append("    lockId: ").append(toIndentedString(lockId)).append("\n");
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
    sb.append("    accountOwningInstitutionId: ").append(toIndentedString(accountOwningInstitutionId)).append("\n");
    sb.append("    lockDescription: ").append(toIndentedString(lockDescription)).append("\n");
    sb.append("    payeeId: ").append(toIndentedString(payeeId)).append("\n");
    sb.append("    secret: ").append(toIndentedString(secret)).append("\n");
    sb.append("    hash: ").append(toIndentedString(hash)).append("\n");
    sb.append("    payeeOwningInstitutionId: ").append(toIndentedString(payeeOwningInstitutionId)).append("\n");
    sb.append("    lockOwningInstitutionId: ").append(toIndentedString(lockOwningInstitutionId)).append("\n");
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
