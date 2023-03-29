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
import org.openapitools.client.model.CreditRequestDetailsSchema;
import org.openapitools.client.model.Location;

/**
 * PrepareCreditTransactionRequestSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class PrepareCreditTransactionRequestSchema {
  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  /**
   * The type of the transaction
   */
  @JsonAdapter(TypeEnum.Adapter.class)
  public enum TypeEnum {
    PAYMENT("Payment"),
    
    TRANSFER("Transfer"),
    
    CONTRACT_INVOKE("Contract Invoke");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static TypeEnum fromValue(String value) {
      for (TypeEnum b : TypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<TypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final TypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public TypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return TypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private TypeEnum type;

  /**
   * This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
   */
  @JsonAdapter(UrgencyEnum.Adapter.class)
  public enum UrgencyEnum {
    NORMAL("Normal"),
    
    FAST("Fast"),
    
    URGENT("Urgent");

    private String value;

    UrgencyEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static UrgencyEnum fromValue(String value) {
      for (UrgencyEnum b : UrgencyEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<UrgencyEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final UrgencyEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public UrgencyEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return UrgencyEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_URGENCY = "urgency";
  @SerializedName(SERIALIZED_NAME_URGENCY)
  private UrgencyEnum urgency;

  public static final String SERIALIZED_NAME_REQUEST_DETAILS = "requestDetails";
  @SerializedName(SERIALIZED_NAME_REQUEST_DETAILS)
  private CreditRequestDetailsSchema requestDetails;


  public PrepareCreditTransactionRequestSchema location(Location location) {
    
    this.location = location;
    return this;
  }

   /**
   * Get location
   * @return location
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Location getLocation() {
    return location;
  }


  public void setLocation(Location location) {
    this.location = location;
  }


  public PrepareCreditTransactionRequestSchema type(TypeEnum type) {
    
    this.type = type;
    return this;
  }

   /**
   * The type of the transaction
   * @return type
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "The type of the transaction")

  public TypeEnum getType() {
    return type;
  }


  public void setType(TypeEnum type) {
    this.type = type;
  }


  public PrepareCreditTransactionRequestSchema urgency(UrgencyEnum urgency) {
    
    this.urgency = urgency;
    return this;
  }

   /**
   * This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
   * @return urgency
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal")

  public UrgencyEnum getUrgency() {
    return urgency;
  }


  public void setUrgency(UrgencyEnum urgency) {
    this.urgency = urgency;
  }


  public PrepareCreditTransactionRequestSchema requestDetails(CreditRequestDetailsSchema requestDetails) {
    
    this.requestDetails = requestDetails;
    return this;
  }

   /**
   * Get requestDetails
   * @return requestDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public CreditRequestDetailsSchema getRequestDetails() {
    return requestDetails;
  }


  public void setRequestDetails(CreditRequestDetailsSchema requestDetails) {
    this.requestDetails = requestDetails;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema = (PrepareCreditTransactionRequestSchema) o;
    return Objects.equals(this.location, prepareCreditTransactionRequestSchema.location) &&
        Objects.equals(this.type, prepareCreditTransactionRequestSchema.type) &&
        Objects.equals(this.urgency, prepareCreditTransactionRequestSchema.urgency) &&
        Objects.equals(this.requestDetails, prepareCreditTransactionRequestSchema.requestDetails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(location, type, urgency, requestDetails);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PrepareCreditTransactionRequestSchema {\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    urgency: ").append(toIndentedString(urgency)).append("\n");
    sb.append("    requestDetails: ").append(toIndentedString(requestDetails)).append("\n");
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

