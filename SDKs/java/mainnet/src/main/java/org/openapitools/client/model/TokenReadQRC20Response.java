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
import org.openapitools.client.model.Location;
import org.openapitools.client.model.TokenReadResponseDetails;

/**
 * TokenReadQRC20Response
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class TokenReadQRC20Response {
  public static final String SERIALIZED_NAME_RESPONSE_DETAILS = "responseDetails";
  @SerializedName(SERIALIZED_NAME_RESPONSE_DETAILS)
  private List<TokenReadResponseDetails> responseDetails = null;

  public static final String SERIALIZED_NAME_REQUEST_ID = "requestId";
  @SerializedName(SERIALIZED_NAME_REQUEST_ID)
  private String requestId;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;


  public TokenReadQRC20Response responseDetails(List<TokenReadResponseDetails> responseDetails) {
    
    this.responseDetails = responseDetails;
    return this;
  }

  public TokenReadQRC20Response addResponseDetailsItem(TokenReadResponseDetails responseDetailsItem) {
    if (this.responseDetails == null) {
      this.responseDetails = new ArrayList<TokenReadResponseDetails>();
    }
    this.responseDetails.add(responseDetailsItem);
    return this;
  }

   /**
   * Get responseDetails
   * @return responseDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<TokenReadResponseDetails> getResponseDetails() {
    return responseDetails;
  }


  public void setResponseDetails(List<TokenReadResponseDetails> responseDetails) {
    this.responseDetails = responseDetails;
  }


  public TokenReadQRC20Response requestId(String requestId) {
    
    this.requestId = requestId;
    return this;
  }

   /**
   * The ID assigned to a preparation request in Overledger
   * @return requestId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The ID assigned to a preparation request in Overledger")

  public String getRequestId() {
    return requestId;
  }


  public void setRequestId(String requestId) {
    this.requestId = requestId;
  }


  public TokenReadQRC20Response location(Location location) {
    
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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TokenReadQRC20Response tokenReadQRC20Response = (TokenReadQRC20Response) o;
    return Objects.equals(this.responseDetails, tokenReadQRC20Response.responseDetails) &&
        Objects.equals(this.requestId, tokenReadQRC20Response.requestId) &&
        Objects.equals(this.location, tokenReadQRC20Response.location);
  }

  @Override
  public int hashCode() {
    return Objects.hash(responseDetails, requestId, location);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TokenReadQRC20Response {\n");
    sb.append("    responseDetails: ").append(toIndentedString(responseDetails)).append("\n");
    sb.append("    requestId: ").append(toIndentedString(requestId)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
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

