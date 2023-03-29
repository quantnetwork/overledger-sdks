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
    /// The payload request
    /// </summary>
    [DataContract]
    public partial class PaymentRequestDetailsSchema :  IEquatable<PaymentRequestDetailsSchema>, IValidatableObject
    {
        /// <summary>
        /// The method of signing used to submit the transaction
        /// </summary>
        /// <value>The method of signing used to submit the transaction</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum OverledgerSigningTypeEnum
        {
            /// <summary>
            /// Enum OverledgerJavascriptLibrary for value: overledger-javascript-library
            /// </summary>
            [EnumMember(Value = "overledger-javascript-library")]
            OverledgerJavascriptLibrary = 1

        }

        /// <summary>
        /// The method of signing used to submit the transaction
        /// </summary>
        /// <value>The method of signing used to submit the transaction</value>
        [DataMember(Name="overledgerSigningType", EmitDefaultValue=false)]
        public OverledgerSigningTypeEnum? OverledgerSigningType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentRequestDetailsSchema" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PaymentRequestDetailsSchema() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentRequestDetailsSchema" /> class.
        /// </summary>
        /// <param name="destination">List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail (required).</param>
        /// <param name="message">Any text-based element of the data payload.</param>
        /// <param name="overledgerSigningType">The method of signing used to submit the transaction.</param>
        /// <param name="origin">List of where this transaction is coming from (required).</param>
        public PaymentRequestDetailsSchema(List<DestinationPaymentSchema> destination = default(List<DestinationPaymentSchema>), string message = default(string), OverledgerSigningTypeEnum? overledgerSigningType = default(OverledgerSigningTypeEnum?), List<OriginPaymentSchema> origin = default(List<OriginPaymentSchema>))
        {
            // to ensure "destination" is required (not null)
            if (destination == null)
            {
                throw new InvalidDataException("destination is a required property for PaymentRequestDetailsSchema and cannot be null");
            }
            else
            {
                this.Destination = destination;
            }

            // to ensure "origin" is required (not null)
            if (origin == null)
            {
                throw new InvalidDataException("origin is a required property for PaymentRequestDetailsSchema and cannot be null");
            }
            else
            {
                this.Origin = origin;
            }

            this.Message = message;
            this.OverledgerSigningType = overledgerSigningType;
        }

        /// <summary>
        /// List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail
        /// </summary>
        /// <value>List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail</value>
        [DataMember(Name="destination", EmitDefaultValue=true)]
        public List<DestinationPaymentSchema> Destination { get; set; }

        /// <summary>
        /// Any text-based element of the data payload
        /// </summary>
        /// <value>Any text-based element of the data payload</value>
        [DataMember(Name="message", EmitDefaultValue=false)]
        public string Message { get; set; }


        /// <summary>
        /// List of where this transaction is coming from
        /// </summary>
        /// <value>List of where this transaction is coming from</value>
        [DataMember(Name="origin", EmitDefaultValue=true)]
        public List<OriginPaymentSchema> Origin { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentRequestDetailsSchema {\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  OverledgerSigningType: ").Append(OverledgerSigningType).Append("\n");
            sb.Append("  Origin: ").Append(Origin).Append("\n");
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
            return this.Equals(input as PaymentRequestDetailsSchema);
        }

        /// <summary>
        /// Returns true if PaymentRequestDetailsSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PaymentRequestDetailsSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PaymentRequestDetailsSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Destination == input.Destination ||
                    this.Destination != null &&
                    input.Destination != null &&
                    this.Destination.SequenceEqual(input.Destination)
                ) && 
                (
                    this.Message == input.Message ||
                    (this.Message != null &&
                    this.Message.Equals(input.Message))
                ) && 
                (
                    this.OverledgerSigningType == input.OverledgerSigningType ||
                    (this.OverledgerSigningType != null &&
                    this.OverledgerSigningType.Equals(input.OverledgerSigningType))
                ) && 
                (
                    this.Origin == input.Origin ||
                    this.Origin != null &&
                    input.Origin != null &&
                    this.Origin.SequenceEqual(input.Origin)
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
                if (this.Destination != null)
                    hashCode = hashCode * 59 + this.Destination.GetHashCode();
                if (this.Message != null)
                    hashCode = hashCode * 59 + this.Message.GetHashCode();
                if (this.OverledgerSigningType != null)
                    hashCode = hashCode * 59 + this.OverledgerSigningType.GetHashCode();
                if (this.Origin != null)
                    hashCode = hashCode * 59 + this.Origin.GetHashCode();
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

            // OverledgerSigningType (string) maxLength
            if(this.OverledgerSigningType != null && this.OverledgerSigningType.ToString().Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OverledgerSigningType, length must be less than 30.", new [] { "OverledgerSigningType" });
            }

            // OverledgerSigningType (string) minLength
            if(this.OverledgerSigningType != null && this.OverledgerSigningType.ToString().Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OverledgerSigningType, length must be greater than 0.", new [] { "OverledgerSigningType" });
            }

            // OverledgerSigningType (string) pattern
            Regex regexOverledgerSigningType = new Regex(@"^[A-Za-z- ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexOverledgerSigningType.Match(this.OverledgerSigningType).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OverledgerSigningType, must match a pattern of " + regexOverledgerSigningType, new [] { "OverledgerSigningType" });
            }



            yield break;
        }
    }

}
