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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.Location;
import org.openapitools.client.model.MonitorSmartContractEventParam;

/**
 * MonitorSmartContractRequestSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-11-01T15:18:10.790747Z[Europe/London]")
public class MonitorSmartContractRequestSchema {
  public static final String SERIALIZED_NAME_CALL_BACK_U_R_L = "callBackURL";
  @SerializedName(SERIALIZED_NAME_CALL_BACK_U_R_L)
  private String callBackURL;

  public static final String SERIALIZED_NAME_EVENT_PARAMS = "eventParams";
  @SerializedName(SERIALIZED_NAME_EVENT_PARAMS)
  private List<MonitorSmartContractEventParam> eventParams = null;

  public static final String SERIALIZED_NAME_EVENT_NAME = "eventName";
  @SerializedName(SERIALIZED_NAME_EVENT_NAME)
  private String eventName;

  public static final String SERIALIZED_NAME_LOCATION = "location";
  @SerializedName(SERIALIZED_NAME_LOCATION)
  private Location location;

  public static final String SERIALIZED_NAME_SMART_CONTRACT_ID = "smartContractId";
  @SerializedName(SERIALIZED_NAME_SMART_CONTRACT_ID)
  private String smartContractId;


  public MonitorSmartContractRequestSchema callBackURL(String callBackURL) {
    
    this.callBackURL = callBackURL;
    return this;
  }

   /**
   * Get callBackURL
   * @return callBackURL
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getCallBackURL() {
    return callBackURL;
  }


  public void setCallBackURL(String callBackURL) {
    this.callBackURL = callBackURL;
  }


  public MonitorSmartContractRequestSchema eventParams(List<MonitorSmartContractEventParam> eventParams) {
    
    this.eventParams = eventParams;
    return this;
  }

  public MonitorSmartContractRequestSchema addEventParamsItem(MonitorSmartContractEventParam eventParamsItem) {
    if (this.eventParams == null) {
      this.eventParams = new ArrayList<MonitorSmartContractEventParam>();
    }
    this.eventParams.add(eventParamsItem);
    return this;
  }

   /**
   * Get eventParams
   * @return eventParams
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<MonitorSmartContractEventParam> getEventParams() {
    return eventParams;
  }


  public void setEventParams(List<MonitorSmartContractEventParam> eventParams) {
    this.eventParams = eventParams;
  }


  public MonitorSmartContractRequestSchema eventName(String eventName) {
    
    this.eventName = eventName;
    return this;
  }

   /**
   * Get eventName
   * @return eventName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getEventName() {
    return eventName;
  }


  public void setEventName(String eventName) {
    this.eventName = eventName;
  }


  public MonitorSmartContractRequestSchema location(Location location) {
    
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


  public MonitorSmartContractRequestSchema smartContractId(String smartContractId) {
    
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
    MonitorSmartContractRequestSchema monitorSmartContractRequestSchema = (MonitorSmartContractRequestSchema) o;
    return Objects.equals(this.callBackURL, monitorSmartContractRequestSchema.callBackURL) &&
        Objects.equals(this.eventParams, monitorSmartContractRequestSchema.eventParams) &&
        Objects.equals(this.eventName, monitorSmartContractRequestSchema.eventName) &&
        Objects.equals(this.location, monitorSmartContractRequestSchema.location) &&
        Objects.equals(this.smartContractId, monitorSmartContractRequestSchema.smartContractId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(callBackURL, eventParams, eventName, location, smartContractId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MonitorSmartContractRequestSchema {\n");
    sb.append("    callBackURL: ").append(toIndentedString(callBackURL)).append("\n");
    sb.append("    eventParams: ").append(toIndentedString(eventParams)).append("\n");
    sb.append("    eventName: ").append(toIndentedString(eventName)).append("\n");
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

