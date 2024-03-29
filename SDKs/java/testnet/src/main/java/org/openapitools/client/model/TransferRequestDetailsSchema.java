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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.DestinationTransferSchema;
import org.openapitools.client.model.OriginTransferSchema;

/**
 * TransferRequestDetailsSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class TransferRequestDetailsSchema {
  public static final String SERIALIZED_NAME_DESTINATION = "destination";
  @SerializedName(SERIALIZED_NAME_DESTINATION)
  private List<DestinationTransferSchema> destination = null;

  public static final String SERIALIZED_NAME_MESSAGE = "message";
  @SerializedName(SERIALIZED_NAME_MESSAGE)
  private String message;

  public static final String SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE = "overledgerSigningType";
  @SerializedName(SERIALIZED_NAME_OVERLEDGER_SIGNING_TYPE)
  private String overledgerSigningType;

  public static final String SERIALIZED_NAME_ORIGIN = "origin";
  @SerializedName(SERIALIZED_NAME_ORIGIN)
  private List<OriginTransferSchema> origin = null;


  public TransferRequestDetailsSchema destination(List<DestinationTransferSchema> destination) {
    
    this.destination = destination;
    return this;
  }

  public TransferRequestDetailsSchema addDestinationItem(DestinationTransferSchema destinationItem) {
    if (this.destination == null) {
      this.destination = new ArrayList<DestinationTransferSchema>();
    }
    this.destination.add(destinationItem);
    return this;
  }

   /**
   * Get destination
   * @return destination
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<DestinationTransferSchema> getDestination() {
    return destination;
  }


  public void setDestination(List<DestinationTransferSchema> destination) {
    this.destination = destination;
  }


  public TransferRequestDetailsSchema message(String message) {
    
    this.message = message;
    return this;
  }

   /**
   * Get message
   * @return message
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getMessage() {
    return message;
  }


  public void setMessage(String message) {
    this.message = message;
  }


  public TransferRequestDetailsSchema overledgerSigningType(String overledgerSigningType) {
    
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


  public TransferRequestDetailsSchema origin(List<OriginTransferSchema> origin) {
    
    this.origin = origin;
    return this;
  }

  public TransferRequestDetailsSchema addOriginItem(OriginTransferSchema originItem) {
    if (this.origin == null) {
      this.origin = new ArrayList<OriginTransferSchema>();
    }
    this.origin.add(originItem);
    return this;
  }

   /**
   * Get origin
   * @return origin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<OriginTransferSchema> getOrigin() {
    return origin;
  }


  public void setOrigin(List<OriginTransferSchema> origin) {
    this.origin = origin;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TransferRequestDetailsSchema transferRequestDetailsSchema = (TransferRequestDetailsSchema) o;
    return Objects.equals(this.destination, transferRequestDetailsSchema.destination) &&
        Objects.equals(this.message, transferRequestDetailsSchema.message) &&
        Objects.equals(this.overledgerSigningType, transferRequestDetailsSchema.overledgerSigningType) &&
        Objects.equals(this.origin, transferRequestDetailsSchema.origin);
  }

  @Override
  public int hashCode() {
    return Objects.hash(destination, message, overledgerSigningType, origin);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TransferRequestDetailsSchema {\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
    sb.append("    overledgerSigningType: ").append(toIndentedString(overledgerSigningType)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
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

