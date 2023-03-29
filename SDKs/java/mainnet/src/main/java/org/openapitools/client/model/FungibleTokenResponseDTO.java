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
import org.openapitools.client.model.FunctionDTO;
import org.openapitools.client.model.LocationDTO;

/**
 * FungibleTokenResponseDTO
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-03-29T09:46:50.106642+01:00[Europe/London]")
public class FungibleTokenResponseDTO {
  public static final String SERIALIZED_NAME_DOCUMENTATION_URL = "documentationUrl";
  @SerializedName(SERIALIZED_NAME_DOCUMENTATION_URL)
  private String documentationUrl;

  public static final String SERIALIZED_NAME_UNIT = "unit";
  @SerializedName(SERIALIZED_NAME_UNIT)
  private String unit;

  public static final String SERIALIZED_NAME_DECIMAL_PLACES = "decimalPlaces";
  @SerializedName(SERIALIZED_NAME_DECIMAL_PLACES)
  private Integer decimalPlaces;

  public static final String SERIALIZED_NAME_FUNCTIONS = "functions";
  @SerializedName(SERIALIZED_NAME_FUNCTIONS)
  private List<FunctionDTO> functions = null;

  /**
   * Gets or Sets contractType
   */
  @JsonAdapter(ContractTypeEnum.Adapter.class)
  public enum ContractTypeEnum {
    ERC20("ERC20"),
    
    QRC20("QRC20");

    private String value;

    ContractTypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static ContractTypeEnum fromValue(String value) {
      for (ContractTypeEnum b : ContractTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<ContractTypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final ContractTypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public ContractTypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return ContractTypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_CONTRACT_TYPE = "contractType";
  @SerializedName(SERIALIZED_NAME_CONTRACT_TYPE)
  private ContractTypeEnum contractType;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private LocationDTO location;

  public static final String SERIALIZED_NAME_SMART_CONTRACT_ID = "smartContractId";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_ID)
  private String smartContractId;


  public FungibleTokenResponseDTO documentationUrl(String documentationUrl) {
    
    this.documentationUrl = documentationUrl;
    return this;
  }

   /**
   * Get documentationUrl
   * @return documentationUrl
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getDocumentationUrl() {
    return documentationUrl;
  }


  public void setDocumentationUrl(String documentationUrl) {
    this.documentationUrl = documentationUrl;
  }


  public FungibleTokenResponseDTO unit(String unit) {
    
    this.unit = unit;
    return this;
  }

   /**
   * Get unit
   * @return unit
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getUnit() {
    return unit;
  }


  public void setUnit(String unit) {
    this.unit = unit;
  }


  public FungibleTokenResponseDTO decimalPlaces(Integer decimalPlaces) {
    
    this.decimalPlaces = decimalPlaces;
    return this;
  }

   /**
   * Get decimalPlaces
   * @return decimalPlaces
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getDecimalPlaces() {
    return decimalPlaces;
  }


  public void setDecimalPlaces(Integer decimalPlaces) {
    this.decimalPlaces = decimalPlaces;
  }


  public FungibleTokenResponseDTO functions(List<FunctionDTO> functions) {
    
    this.functions = functions;
    return this;
  }

  public FungibleTokenResponseDTO addFunctionsItem(FunctionDTO functionsItem) {
    if (this.functions == null) {
      this.functions = new ArrayList<FunctionDTO>();
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

  public List<FunctionDTO> getFunctions() {
    return functions;
  }


  public void setFunctions(List<FunctionDTO> functions) {
    this.functions = functions;
  }


  public FungibleTokenResponseDTO contractType(ContractTypeEnum contractType) {
    
    this.contractType = contractType;
    return this;
  }

   /**
   * Get contractType
   * @return contractType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ContractTypeEnum getContractType() {
    return contractType;
  }


  public void setContractType(ContractTypeEnum contractType) {
    this.contractType = contractType;
  }


  public FungibleTokenResponseDTO location(LocationDTO location) {
    
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


  public FungibleTokenResponseDTO smartContractId(String smartContractId) {
    
    this.smartContractId = smartContractId;
    return this;
  }

   /**
   * Get smartContractId
   * @return smartContractId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSmartContractId() {
    return smartContractId;
  }


  public void setSmartContractId(String smartContractId) {
    this.smartContractId = smartContractId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FungibleTokenResponseDTO fungibleTokenResponseDTO = (FungibleTokenResponseDTO) o;
    return Objects.equals(this.documentationUrl, fungibleTokenResponseDTO.documentationUrl) &&
        Objects.equals(this.unit, fungibleTokenResponseDTO.unit) &&
        Objects.equals(this.decimalPlaces, fungibleTokenResponseDTO.decimalPlaces) &&
        Objects.equals(this.functions, fungibleTokenResponseDTO.functions) &&
        Objects.equals(this.contractType, fungibleTokenResponseDTO.contractType) &&
        Objects.equals(this.location, fungibleTokenResponseDTO.location) &&
        Objects.equals(this.smartContractId, fungibleTokenResponseDTO.smartContractId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(documentationUrl, unit, decimalPlaces, functions, contractType, location, smartContractId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FungibleTokenResponseDTO {\n");
    sb.append("    documentationUrl: ").append(toIndentedString(documentationUrl)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
    sb.append("    decimalPlaces: ").append(toIndentedString(decimalPlaces)).append("\n");
    sb.append("    functions: ").append(toIndentedString(functions)).append("\n");
    sb.append("    contractType: ").append(toIndentedString(contractType)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
    sb.append("    smartContractId: ").append(toIndentedString(smartContractId)).append("\n");
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

