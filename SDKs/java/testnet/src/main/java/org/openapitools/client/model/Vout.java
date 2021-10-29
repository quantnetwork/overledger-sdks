/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import java.math.BigDecimal;
import org.openapitools.client.model.ScriptPubKey;

/**
 * Vout
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class Vout {
  public static final String SERIALIZED_NAME_SCRIPT_PUB_KEY = "scriptPubKey";
  @SerializedName(SERIALIZED_NAME_SCRIPT_PUB_KEY)
  private ScriptPubKey scriptPubKey;

  public static final String SERIALIZED_NAME_VALUE = "value";
  @SerializedName(SERIALIZED_NAME_VALUE)
  private BigDecimal value;

  public static final String SERIALIZED_NAME_N = "n";
  @SerializedName(SERIALIZED_NAME_N)
  private BigDecimal n;


  public Vout scriptPubKey(ScriptPubKey scriptPubKey) {
    
    this.scriptPubKey = scriptPubKey;
    return this;
  }

   /**
   * Get scriptPubKey
   * @return scriptPubKey
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ScriptPubKey getScriptPubKey() {
    return scriptPubKey;
  }


  public void setScriptPubKey(ScriptPubKey scriptPubKey) {
    this.scriptPubKey = scriptPubKey;
  }


  public Vout value(BigDecimal value) {
    
    this.value = value;
    return this;
  }

   /**
   * Get value
   * @return value
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getValue() {
    return value;
  }


  public void setValue(BigDecimal value) {
    this.value = value;
  }


  public Vout n(BigDecimal n) {
    
    this.n = n;
    return this;
  }

   /**
   * Get n
   * @return n
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getN() {
    return n;
  }


  public void setN(BigDecimal n) {
    this.n = n;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Vout vout = (Vout) o;
    return Objects.equals(this.scriptPubKey, vout.scriptPubKey) &&
        Objects.equals(this.value, vout.value) &&
        Objects.equals(this.n, vout.n);
  }

  @Override
  public int hashCode() {
    return Objects.hash(scriptPubKey, value, n);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Vout {\n");
    sb.append("    scriptPubKey: ").append(toIndentedString(scriptPubKey)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("    n: ").append(toIndentedString(n)).append("\n");
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

