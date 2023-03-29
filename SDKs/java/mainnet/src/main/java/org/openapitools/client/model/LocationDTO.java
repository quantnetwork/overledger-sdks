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
 * LocationDTO
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class LocationDTO {
  public static final String SERIALIZED_NAME_TECHNOLOGY = "technology";
  @SerializedName(SERIALIZED_NAME_TECHNOLOGY)
  private String technology;

  public static final String SERIALIZED_NAME_NETWORK = "network";
  @SerializedName(SERIALIZED_NAME_NETWORK)
  private String network;


  public LocationDTO technology(String technology) {
    
    this.technology = technology;
    return this;
  }

   /**
   * Get technology
   * @return technology
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getTechnology() {
    return technology;
  }


  public void setTechnology(String technology) {
    this.technology = technology;
  }


  public LocationDTO network(String network) {
    
    this.network = network;
    return this;
  }

   /**
   * Get network
   * @return network
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getNetwork() {
    return network;
  }


  public void setNetwork(String network) {
    this.network = network;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LocationDTO locationDTO = (LocationDTO) o;
    return Objects.equals(this.technology, locationDTO.technology) &&
        Objects.equals(this.network, locationDTO.network);
  }

  @Override
  public int hashCode() {
    return Objects.hash(technology, network);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LocationDTO {\n");
    sb.append("    technology: ").append(toIndentedString(technology)).append("\n");
    sb.append("    network: ").append(toIndentedString(network)).append("\n");
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
