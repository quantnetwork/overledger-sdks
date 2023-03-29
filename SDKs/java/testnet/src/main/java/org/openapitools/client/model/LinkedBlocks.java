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
 * LinkedBlocks
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:47:12.017872+01:00[Europe/London]")
public class LinkedBlocks {
  public static final String SERIALIZED_NAME_PARENT = "parent";
  @SerializedName(SERIALIZED_NAME_PARENT)
  private String parent;

  public static final String SERIALIZED_NAME_CHILD = "child";
  @SerializedName(SERIALIZED_NAME_CHILD)
  private String child;


  public LinkedBlocks parent(String parent) {
    
    this.parent = parent;
    return this;
  }

   /**
   * Get parent
   * @return parent
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getParent() {
    return parent;
  }


  public void setParent(String parent) {
    this.parent = parent;
  }


  public LinkedBlocks child(String child) {
    
    this.child = child;
    return this;
  }

   /**
   * Get child
   * @return child
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getChild() {
    return child;
  }


  public void setChild(String child) {
    this.child = child;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LinkedBlocks linkedBlocks = (LinkedBlocks) o;
    return Objects.equals(this.parent, linkedBlocks.parent) &&
        Objects.equals(this.child, linkedBlocks.child);
  }

  @Override
  public int hashCode() {
    return Objects.hash(parent, child);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LinkedBlocks {\n");
    sb.append("    parent: ").append(toIndentedString(parent)).append("\n");
    sb.append("    child: ").append(toIndentedString(child)).append("\n");
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

