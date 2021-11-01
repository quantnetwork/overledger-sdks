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
import org.openapitools.client.model.SubscriptionDetailsSchema;
import org.threeten.bp.OffsetDateTime;

/**
 * ListSubscriptionResponseSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-29T12:41:08.316065+01:00[Europe/London]")
public class ListSubscriptionResponseSchema {
  public static final String SERIALIZED_NAME_SUBSCRIPTION_DETAILS = "subscriptionDetails";
  @SerializedName(SERIALIZED_NAME_SUBSCRIPTION_DETAILS)
  private SubscriptionDetailsSchema subscriptionDetails;

  public static final String SERIALIZED_NAME_SUBSCRIBED_TIME = "subscribedTime";
  @SerializedName(SERIALIZED_NAME_SUBSCRIBED_TIME)
  private OffsetDateTime subscribedTime;

  public static final String SERIALIZED_NAME_LAST_UPDATED_TIME = "lastUpdatedTime";
  @SerializedName(SERIALIZED_NAME_LAST_UPDATED_TIME)
  private OffsetDateTime lastUpdatedTime;

  public static final String SERIALIZED_NAME_CALLBACK_URL = "callbackUrl";
  @SerializedName(SERIALIZED_NAME_CALLBACK_URL)
  private String callbackUrl;

  public static final String SERIALIZED_NAME_SUBSCRIPTION_ID = "subscriptionId";
  @SerializedName(SERIALIZED_NAME_SUBSCRIPTION_ID)
  private String subscriptionId;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;


  public ListSubscriptionResponseSchema subscriptionDetails(SubscriptionDetailsSchema subscriptionDetails) {
    
    this.subscriptionDetails = subscriptionDetails;
    return this;
  }

   /**
   * Get subscriptionDetails
   * @return subscriptionDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public SubscriptionDetailsSchema getSubscriptionDetails() {
    return subscriptionDetails;
  }


  public void setSubscriptionDetails(SubscriptionDetailsSchema subscriptionDetails) {
    this.subscriptionDetails = subscriptionDetails;
  }


  public ListSubscriptionResponseSchema subscribedTime(OffsetDateTime subscribedTime) {
    
    this.subscribedTime = subscribedTime;
    return this;
  }

   /**
   * Get subscribedTime
   * @return subscribedTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public OffsetDateTime getSubscribedTime() {
    return subscribedTime;
  }


  public void setSubscribedTime(OffsetDateTime subscribedTime) {
    this.subscribedTime = subscribedTime;
  }


  public ListSubscriptionResponseSchema lastUpdatedTime(OffsetDateTime lastUpdatedTime) {
    
    this.lastUpdatedTime = lastUpdatedTime;
    return this;
  }

   /**
   * Get lastUpdatedTime
   * @return lastUpdatedTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public OffsetDateTime getLastUpdatedTime() {
    return lastUpdatedTime;
  }


  public void setLastUpdatedTime(OffsetDateTime lastUpdatedTime) {
    this.lastUpdatedTime = lastUpdatedTime;
  }


  public ListSubscriptionResponseSchema callbackUrl(String callbackUrl) {
    
    this.callbackUrl = callbackUrl;
    return this;
  }

   /**
   * Get callbackUrl
   * @return callbackUrl
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getCallbackUrl() {
    return callbackUrl;
  }


  public void setCallbackUrl(String callbackUrl) {
    this.callbackUrl = callbackUrl;
  }


  public ListSubscriptionResponseSchema subscriptionId(String subscriptionId) {
    
    this.subscriptionId = subscriptionId;
    return this;
  }

   /**
   * Get subscriptionId
   * @return subscriptionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSubscriptionId() {
    return subscriptionId;
  }


  public void setSubscriptionId(String subscriptionId) {
    this.subscriptionId = subscriptionId;
  }


  public ListSubscriptionResponseSchema type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ListSubscriptionResponseSchema listSubscriptionResponseSchema = (ListSubscriptionResponseSchema) o;
    return Objects.equals(this.subscriptionDetails, listSubscriptionResponseSchema.subscriptionDetails) &&
        Objects.equals(this.subscribedTime, listSubscriptionResponseSchema.subscribedTime) &&
        Objects.equals(this.lastUpdatedTime, listSubscriptionResponseSchema.lastUpdatedTime) &&
        Objects.equals(this.callbackUrl, listSubscriptionResponseSchema.callbackUrl) &&
        Objects.equals(this.subscriptionId, listSubscriptionResponseSchema.subscriptionId) &&
        Objects.equals(this.type, listSubscriptionResponseSchema.type);
  }

  @Override
  public int hashCode() {
    return Objects.hash(subscriptionDetails, subscribedTime, lastUpdatedTime, callbackUrl, subscriptionId, type);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ListSubscriptionResponseSchema {\n");
    sb.append("    subscriptionDetails: ").append(toIndentedString(subscriptionDetails)).append("\n");
    sb.append("    subscribedTime: ").append(toIndentedString(subscribedTime)).append("\n");
    sb.append("    lastUpdatedTime: ").append(toIndentedString(lastUpdatedTime)).append("\n");
    sb.append("    callbackUrl: ").append(toIndentedString(callbackUrl)).append("\n");
    sb.append("    subscriptionId: ").append(toIndentedString(subscriptionId)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
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
