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
    /// BurnRequestDetailsSchemaQrc721
    /// </summary>
    [DataContract]
    public partial class BurnRequestDetailsSchemaQrc721 :  IEquatable<BurnRequestDetailsSchemaQrc721>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BurnRequestDetailsSchemaQrc721" /> class.
        /// </summary>
        /// <param name="owner">owner.</param>
        /// <param name="overledgerSigningType">overledgerSigningType.</param>
        public BurnRequestDetailsSchemaQrc721(OwnerBurnSchema owner = default(OwnerBurnSchema), string overledgerSigningType = default(string))
        {
            this.Owner = owner;
            this.OverledgerSigningType = overledgerSigningType;
        }

        /// <summary>
        /// Gets or Sets Owner
        /// </summary>
        [DataMember(Name="owner", EmitDefaultValue=false)]
        public OwnerBurnSchema Owner { get; set; }

        /// <summary>
        /// Gets or Sets OverledgerSigningType
        /// </summary>
        [DataMember(Name="overledgerSigningType", EmitDefaultValue=false)]
        public string OverledgerSigningType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BurnRequestDetailsSchemaQrc721 {\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  OverledgerSigningType: ").Append(OverledgerSigningType).Append("\n");
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
            return this.Equals(input as BurnRequestDetailsSchemaQrc721);
        }

        /// <summary>
        /// Returns true if BurnRequestDetailsSchemaQrc721 instances are equal
        /// </summary>
        /// <param name="input">Instance of BurnRequestDetailsSchemaQrc721 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BurnRequestDetailsSchemaQrc721 input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Owner == input.Owner ||
                    (this.Owner != null &&
                    this.Owner.Equals(input.Owner))
                ) && 
                (
                    this.OverledgerSigningType == input.OverledgerSigningType ||
                    (this.OverledgerSigningType != null &&
                    this.OverledgerSigningType.Equals(input.OverledgerSigningType))
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
                if (this.Owner != null)
                    hashCode = hashCode * 59 + this.Owner.GetHashCode();
                if (this.OverledgerSigningType != null)
                    hashCode = hashCode * 59 + this.OverledgerSigningType.GetHashCode();
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
            // OverledgerSigningType (string) maxLength
            if(this.OverledgerSigningType != null && this.OverledgerSigningType.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OverledgerSigningType, length must be less than 30.", new [] { "OverledgerSigningType" });
            }

            // OverledgerSigningType (string) minLength
            if(this.OverledgerSigningType != null && this.OverledgerSigningType.Length < 0)
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
