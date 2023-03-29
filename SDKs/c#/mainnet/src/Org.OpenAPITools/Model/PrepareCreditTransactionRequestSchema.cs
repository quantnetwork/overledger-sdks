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
    /// PrepareCreditTransactionRequestSchema
    /// </summary>
    [DataContract]
    public partial class PrepareCreditTransactionRequestSchema :  IEquatable<PrepareCreditTransactionRequestSchema>, IValidatableObject
    {
        /// <summary>
        /// The type of the transaction
        /// </summary>
        /// <value>The type of the transaction</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum TypeEnum
        {
            /// <summary>
            /// Enum Payment for value: Payment
            /// </summary>
            [EnumMember(Value = "Payment")]
            Payment = 1,

            /// <summary>
            /// Enum Transfer for value: Transfer
            /// </summary>
            [EnumMember(Value = "Transfer")]
            Transfer = 2,

            /// <summary>
            /// Enum ContractInvoke for value: Contract Invoke
            /// </summary>
            [EnumMember(Value = "Contract Invoke")]
            ContractInvoke = 3

        }

        /// <summary>
        /// The type of the transaction
        /// </summary>
        /// <value>The type of the transaction</value>
        [DataMember(Name="type", EmitDefaultValue=true)]
        public TypeEnum Type { get; set; }
        /// <summary>
        /// This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
        /// </summary>
        /// <value>This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum UrgencyEnum
        {
            /// <summary>
            /// Enum Normal for value: Normal
            /// </summary>
            [EnumMember(Value = "Normal")]
            Normal = 1,

            /// <summary>
            /// Enum Fast for value: Fast
            /// </summary>
            [EnumMember(Value = "Fast")]
            Fast = 2,

            /// <summary>
            /// Enum Urgent for value: Urgent
            /// </summary>
            [EnumMember(Value = "Urgent")]
            Urgent = 3

        }

        /// <summary>
        /// This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
        /// </summary>
        /// <value>This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal</value>
        [DataMember(Name="urgency", EmitDefaultValue=true)]
        public UrgencyEnum Urgency { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="PrepareCreditTransactionRequestSchema" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PrepareCreditTransactionRequestSchema() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PrepareCreditTransactionRequestSchema" /> class.
        /// </summary>
        /// <param name="location">location (required).</param>
        /// <param name="type">The type of the transaction (required).</param>
        /// <param name="urgency">This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal (required).</param>
        /// <param name="requestDetails">requestDetails.</param>
        public PrepareCreditTransactionRequestSchema(Location location = default(Location), TypeEnum type = default(TypeEnum), UrgencyEnum urgency = default(UrgencyEnum), CreditRequestDetailsSchema requestDetails = default(CreditRequestDetailsSchema))
        {
            // to ensure "location" is required (not null)
            if (location == null)
            {
                throw new InvalidDataException("location is a required property for PrepareCreditTransactionRequestSchema and cannot be null");
            }
            else
            {
                this.Location = location;
            }

            // to ensure "type" is required (not null)
            if (type == null)
            {
                throw new InvalidDataException("type is a required property for PrepareCreditTransactionRequestSchema and cannot be null");
            }
            else
            {
                this.Type = type;
            }

            // to ensure "urgency" is required (not null)
            if (urgency == null)
            {
                throw new InvalidDataException("urgency is a required property for PrepareCreditTransactionRequestSchema and cannot be null");
            }
            else
            {
                this.Urgency = urgency;
            }

            this.RequestDetails = requestDetails;
        }

        /// <summary>
        /// Gets or Sets Location
        /// </summary>
        [DataMember(Name="location", EmitDefaultValue=true)]
        public Location Location { get; set; }



        /// <summary>
        /// Gets or Sets RequestDetails
        /// </summary>
        [DataMember(Name="requestDetails", EmitDefaultValue=false)]
        public CreditRequestDetailsSchema RequestDetails { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PrepareCreditTransactionRequestSchema {\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Urgency: ").Append(Urgency).Append("\n");
            sb.Append("  RequestDetails: ").Append(RequestDetails).Append("\n");
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
            return this.Equals(input as PrepareCreditTransactionRequestSchema);
        }

        /// <summary>
        /// Returns true if PrepareCreditTransactionRequestSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PrepareCreditTransactionRequestSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PrepareCreditTransactionRequestSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Urgency == input.Urgency ||
                    (this.Urgency != null &&
                    this.Urgency.Equals(input.Urgency))
                ) && 
                (
                    this.RequestDetails == input.RequestDetails ||
                    (this.RequestDetails != null &&
                    this.RequestDetails.Equals(input.RequestDetails))
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
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Urgency != null)
                    hashCode = hashCode * 59 + this.Urgency.GetHashCode();
                if (this.RequestDetails != null)
                    hashCode = hashCode * 59 + this.RequestDetails.GetHashCode();
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
            // Type (string) maxLength
            if(this.Type != null && this.Type.ToString().Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be less than 30.", new [] { "Type" });
            }

            // Type (string) minLength
            if(this.Type != null && this.Type.ToString().Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be greater than 0.", new [] { "Type" });
            }

            // Type (string) pattern
            Regex regexType = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexType.Match(this.Type).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, must match a pattern of " + regexType, new [] { "Type" });
            }

            // Urgency (string) maxLength
            if(this.Urgency != null && this.Urgency.ToString().Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, length must be less than 30.", new [] { "Urgency" });
            }

            // Urgency (string) minLength
            if(this.Urgency != null && this.Urgency.ToString().Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, length must be greater than 0.", new [] { "Urgency" });
            }

            // Urgency (string) pattern
            Regex regexUrgency = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexUrgency.Match(this.Urgency).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Urgency, must match a pattern of " + regexUrgency, new [] { "Urgency" });
            }

            yield break;
        }
    }

}
