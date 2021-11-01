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
import org.openapitools.client.model.ResourceMonitoringDetails;
import org.openapitools.client.model.ResourceMonitoringSubscription;
import org.openapitools.client.model.ResourceMonitoringSubscriptionDetails;

/**
 * CreateSmartContractMonitoringSchema
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-11-01T15:18:10.790747Z[Europe/London]")
public class CreateSmartContractMonitoringSchema {
  public static final String SERIALIZED_NAME_SUBSCRIPTION_DETAILS = "subscriptionDetails";
  @SerializedName(SERIALIZED_NAME_SUBSCRIPTION_DETAILS)
  private ResourceMonitoringSubscriptionDetails subscriptionDetails;

  public static final String SERIALIZED_NAME_RESOURCE_MONITORING = "resourceMonitoring";
  @SerializedName(SERIALIZED_NAME_RESOURCE_MONITORING)
  private ResourceMonitoringDetails resourceMonitoring;

  public static final String SERIALIZED_NAME_SUBSCRIPTION = "subscription";
  @SerializedName(SERIALIZED_NAME_SUBSCRIPTION)
  private ResourceMonitoringSubscription subscription;


  public CreateSmartContractMonitoringSchema subscriptionDetails(ResourceMonitoringSubscriptionDetails subscriptionDetails) {
    
    this.subscriptionDetails = subscriptionDetails;
    return this;
  }

   /**
   * Get subscriptionDetails
   * @return subscriptionDetails
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringSubscriptionDetails getSubscriptionDetails() {
    return subscriptionDetails;
  }


  public void setSubscriptionDetails(ResourceMonitoringSubscriptionDetails subscriptionDetails) {
    this.subscriptionDetails = subscriptionDetails;
  }


  public CreateSmartContractMonitoringSchema resourceMonitoring(ResourceMonitoringDetails resourceMonitoring) {
    
    this.resourceMonitoring = resourceMonitoring;
    return this;
  }

   /**
   * Get resourceMonitoring
   * @return resourceMonitoring
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringDetails getResourceMonitoring() {
    return resourceMonitoring;
  }


  public void setResourceMonitoring(ResourceMonitoringDetails resourceMonitoring) {
    this.resourceMonitoring = resourceMonitoring;
  }


  public CreateSmartContractMonitoringSchema subscription(ResourceMonitoringSubscription subscription) {
    
    this.subscription = subscription;
    return this;
  }

   /**
   * Get subscription
   * @return subscription
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResourceMonitoringSubscription getSubscription() {
    return subscription;
  }


  public void setSubscription(ResourceMonitoringSubscription subscription) {
    this.subscription = subscription;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CreateSmartContractMonitoringSchema createSmartContractMonitoringSchema = (CreateSmartContractMonitoringSchema) o;
    return Objects.equals(this.subscriptionDetails, createSmartContractMonitoringSchema.subscriptionDetails) &&
        Objects.equals(this.resourceMonitoring, createSmartContractMonitoringSchema.resourceMonitoring) &&
        Objects.equals(this.subscription, createSmartContractMonitoringSchema.subscription);
  }

  @Override
  public int hashCode() {
    return Objects.hash(subscriptionDetails, resourceMonitoring, subscription);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateSmartContractMonitoringSchema {\n");
    sb.append("    subscriptionDetails: ").append(toIndentedString(subscriptionDetails)).append("\n");
    sb.append("    resourceMonitoring: ").append(toIndentedString(resourceMonitoring)).append("\n");
    sb.append("    subscription: ").append(toIndentedString(subscription)).append("\n");
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

