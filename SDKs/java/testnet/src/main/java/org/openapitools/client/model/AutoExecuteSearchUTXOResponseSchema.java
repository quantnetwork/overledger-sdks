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
import org.openapitools.client.model.ExecuteSearchUTXOResponse;
import org.openapitools.client.model.PrepareAndExecuteOverledgerErrorResponse;
import org.openapitools.client.model.PrepareTransactionResponse;

/**
 * AutoExecuteSearchUTXOResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-03-17T18:03:02.158365Z[Europe/London]")
public class AutoExecuteSearchUTXOResponseSchema {
  public static final String SERIALIZED_NAME_EXECUTION_UTXO_SEARCH_RESPONSE = "executionUtxoSearchResponse";
  @SerializedName(SERIALIZED_NAME_EXECUTION_UTXO_SEARCH_RESPONSE)
  private ExecuteSearchUTXOResponse executionUtxoSearchResponse;

  public static final String SERIALIZED_NAME_PREPARE_AND_EXECUTE_OVERLEDGER_ERROR_RESPONSE = "prepareAndExecuteOverledgerErrorResponse";
  @SerializedName(SERIALIZED_NAME_PREPARE_AND_EXECUTE_OVERLEDGER_ERROR_RESPONSE)
  private PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse;

  public static final String SERIALIZED_NAME_PREPARATION_UTXO_SEARCH_RESPONSE = "preparationUtxoSearchResponse";
  @SerializedName(SERIALIZED_NAME_PREPARATION_UTXO_SEARCH_RESPONSE)
  private PrepareTransactionResponse preparationUtxoSearchResponse;


  public AutoExecuteSearchUTXOResponseSchema executionUtxoSearchResponse(ExecuteSearchUTXOResponse executionUtxoSearchResponse) {
    
    this.executionUtxoSearchResponse = executionUtxoSearchResponse;
    return this;
  }

   /**
   * Get executionUtxoSearchResponse
   * @return executionUtxoSearchResponse
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ExecuteSearchUTXOResponse getExecutionUtxoSearchResponse() {
    return executionUtxoSearchResponse;
  }


  public void setExecutionUtxoSearchResponse(ExecuteSearchUTXOResponse executionUtxoSearchResponse) {
    this.executionUtxoSearchResponse = executionUtxoSearchResponse;
  }


  public AutoExecuteSearchUTXOResponseSchema prepareAndExecuteOverledgerErrorResponse(PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse) {
    
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


  public AutoExecuteSearchUTXOResponseSchema preparationUtxoSearchResponse(PrepareTransactionResponse preparationUtxoSearchResponse) {
    
    this.preparationUtxoSearchResponse = preparationUtxoSearchResponse;
    return this;
  }

   /**
   * Get preparationUtxoSearchResponse
   * @return preparationUtxoSearchResponse
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public PrepareTransactionResponse getPreparationUtxoSearchResponse() {
    return preparationUtxoSearchResponse;
  }


  public void setPreparationUtxoSearchResponse(PrepareTransactionResponse preparationUtxoSearchResponse) {
    this.preparationUtxoSearchResponse = preparationUtxoSearchResponse;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AutoExecuteSearchUTXOResponseSchema autoExecuteSearchUTXOResponseSchema = (AutoExecuteSearchUTXOResponseSchema) o;
    return Objects.equals(this.executionUtxoSearchResponse, autoExecuteSearchUTXOResponseSchema.executionUtxoSearchResponse) &&
        Objects.equals(this.prepareAndExecuteOverledgerErrorResponse, autoExecuteSearchUTXOResponseSchema.prepareAndExecuteOverledgerErrorResponse) &&
        Objects.equals(this.preparationUtxoSearchResponse, autoExecuteSearchUTXOResponseSchema.preparationUtxoSearchResponse);
  }

  @Override
  public int hashCode() {
    return Objects.hash(executionUtxoSearchResponse, prepareAndExecuteOverledgerErrorResponse, preparationUtxoSearchResponse);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AutoExecuteSearchUTXOResponseSchema {\n");
    sb.append("    executionUtxoSearchResponse: ").append(toIndentedString(executionUtxoSearchResponse)).append("\n");
    sb.append("    prepareAndExecuteOverledgerErrorResponse: ").append(toIndentedString(prepareAndExecuteOverledgerErrorResponse)).append("\n");
    sb.append("    preparationUtxoSearchResponse: ").append(toIndentedString(preparationUtxoSearchResponse)).append("\n");
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

