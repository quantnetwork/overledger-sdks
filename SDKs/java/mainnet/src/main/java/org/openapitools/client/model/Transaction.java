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
import org.openapitools.client.model.Destination;
import org.openapitools.client.model.Fee;
import org.openapitools.client.model.Origin;
import org.openapitools.client.model.Payment;

/**
 * Smallest unit of a work process related to interactions with distributed ledgers
 */
@ApiModel(description = "Smallest unit of a work process related to interactions with distributed ledgers")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-03-17T17:53:26.576945Z[Europe/London]")
public class Transaction {
  public static final String SERIALIZED_NAME_SIGNATURE = "signature";
  @SerializedName(SERIALIZED_NAME_SIGNATURE)
  private List<String> signature = null;

  public static final String SERIALIZED_NAME_ORIGIN = "origin";
  @SerializedName(SERIALIZED_NAME_ORIGIN)
  private List<Origin> origin = null;

  public static final String SERIALIZED_NAME_FEE = "fee";
  @SerializedName(SERIALIZED_NAME_FEE)
  private Fee fee;

  public static final String SERIALIZED_NAME_DESTINATION = "destination";
  @SerializedName(SERIALIZED_NAME_DESTINATION)
  private List<Destination> destination = null;

  public static final String SERIALIZED_NAME_SIGNED = "signed";
  @SerializedName(SERIALIZED_NAME_SIGNED)
  private String signed;

  public static final String SERIALIZED_NAME_TOTAL_PAYMENT_AMOUNT = "totalPaymentAmount";
  @SerializedName(SERIALIZED_NAME_TOTAL_PAYMENT_AMOUNT)
  private List<Payment> totalPaymentAmount = null;

  public static final String SERIALIZED_NAME_MESSAGE = "message";
  @SerializedName(SERIALIZED_NAME_MESSAGE)
  private String message;

  public static final String SERIALIZED_NAME_TRANSACTION_ID = "transactionId";
  @SerializedName(SERIALIZED_NAME_TRANSACTION_ID)
  private String transactionId;

  public static final String SERIALIZED_NAME_ENCODED = "encoded";
  @SerializedName(SERIALIZED_NAME_ENCODED)
  private List<String> encoded = null;

  public static final String SERIALIZED_NAME_EXTRA_FIELDS = "extraFields";
  @SerializedName(SERIALIZED_NAME_EXTRA_FIELDS)
  private Object extraFields;

  public static final String SERIALIZED_NAME_NATIVE_DATA = "nativeData";
  @SerializedName(SERIALIZED_NAME_NATIVE_DATA)
  private Object nativeData;


  public Transaction signature(List<String> signature) {
    
    this.signature = signature;
    return this;
  }

  public Transaction addSignatureItem(String signatureItem) {
    if (this.signature == null) {
      this.signature = new ArrayList<String>();
    }
    this.signature.add(signatureItem);
    return this;
  }

   /**
   * The signatures of this transaction
   * @return signature
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The signatures of this transaction")

  public List<String> getSignature() {
    return signature;
  }


  public void setSignature(List<String> signature) {
    this.signature = signature;
  }


  public Transaction origin(List<Origin> origin) {
    
    this.origin = origin;
    return this;
  }

  public Transaction addOriginItem(Origin originItem) {
    if (this.origin == null) {
      this.origin = new ArrayList<Origin>();
    }
    this.origin.add(originItem);
    return this;
  }

   /**
   * Get origin
   * @return origin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Origin> getOrigin() {
    return origin;
  }


  public void setOrigin(List<Origin> origin) {
    this.origin = origin;
  }


  public Transaction fee(Fee fee) {
    
    this.fee = fee;
    return this;
  }

   /**
   * Get fee
   * @return fee
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Fee getFee() {
    return fee;
  }


  public void setFee(Fee fee) {
    this.fee = fee;
  }


  public Transaction destination(List<Destination> destination) {
    
    this.destination = destination;
    return this;
  }

  public Transaction addDestinationItem(Destination destinationItem) {
    if (this.destination == null) {
      this.destination = new ArrayList<Destination>();
    }
    this.destination.add(destinationItem);
    return this;
  }

   /**
   * Get destination
   * @return destination
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Destination> getDestination() {
    return destination;
  }


  public void setDestination(List<Destination> destination) {
    this.destination = destination;
  }


  public Transaction signed(String signed) {
    
    this.signed = signed;
    return this;
  }

   /**
   * Get signed
   * @return signed
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSigned() {
    return signed;
  }


  public void setSigned(String signed) {
    this.signed = signed;
  }


  public Transaction totalPaymentAmount(List<Payment> totalPaymentAmount) {
    
    this.totalPaymentAmount = totalPaymentAmount;
    return this;
  }

  public Transaction addTotalPaymentAmountItem(Payment totalPaymentAmountItem) {
    if (this.totalPaymentAmount == null) {
      this.totalPaymentAmount = new ArrayList<Payment>();
    }
    this.totalPaymentAmount.add(totalPaymentAmountItem);
    return this;
  }

   /**
   * Get totalPaymentAmount
   * @return totalPaymentAmount
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Payment> getTotalPaymentAmount() {
    return totalPaymentAmount;
  }


  public void setTotalPaymentAmount(List<Payment> totalPaymentAmount) {
    this.totalPaymentAmount = totalPaymentAmount;
  }


  public Transaction message(String message) {
    
    this.message = message;
    return this;
  }

   /**
   * Any text-based element of the data payload
   * @return message
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Any text-based element of the data payload")

  public String getMessage() {
    return message;
  }


  public void setMessage(String message) {
    this.message = message;
  }


  public Transaction transactionId(String transactionId) {
    
    this.transactionId = transactionId;
    return this;
  }

   /**
   * The unique identifier of the transaction on this DLN
   * @return transactionId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The unique identifier of the transaction on this DLN")

  public String getTransactionId() {
    return transactionId;
  }


  public void setTransactionId(String transactionId) {
    this.transactionId = transactionId;
  }


  public Transaction encoded(List<String> encoded) {
    
    this.encoded = encoded;
    return this;
  }

  public Transaction addEncodedItem(String encodedItem) {
    if (this.encoded == null) {
      this.encoded = new ArrayList<String>();
    }
    this.encoded.add(encodedItem);
    return this;
  }

   /**
   * Get encoded
   * @return encoded
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<String> getEncoded() {
    return encoded;
  }


  public void setEncoded(List<String> encoded) {
    this.encoded = encoded;
  }


  public Transaction extraFields(Object extraFields) {
    
    this.extraFields = extraFields;
    return this;
  }

   /**
   * Get extraFields
   * @return extraFields
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Object getExtraFields() {
    return extraFields;
  }


  public void setExtraFields(Object extraFields) {
    this.extraFields = extraFields;
  }


  public Transaction nativeData(Object nativeData) {
    
    this.nativeData = nativeData;
    return this;
  }

   /**
   * Get nativeData
   * @return nativeData
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Object getNativeData() {
    return nativeData;
  }


  public void setNativeData(Object nativeData) {
    this.nativeData = nativeData;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Transaction transaction = (Transaction) o;
    return Objects.equals(this.signature, transaction.signature) &&
        Objects.equals(this.origin, transaction.origin) &&
        Objects.equals(this.fee, transaction.fee) &&
        Objects.equals(this.destination, transaction.destination) &&
        Objects.equals(this.signed, transaction.signed) &&
        Objects.equals(this.totalPaymentAmount, transaction.totalPaymentAmount) &&
        Objects.equals(this.message, transaction.message) &&
        Objects.equals(this.transactionId, transaction.transactionId) &&
        Objects.equals(this.encoded, transaction.encoded) &&
        Objects.equals(this.extraFields, transaction.extraFields) &&
        Objects.equals(this.nativeData, transaction.nativeData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(signature, origin, fee, destination, signed, totalPaymentAmount, message, transactionId, encoded, extraFields, nativeData);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Transaction {\n");
    sb.append("    signature: ").append(toIndentedString(signature)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    fee: ").append(toIndentedString(fee)).append("\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    signed: ").append(toIndentedString(signed)).append("\n");
    sb.append("    totalPaymentAmount: ").append(toIndentedString(totalPaymentAmount)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
    sb.append("    transactionId: ").append(toIndentedString(transactionId)).append("\n");
    sb.append("    encoded: ").append(toIndentedString(encoded)).append("\n");
    sb.append("    extraFields: ").append(toIndentedString(extraFields)).append("\n");
    sb.append("    nativeData: ").append(toIndentedString(nativeData)).append("\n");
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

