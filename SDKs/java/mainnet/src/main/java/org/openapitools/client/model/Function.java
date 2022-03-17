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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.Parameter;

/**
 * Function
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-03-17T17:53:26.576945Z[Europe/London]")
public class Function {
  public static final String SERIALIZED_NAME_FUNCTION_ID = "functionId";
  @SerializedName(SERIALIZED_NAME_FUNCTION_ID)
  private String functionId;

  public static final String SERIALIZED_NAME_CODE = "code";
  @SerializedName(SERIALIZED_NAME_CODE)
  private String code;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_INPUT_PARAMETERS = "inputParameters";
  @SerializedName(SERIALIZED_NAME_INPUT_PARAMETERS)
  private List<Parameter> inputParameters = null;

  public static final String SERIALIZED_NAME_OUTPUT_PARAMETERS = "outputParameters";
  @SerializedName(SERIALIZED_NAME_OUTPUT_PARAMETERS)
  private List<Parameter> outputParameters = null;


  public Function functionId(String functionId) {
    
    this.functionId = functionId;
    return this;
  }

   /**
   * Get functionId
   * @return functionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getFunctionId() {
    return functionId;
  }


  public void setFunctionId(String functionId) {
    this.functionId = functionId;
  }


  public Function code(String code) {
    
    this.code = code;
    return this;
  }

   /**
   * Get code
   * @return code
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getCode() {
    return code;
  }


  public void setCode(String code) {
    this.code = code;
  }


  public Function name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public Function inputParameters(List<Parameter> inputParameters) {
    
    this.inputParameters = inputParameters;
    return this;
  }

  public Function addInputParametersItem(Parameter inputParametersItem) {
    if (this.inputParameters == null) {
      this.inputParameters = new ArrayList<Parameter>();
    }
    this.inputParameters.add(inputParametersItem);
    return this;
  }

   /**
   * Get inputParameters
   * @return inputParameters
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Parameter> getInputParameters() {
    return inputParameters;
  }


  public void setInputParameters(List<Parameter> inputParameters) {
    this.inputParameters = inputParameters;
  }


  public Function outputParameters(List<Parameter> outputParameters) {
    
    this.outputParameters = outputParameters;
    return this;
  }

  public Function addOutputParametersItem(Parameter outputParametersItem) {
    if (this.outputParameters == null) {
      this.outputParameters = new ArrayList<Parameter>();
    }
    this.outputParameters.add(outputParametersItem);
    return this;
  }

   /**
   * Get outputParameters
   * @return outputParameters
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Parameter> getOutputParameters() {
    return outputParameters;
  }


  public void setOutputParameters(List<Parameter> outputParameters) {
    this.outputParameters = outputParameters;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Function function = (Function) o;
    return Objects.equals(this.functionId, function.functionId) &&
        Objects.equals(this.code, function.code) &&
        Objects.equals(this.name, function.name) &&
        Objects.equals(this.inputParameters, function.inputParameters) &&
        Objects.equals(this.outputParameters, function.outputParameters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(functionId, code, name, inputParameters, outputParameters);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Function {\n");
    sb.append("    functionId: ").append(toIndentedString(functionId)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    inputParameters: ").append(toIndentedString(inputParameters)).append("\n");
    sb.append("    outputParameters: ").append(toIndentedString(outputParameters)).append("\n");
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

