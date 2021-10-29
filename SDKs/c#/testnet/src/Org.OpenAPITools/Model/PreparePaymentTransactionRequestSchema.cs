/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
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
    /// PreparePaymentTransactionRequestSchema
    /// </summary>
    [DataContract]
    public partial class PreparePaymentTransactionRequestSchema :  IEquatable<PreparePaymentTransactionRequestSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PreparePaymentTransactionRequestSchema" /> class.
        /// </summary>
        /// <param name="urgency">urgency.</param>
        /// <param name="requestDetails">requestDetails.</param>
        /// <param name="location">location.</param>
        /// <param name="type">type.</param>
        public PreparePaymentTransactionRequestSchema(string urgency = default(string), PaymentRequestDetailsSchema requestDetails = default(PaymentRequestDetailsSchema), Location location = default(Location), string type = default(string))
        {
            this.Urgency = urgency;
            this.RequestDetails = requestDetails;
            this.Location = location;
            this.Type = type;
        }

        /// <summary>
        /// Gets or Sets Urgency
        /// </summary>
        [DataMember(Name="urgency", EmitDefaultValue=false)]
        public string Urgency { get; set; }

        /// <summary>
        /// Gets or Sets RequestDetails
        /// </summary>
        [DataMember(Name="requestDetails", EmitDefaultValue=false)]
        public PaymentRequestDetailsSchema RequestDetails { get; set; }

        /// <summary>
        /// Gets or Sets Location
        /// </summary>
        [DataMember(Name="location", EmitDefaultValue=false)]
        public Location Location { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PreparePaymentTransactionRequestSchema {\n");
            sb.Append("  Urgency: ").Append(Urgency).Append("\n");
            sb.Append("  RequestDetails: ").Append(RequestDetails).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
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
            return this.Equals(input as PreparePaymentTransactionRequestSchema);
        }

        /// <summary>
        /// Returns true if PreparePaymentTransactionRequestSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PreparePaymentTransactionRequestSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PreparePaymentTransactionRequestSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Urgency == input.Urgency ||
                    (this.Urgency != null &&
                    this.Urgency.Equals(input.Urgency))
                ) && 
                (
                    this.RequestDetails == input.RequestDetails ||
                    (this.RequestDetails != null &&
                    this.RequestDetails.Equals(input.RequestDetails))
                ) && 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
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
                if (this.Urgency != null)
                    hashCode = hashCode * 59 + this.Urgency.GetHashCode();
                if (this.RequestDetails != null)
                    hashCode = hashCode * 59 + this.RequestDetails.GetHashCode();
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
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
            // Urgency (string) maxLength
            if(this.Urgency != null && this.Urgency.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, length must be less than 30.", new [] { "Urgency" });
            }

            // Urgency (string) minLength
            if(this.Urgency != null && this.Urgency.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, length must be greater than 0.", new [] { "Urgency" });
            }

            // Urgency (string) pattern
            Regex regexUrgency = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexUrgency.Match(this.Urgency).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, must match a pattern of " + regexUrgency, new [] { "Urgency" });
            }

            // Type (string) maxLength
            if(this.Type != null && this.Type.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be less than 30.", new [] { "Type" });
            }

            // Type (string) minLength
            if(this.Type != null && this.Type.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be greater than 0.", new [] { "Type" });
            }

            // Type (string) pattern
            Regex regexType = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexType.Match(this.Type).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, must match a pattern of " + regexType, new [] { "Type" });
            }

            yield break;
        }
    }

}
