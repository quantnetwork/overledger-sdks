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
import org.openapitools.client.model.ExecuteSearchSequenceResponse;
import org.openapitools.client.model.PrepareAndExecuteOverledgerErrorResponse;
import org.openapitools.client.model.PrepareSearchResponseSchema;

/**
 * AutoExecSearchAddressSequenceResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class AutoExecSearchAddressSequenceResponseSchema {
  public static final String SERIALIZED_NAME_PREPARE_AND_EXECUTE_OVERLEDGER_ERROR_RESPONSE = "prepareAndExecuteOverledgerErrorResponse";
  @SerializedName(SERIALIZED_NAME_PREPARE_AND_EXECUTE_OVERLEDGER_ERROR_RESPONSE)
  private PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse;

  public static final String SERIALIZED_NAME_EXECUTION_ADDRESS_SEQUENCE_SEARCH_RESPONSE = "executionAddressSequenceSearchResponse";
  @SerializedName(SERIALIZED_NAME_EXECUTION_ADDRESS_SEQUENCE_SEARCH_RESPONSE)
  private ExecuteSearchSequenceResponse executionAddressSequenceSearchResponse;

  public static final String SERIALIZED_NAME_PREPARATION_ADDRESS_SEQUENCE_SEARCH_RESPONSE = "preparationAddressSequenceSearchResponse";
  @SerializedName(SERIALIZED_NAME_PREPARATION_ADDRESS_SEQUENCE_SEARCH_RESPONSE)
  private PrepareSearchResponseSchema preparationAddressSequenceSearchResponse;


  public AutoExecSearchAddressSequenceResponseSchema prepareAndExecuteOverledgerErrorResponse(PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse) {
    
    this.prepareAndExecuteOverledgerErrorResponse = prepareAndExecuteOverledgerErrorResponse;
    return this;
  }

   /**
   * Get prepareAndExecuteOverledgerErrorResponse
   * @return prepareAndExecuteOverledgerErrorResponse
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PrepareAndExecuteOverledgerErrorResponse getPrepareAndExecuteOverledgerErrorResponse() {
    return prepareAndExecuteOverledgerErrorResponse;
  }


  public void setPrepareAndExecuteOverledgerErrorResponse(PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse) {
    this.prepareAndExecuteOverledgerErrorResponse = prepareAndExecuteOverledgerErrorResponse;
  }


  public AutoExecSearchAddressSequenceResponseSchema executionAddressSequenceSearchResponse(ExecuteSearchSequenceResponse executionAddressSequenceSearchResponse) {
    
    this.executionAddressSequenceSearchResponse = executionAddressSequenceSearchResponse;
    return this;
  }

   /**
   * Get executionAddressSequenceSearchResponse
   * @return executionAddressSequenceSearchResponse
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ExecuteSearchSequenceResponse getExecutionAddressSequenceSearchResponse() {
    return executionAddressSequenceSearchResponse;
  }


  public void setExecutionAddressSequenceSearchResponse(ExecuteSearchSequenceResponse executionAddressSequenceSearchResponse) {
    this.executionAddressSequenceSearchResponse = executionAddressSequenceSearchResponse;
  }


  public AutoExecSearchAddressSequenceResponseSchema preparationAddressSequenceSearchResponse(PrepareSearchResponseSchema preparationAddressSequenceSearchResponse) {
    
    this.preparationAddressSequenceSearchResponse = preparationAddressSequenceSearchResponse;
    return this;
  }

   /**
   * Get preparationAddressSequenceSearchResponse
   * @return preparationAddressSequenceSearchResponse
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PrepareSearchResponseSchema getPreparationAddressSequenceSearchResponse() {
    return preparationAddressSequenceSearchResponse;
  }


  public void setPreparationAddressSequenceSearchResponse(PrepareSearchResponseSchema preparationAddressSequenceSearchResponse) {
    this.preparationAddressSequenceSearchResponse = preparationAddressSequenceSearchResponse;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AutoExecSearchAddressSequenceResponseSchema autoExecSearchAddressSequenceResponseSchema = (AutoExecSearchAddressSequenceResponseSchema) o;
    return Objects.equals(this.prepareAndExecuteOverledgerErrorResponse, autoExecSearchAddressSequenceResponseSchema.prepareAndExecuteOverledgerErrorResponse) &&
        Objects.equals(this.executionAddressSequenceSearchResponse, autoExecSearchAddressSequenceResponseSchema.executionAddressSequenceSearchResponse) &&
        Objects.equals(this.preparationAddressSequenceSearchResponse, autoExecSearchAddressSequenceResponseSchema.preparationAddressSequenceSearchResponse);
  }

  @Override
  public int hashCode() {
    return Objects.hash(prepareAndExecuteOverledgerErrorResponse, executionAddressSequenceSearchResponse, preparationAddressSequenceSearchResponse);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AutoExecSearchAddressSequenceResponseSchema {\n");
    sb.append("    prepareAndExecuteOverledgerErrorResponse: ").append(toIndentedString(prepareAndExecuteOverledgerErrorResponse)).append("\n");
    sb.append("    executionAddressSequenceSearchResponse: ").append(toIndentedString(executionAddressSequenceSearchResponse)).append("\n");
    sb.append("    preparationAddressSequenceSearchResponse: ").append(toIndentedString(preparationAddressSequenceSearchResponse)).append("\n");
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

