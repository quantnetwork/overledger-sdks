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
import org.openapitools.client.model.AdditionalOwnerRemoveSecondarySchema;
import org.openapitools.client.model.OwnerRemoveSecondarySchema;

/**
 * RemoveSecondaryAccountDetailsSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class RemoveSecondaryAccountDetailsSchema {
  public static final String SERIALIZED_NAME_OWNER = "owner";
  @SerializedName(SERIALIZED_NAME_OWNER)
  private OwnerRemoveSecondarySchema owner;

  public static final String SERIALIZED_NAME_ADDITIONAL_OWNER = "additionalOwner";
  @SerializedName(SERIALIZED_NAME_ADDITIONAL_OWNER)
  private AdditionalOwnerRemoveSecondarySchema additionalOwner;

  public static final String SERIALIZED_NAME_MESSAGE = "message";
  @SerializedName(SERIALIZED_NAME_MESSAGE)
  private String message;

  public static final String SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE = "overledgerSigningType";
  @SerializedName(SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE)
  private String overledgerSigningType;


  public RemoveSecondaryAccountDetailsSchema owner(OwnerRemoveSecondarySchema owner) {
    
    this.owner = owner;
    return this;
  }

   /**
   * Get owner
   * @return owner
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public OwnerRemoveSecondarySchema getOwner() {
    return owner;
  }


  public void setOwner(OwnerRemoveSecondarySchema owner) {
    this.owner = owner;
  }


  public RemoveSecondaryAccountDetailsSchema additionalOwner(AdditionalOwnerRemoveSecondarySchema additionalOwner) {
    
    this.additionalOwner = additionalOwner;
    return this;
  }

   /**
   * Get additionalOwner
   * @return additionalOwner
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public AdditionalOwnerRemoveSecondarySchema getAdditionalOwner() {
    return additionalOwner;
  }


  public void setAdditionalOwner(AdditionalOwnerRemoveSecondarySchema additionalOwner) {
    this.additionalOwner = additionalOwner;
  }


  public RemoveSecondaryAccountDetailsSchema message(String message) {
    
    this.message = message;
    return this;
  }

   /**
   * Any text-based element of the data payload
   * @return message
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Any text-based element of the data payload")

  public String getMessage() {
    return message;
  }


  public void setMessage(String message) {
    this.message = message;
  }


  public RemoveSecondaryAccountDetailsSchema overledgerSigningType(String overledgerSigningType) {
    
    this.overledgerSigningType = overledgerSigningType;
    return this;
  }

   /**
   * Get overledgerSigningType
   * @return overledgerSigningType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getOverledgerSigningType() {
    return overledgerSigningType;
  }


  public void setOverledgerSigningType(String overledgerSigningType) {
    this.overledgerSigningType = overledgerSigningType;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RemoveSecondaryAccountDetailsSchema removeSecondaryAccountDetailsSchema = (RemoveSecondaryAccountDetailsSchema) o;
    return Objects.equals(this.owner, removeSecondaryAccountDetailsSchema.owner) &&
        Objects.equals(this.additionalOwner, removeSecondaryAccountDetailsSchema.additionalOwner) &&
        Objects.equals(this.message, removeSecondaryAccountDetailsSchema.message) &&
        Objects.equals(this.overledgerSigningType, removeSecondaryAccountDetailsSchema.overledgerSigningType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(owner, additionalOwner, message, overledgerSigningType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RemoveSecondaryAccountDetailsSchema {\n");
    sb.append("    owner: ").append(toIndentedString(owner)).append("\n");
    sb.append("    additionalOwner: ").append(toIndentedString(additionalOwner)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
    sb.append("    overledgerSigningType: ").append(toIndentedString(overledgerSigningType)).append("\n");
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

