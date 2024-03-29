/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Smallest unit of a work process related to interactions with distributed ledgers
    /// </summary>
    [DataContract]
    public partial class Transaction :  IEquatable<Transaction>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Transaction" /> class.
        /// </summary>
        /// <param name="signature">The signatures of this transaction.</param>
        /// <param name="origin">origin.</param>
        /// <param name="fee">fee.</param>
        /// <param name="destination">destination.</param>
        /// <param name="signed">signed.</param>
        /// <param name="totalPaymentAmount">totalPaymentAmount.</param>
        /// <param name="message">Any text-based element of the data payload.</param>
        /// <param name="transactionId">The unique identifier of the transaction on this DLN.</param>
        /// <param name="encoded">encoded.</param>
        /// <param name="extraFields">extraFields.</param>
        /// <param name="nativeData">nativeData.</param>
        public Transaction(List<string> signature = default(List<string>), List<Origin> origin = default(List<Origin>), Fee fee = default(Fee), List<Destination> destination = default(List<Destination>), string signed = default(string), List<Payment> totalPaymentAmount = default(List<Payment>), string message = default(string), string transactionId = default(string), List<string> encoded = default(List<string>), Object extraFields = default(Object), Object nativeData = default(Object))
        {
            this.Signature = signature;
            this.Origin = origin;
            this.Fee = fee;
            this.Destination = destination;
            this.Signed = signed;
            this.TotalPaymentAmount = totalPaymentAmount;
            this.Message = message;
            this.TransactionId = transactionId;
            this.Encoded = encoded;
            this.ExtraFields = extraFields;
            this.NativeData = nativeData;
        }

        /// <summary>
        /// The signatures of this transaction
        /// </summary>
        /// <value>The signatures of this transaction</value>
        [DataMember(Name="signature", EmitDefaultValue=false)]
        public List<string> Signature { get; set; }

        /// <summary>
        /// Gets or Sets Origin
        /// </summary>
        [DataMember(Name="origin", EmitDefaultValue=false)]
        public List<Origin> Origin { get; set; }

        /// <summary>
        /// Gets or Sets Fee
        /// </summary>
        [DataMember(Name="fee", EmitDefaultValue=false)]
        public Fee Fee { get; set; }

        /// <summary>
        /// Gets or Sets Destination
        /// </summary>
        [DataMember(Name="destination", EmitDefaultValue=false)]
        public List<Destination> Destination { get; set; }

        /// <summary>
        /// Gets or Sets Signed
        /// </summary>
        [DataMember(Name="signed", EmitDefaultValue=false)]
        public string Signed { get; set; }

        /// <summary>
        /// Gets or Sets TotalPaymentAmount
        /// </summary>
        [DataMember(Name="totalPaymentAmount", EmitDefaultValue=false)]
        public List<Payment> TotalPaymentAmount { get; set; }

        /// <summary>
        /// Any text-based element of the data payload
        /// </summary>
        /// <value>Any text-based element of the data payload</value>
        [DataMember(Name="message", EmitDefaultValue=false)]
        public string Message { get; set; }

        /// <summary>
        /// The unique identifier of the transaction on this DLN
        /// </summary>
        /// <value>The unique identifier of the transaction on this DLN</value>
        [DataMember(Name="transactionId", EmitDefaultValue=false)]
        public string TransactionId { get; set; }

        /// <summary>
        /// Gets or Sets Encoded
        /// </summary>
        [DataMember(Name="encoded", EmitDefaultValue=false)]
        public List<string> Encoded { get; set; }

        /// <summary>
        /// Gets or Sets ExtraFields
        /// </summary>
        [DataMember(Name="extraFields", EmitDefaultValue=false)]
        public Object ExtraFields { get; set; }

        /// <summary>
        /// Gets or Sets NativeData
        /// </summary>
        [DataMember(Name="nativeData", EmitDefaultValue=false)]
        public Object NativeData { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Transaction {\n");
            sb.Append("  Signature: ").Append(Signature).Append("\n");
            sb.Append("  Origin: ").Append(Origin).Append("\n");
            sb.Append("  Fee: ").Append(Fee).Append("\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Signed: ").Append(Signed).Append("\n");
            sb.Append("  TotalPaymentAmount: ").Append(TotalPaymentAmount).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  TransactionId: ").Append(TransactionId).Append("\n");
            sb.Append("  Encoded: ").Append(Encoded).Append("\n");
            sb.Append("  ExtraFields: ").Append(ExtraFields).Append("\n");
            sb.Append("  NativeData: ").Append(NativeData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as Transaction);
        }

        /// <summary>
        /// Returns true if Transaction instances are equal
        /// </summary>
        /// <param name="input">Instance of Transaction to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Transaction input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Signature == input.Signature ||
                    this.Signature != null &&
                    input.Signature != null &&
                    this.Signature.SequenceEqual(input.Signature)
                ) && 
                (
                    this.Origin == input.Origin ||
                    this.Origin != null &&
                    input.Origin != null &&
                    this.Origin.SequenceEqual(input.Origin)
                ) && 
                (
                    this.Fee == input.Fee ||
                    (this.Fee != null &&
                    this.Fee.Equals(input.Fee))
                ) && 
                (
                    this.Destination == input.Destination ||
                    this.Destination != null &&
                    input.Destination != null &&
                    this.Destination.SequenceEqual(input.Destination)
                ) && 
                (
                    this.Signed == input.Signed ||
                    (this.Signed != null &&
                    this.Signed.Equals(input.Signed))
                ) && 
                (
                    this.TotalPaymentAmount == input.TotalPaymentAmount ||
                    this.TotalPaymentAmount != null &&
                    input.TotalPaymentAmount != null &&
                    this.TotalPaymentAmount.SequenceEqual(input.TotalPaymentAmount)
                ) && 
                (
                    this.Message == input.Message ||
                    (this.Message != null &&
                    this.Message.Equals(input.Message))
                ) && 
                (
                    this.TransactionId == input.TransactionId ||
                    (this.TransactionId != null &&
                    this.TransactionId.Equals(input.TransactionId))
                ) && 
                (
                    this.Encoded == input.Encoded ||
                    this.Encoded != null &&
                    input.Encoded != null &&
                    this.Encoded.SequenceEqual(input.Encoded)
                ) && 
                (
                    this.ExtraFields == input.ExtraFields ||
                    (this.ExtraFields != null &&
                    this.ExtraFields.Equals(input.ExtraFields))
                ) && 
                (
                    this.NativeData == input.NativeData ||
                    (this.NativeData != null &&
                    this.NativeData.Equals(input.NativeData))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Signature != null)
                    hashCode = hashCode * 59 + this.Signature.GetHashCode();
                if (this.Origin != null)
                    hashCode = hashCode * 59 + this.Origin.GetHashCode();
                if (this.Fee != null)
                    hashCode = hashCode * 59 + this.Fee.GetHashCode();
                if (this.Destination != null)
                    hashCode = hashCode * 59 + this.Destination.GetHashCode();
                if (this.Signed != null)
                    hashCode = hashCode * 59 + this.Signed.GetHashCode();
                if (this.TotalPaymentAmount != null)
                    hashCode = hashCode * 59 + this.TotalPaymentAmount.GetHashCode();
                if (this.Message != null)
                    hashCode = hashCode * 59 + this.Message.GetHashCode();
                if (this.TransactionId != null)
                    hashCode = hashCode * 59 + this.TransactionId.GetHashCode();
                if (this.Encoded != null)
                    hashCode = hashCode * 59 + this.Encoded.GetHashCode();
                if (this.ExtraFields != null)
                    hashCode = hashCode * 59 + this.ExtraFields.GetHashCode();
                if (this.NativeData != null)
                    hashCode = hashCode * 59 + this.NativeData.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {






            // Signed (string) maxLength
            if(this.Signed != null && this.Signed.Length > 400)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Signed, length must be less than 400.", new [] { "Signed" });
            }

            // Signed (string) minLength
            if(this.Signed != null && this.Signed.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Signed, length must be greater than 0.", new [] { "Signed" });
            }

            // Signed (string) pattern
            Regex regexSigned = new Regex(@"^[A-Za-z0-9-]{1,400}$", RegexOptions.CultureInvariant);
            if (false == regexSigned.Match(this.Signed).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Signed, must match a pattern of " + regexSigned, new [] { "Signed" });
            }



            // Message (string) maxLength
            if(this.Message != null && this.Message.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be less than 150.", new [] { "Message" });
            }

            // Message (string) minLength
            if(this.Message != null && this.Message.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be greater than 0.", new [] { "Message" });
            }

            // Message (string) pattern
            Regex regexMessage = new Regex(@"^[\\S\\s]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexMessage.Match(this.Message).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, must match a pattern of " + regexMessage, new [] { "Message" });
            }

            // TransactionId (string) maxLength
            if(this.TransactionId != null && this.TransactionId.Length > 100)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TransactionId, length must be less than 100.", new [] { "TransactionId" });
            }

            // TransactionId (string) minLength
            if(this.TransactionId != null && this.TransactionId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TransactionId, length must be greater than 0.", new [] { "TransactionId" });
            }

            // TransactionId (string) pattern
            Regex regexTransactionId = new Regex(@"^[a-zA-Z0-9-]{1,100}$", RegexOptions.CultureInvariant);
            if (false == regexTransactionId.Match(this.TransactionId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TransactionId, must match a pattern of " + regexTransactionId, new [] { "TransactionId" });
            }



            yield break;
        }
    }

}
