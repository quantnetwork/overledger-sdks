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
import org.openapitools.client.model.LocationDTO;
import org.openapitools.client.model.TierFunctionDTO;

/**
 * NonFungibleTokenDTO
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class NonFungibleTokenDTO {
  public static final String SERIALIZED_NAME_FUNCTIONS = "functions";
  @SerializedName(SERIALIZED_NAME_FUNCTIONS)
  private List<TierFunctionDTO> functions = null;

  public static final String SERIALIZED_NAME_TOKEN_NAME = "tokenName";
  @SerializedName(SERIALIZED_NAME_TOKEN_NAME)
  private String tokenName;

  public static final String SERIALIZED_NAME_SMART_CONTRACT_ADDRESS = "smartContractAddress";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_ADDRESS)
  private String smartContractAddress;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private LocationDTO location;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_TOKEN_TYPE = "tokenType";
  @SerializedName(SERIALIZED_NAME_TOKEN_TYPE)
  private String tokenType;

  public static final String SERIALIZED_NAME_URL = "url";
  @SerializedName(SERIALIZED_NAME_URL)
  private String url;


  public NonFungibleTokenDTO functions(List<TierFunctionDTO> functions) {
    
    this.functions = functions;
    return this;
  }

  public NonFungibleTokenDTO addFunctionsItem(TierFunctionDTO functionsItem) {
    if (this.functions == null) {
      this.functions = new ArrayList<TierFunctionDTO>();
    }
    this.functions.add(functionsItem);
    return this;
  }

   /**
   * Get functions
   * @return functions
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<TierFunctionDTO> getFunctions() {
    return functions;
  }


  public void setFunctions(List<TierFunctionDTO> functions) {
    this.functions = functions;
  }


  public NonFungibleTokenDTO tokenName(String tokenName) {
    
    this.tokenName = tokenName;
    return this;
  }

   /**
   * Get tokenName
   * @return tokenName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getTokenName() {
    return tokenName;
  }


  public void setTokenName(String tokenName) {
    this.tokenName = tokenName;
  }


  public NonFungibleTokenDTO smartContractAddress(String smartContractAddress) {
    
    this.smartContractAddress = smartContractAddress;
    return this;
  }

   /**
   * Get smartContractAddress
   * @return smartContractAddress
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSmartContractAddress() {
    return smartContractAddress;
  }


  public void setSmartContractAddress(String smartContractAddress) {
    this.smartContractAddress = smartContractAddress;
  }


  public NonFungibleTokenDTO location(LocationDTO location) {
    
    this.location = location;
    return this;
  }

   /**
   * Get location
   * @return location
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public LocationDTO getLocation() {
    return location;
  }


  public void setLocation(LocationDTO location) {
    this.location = location;
  }


  public NonFungibleTokenDTO id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public NonFungibleTokenDTO tokenType(String tokenType) {
    
    this.tokenType = tokenType;
    return this;
  }

   /**
   * Get tokenType
   * @return tokenType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getTokenType() {
    return tokenType;
  }


  public void setTokenType(String tokenType) {
    this.tokenType = tokenType;
  }


  public NonFungibleTokenDTO url(String url) {
    
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getUrl() {
    return url;
  }


  public void setUrl(String url) {
    this.url = url;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    NonFungibleTokenDTO nonFungibleTokenDTO = (NonFungibleTokenDTO) o;
    return Objects.equals(this.functions, nonFungibleTokenDTO.functions) &&
        Objects.equals(this.tokenName, nonFungibleTokenDTO.tokenName) &&
        Objects.equals(this.smartContractAddress, nonFungibleTokenDTO.smartContractAddress) &&
        Objects.equals(this.location, nonFungibleTokenDTO.location) &&
        Objects.equals(this.id, nonFungibleTokenDTO.id) &&
        Objects.equals(this.tokenType, nonFungibleTokenDTO.tokenType) &&
        Objects.equals(this.url, nonFungibleTokenDTO.url);
  }

  @Override
  public int hashCode() {
    return Objects.hash(functions, tokenName, smartContractAddress, location, id, tokenType, url);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class NonFungibleTokenDTO {\n");
    sb.append("    functions: ").append(toIndentedString(functions)).append("\n");
    sb.append("    tokenName: ").append(toIndentedString(tokenName)).append("\n");
    sb.append("    smartContractAddress: ").append(toIndentedString(smartContractAddress)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    tokenType: ").append(toIndentedString(tokenType)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
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

