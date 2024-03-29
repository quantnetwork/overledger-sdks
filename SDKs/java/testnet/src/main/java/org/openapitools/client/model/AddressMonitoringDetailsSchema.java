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
import org.openapitools.client.model.Location;
import org.openapitools.client.model.ResourceMonitoredAddressDetails;
import org.threeten.bp.OffsetDateTime;

/**
 * AddressMonitoringDetailsSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class AddressMonitoringDetailsSchema {
  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_ADDRESS_DETAILS = "addressDetails";
  @SerializedName(SERIALIZED_NAME_ADDRESS_DETAILS)
  private ResourceMonitoredAddressDetails addressDetails;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private OffsetDateTime timestamp;


  public AddressMonitoringDetailsSchema location(Location location) {
    
    this.location = location;
    return this;
  }

   /**
   * Get location
   * @return location
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Location getLocation() {
    return location;
  }


  public void setLocation(Location location) {
    this.location = location;
  }


  public AddressMonitoringDetailsSchema addressDetails(ResourceMonitoredAddressDetails addressDetails) {
    
    this.addressDetails = addressDetails;
    return this;
  }

   /**
   * Get addressDetails
   * @return addressDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoredAddressDetails getAddressDetails() {
    return addressDetails;
  }


  public void setAddressDetails(ResourceMonitoredAddressDetails addressDetails) {
    this.addressDetails = addressDetails;
  }


  public AddressMonitoringDetailsSchema type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public AddressMonitoringDetailsSchema timestamp(OffsetDateTime timestamp) {
    
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public OffsetDateTime getTimestamp() {
    return timestamp;
  }


  public void setTimestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AddressMonitoringDetailsSchema addressMonitoringDetailsSchema = (AddressMonitoringDetailsSchema) o;
    return Objects.equals(this.location, addressMonitoringDetailsSchema.location) &&
        Objects.equals(this.addressDetails, addressMonitoringDetailsSchema.addressDetails) &&
        Objects.equals(this.type, addressMonitoringDetailsSchema.type) &&
        Objects.equals(this.timestamp, addressMonitoringDetailsSchema.timestamp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(location, addressDetails, type, timestamp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AddressMonitoringDetailsSchema {\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    addressDetails: ").append(toIndentedString(addressDetails)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
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

