/*
 * Quant Overledger API
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import org.openapitools.client.model.Fee;

/**
 * PrepareSearchResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-03-17T18:03:02.158365Z[Europe/London]")
public class PrepareSearchResponseSchema {
  public static final String SERIALIZED_NAME_GATEWAY_FEE = "gatewayFee";
  @SerializedName(SERIALIZED_NAME_GATEWAY_FEE)
  private Fee gatewayFee;

  public static final String SERIALIZED_NAME_REQUEST_ID = "requestId";
  @SerializedName(SERIALIZED_NAME_REQUEST_ID)
  private String requestId;


  public PrepareSearchResponseSchema gatewayFee(Fee gatewayFee) {
    
    this.gatewayFee = gatewayFee;
    return this;
  }

   /**
   * Get gatewayFee
   * @return gatewayFee
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Fee getGatewayFee() {
    return gatewayFee;
  }


  public void setGatewayFee(Fee gatewayFee) {
    this.gatewayFee = gatewayFee;
  }


  public PrepareSearchResponseSchema requestId(String requestId) {
    
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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PrepareSearchResponseSchema prepareSearchResponseSchema = (PrepareSearchResponseSchema) o;
    return Objects.equals(this.gatewayFee, prepareSearchResponseSchema.gatewayFee) &&
        Objects.equals(this.requestId, prepareSearchResponseSchema.requestId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(gatewayFee, requestId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PrepareSearchResponseSchema {\n");
    sb.append("    gatewayFee: ").append(toIndentedString(gatewayFee)).append("\n");
    sb.append("    requestId: ").append(toIndentedString(requestId)).append("\n");
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

