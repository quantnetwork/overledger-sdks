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
    /// Where is this transaction coming from
    /// </summary>
    [DataContract]
    public partial class Origin :  IEquatable<Origin>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Origin" /> class.
        /// </summary>
        /// <param name="sequence">sequence.</param>
        /// <param name="originId">originId.</param>
        /// <param name="smartContract">smartContract.</param>
        public Origin(string sequence = default(string), string originId = default(string), SmartContract smartContract = default(SmartContract))
        {
            this.Sequence = sequence;
            this.OriginId = originId;
            this.SmartContract = smartContract;
        }

        /// <summary>
        /// Gets or Sets Sequence
        /// </summary>
        [DataMember(Name="sequence", EmitDefaultValue=false)]
        public string Sequence { get; set; }

        /// <summary>
        /// Gets or Sets OriginId
        /// </summary>
        [DataMember(Name="originId", EmitDefaultValue=false)]
        public string OriginId { get; set; }

        /// <summary>
        /// Gets or Sets SmartContract
        /// </summary>
        [DataMember(Name="smartContract", EmitDefaultValue=false)]
        public SmartContract SmartContract { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Origin {\n");
            sb.Append("  Sequence: ").Append(Sequence).Append("\n");
            sb.Append("  OriginId: ").Append(OriginId).Append("\n");
            sb.Append("  SmartContract: ").Append(SmartContract).Append("\n");
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
            return this.Equals(input as Origin);
        }

        /// <summary>
        /// Returns true if Origin instances are equal
        /// </summary>
        /// <param name="input">Instance of Origin to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Origin input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Sequence == input.Sequence ||
                    (this.Sequence != null &&
                    this.Sequence.Equals(input.Sequence))
                ) && 
                (
                    this.OriginId == input.OriginId ||
                    (this.OriginId != null &&
                    this.OriginId.Equals(input.OriginId))
                ) && 
                (
                    this.SmartContract == input.SmartContract ||
                    (this.SmartContract != null &&
                    this.SmartContract.Equals(input.SmartContract))
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
                if (this.Sequence != null)
                    hashCode = hashCode * 59 + this.Sequence.GetHashCode();
                if (this.OriginId != null)
                    hashCode = hashCode * 59 + this.OriginId.GetHashCode();
                if (this.SmartContract != null)
                    hashCode = hashCode * 59 + this.SmartContract.GetHashCode();
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
            // Sequence (string) maxLength
            if(this.Sequence != null && this.Sequence.Length > 100)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Sequence, length must be less than 100.", new [] { "Sequence" });
            }

            // Sequence (string) minLength
            if(this.Sequence != null && this.Sequence.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Sequence, length must be greater than 0.", new [] { "Sequence" });
            }

            // Sequence (string) pattern
            Regex regexSequence = new Regex(@"^[a-zA-Z0-9]{1,100}$", RegexOptions.CultureInvariant);
            if (false == regexSequence.Match(this.Sequence).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Sequence, must match a pattern of " + regexSequence, new [] { "Sequence" });
            }

            // OriginId (string) maxLength
            if(this.OriginId != null && this.OriginId.Length > 66)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OriginId, length must be less than 66.", new [] { "OriginId" });
            }

            // OriginId (string) minLength
            if(this.OriginId != null && this.OriginId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OriginId, length must be greater than 0.", new [] { "OriginId" });
            }

            // OriginId (string) pattern
            Regex regexOriginId = new Regex(@"^[A-Za-z0-9:]{1,66}$", RegexOptions.CultureInvariant);
            if (false == regexOriginId.Match(this.OriginId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OriginId, must match a pattern of " + regexOriginId, new [] { "OriginId" });
            }

            yield break;
        }
    }

}