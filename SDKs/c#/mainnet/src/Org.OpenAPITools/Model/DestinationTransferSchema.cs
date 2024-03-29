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
    /// DestinationTransferSchema
    /// </summary>
    [DataContract]
    public partial class DestinationTransferSchema :  IEquatable<DestinationTransferSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="DestinationTransferSchema" /> class.
        /// </summary>
        /// <param name="destinationId">destinationId.</param>
        /// <param name="transfer">transfer.</param>
        public DestinationTransferSchema(string destinationId = default(string), TransferSchema transfer = default(TransferSchema))
        {
            this.DestinationId = destinationId;
            this.Transfer = transfer;
        }

        /// <summary>
        /// Gets or Sets DestinationId
        /// </summary>
        [DataMember(Name="destinationId", EmitDefaultValue=false)]
        public string DestinationId { get; set; }

        /// <summary>
        /// Gets or Sets Transfer
        /// </summary>
        [DataMember(Name="transfer", EmitDefaultValue=false)]
        public TransferSchema Transfer { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class DestinationTransferSchema {\n");
            sb.Append("  DestinationId: ").Append(DestinationId).Append("\n");
            sb.Append("  Transfer: ").Append(Transfer).Append("\n");
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
            return this.Equals(input as DestinationTransferSchema);
        }

        /// <summary>
        /// Returns true if DestinationTransferSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of DestinationTransferSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(DestinationTransferSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DestinationId == input.DestinationId ||
                    (this.DestinationId != null &&
                    this.DestinationId.Equals(input.DestinationId))
                ) && 
                (
                    this.Transfer == input.Transfer ||
                    (this.Transfer != null &&
                    this.Transfer.Equals(input.Transfer))
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
                if (this.DestinationId != null)
                    hashCode = hashCode * 59 + this.DestinationId.GetHashCode();
                if (this.Transfer != null)
                    hashCode = hashCode * 59 + this.Transfer.GetHashCode();
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
            // DestinationId (string) maxLength
            if(this.DestinationId != null && this.DestinationId.Length > 500)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for DestinationId, length must be less than 500.", new [] { "DestinationId" });
            }

            // DestinationId (string) minLength
            if(this.DestinationId != null && this.DestinationId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for DestinationId, length must be greater than 0.", new [] { "DestinationId" });
            }

            // DestinationId (string) pattern
            Regex regexDestinationId = new Regex(@"^[a-zA-Z0-9:,\/.=\\-\\s]{1,500}", RegexOptions.CultureInvariant);
            if (false == regexDestinationId.Match(this.DestinationId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for DestinationId, must match a pattern of " + regexDestinationId, new [] { "DestinationId" });
            }

            yield break;
        }
    }

}
