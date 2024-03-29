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
    /// PrepareAndExecuteBalanceDetails
    /// </summary>
    [DataContract]
    public partial class PrepareAndExecuteBalanceDetails :  IEquatable<PrepareAndExecuteBalanceDetails>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PrepareAndExecuteBalanceDetails" /> class.
        /// </summary>
        /// <param name="unit">unit.</param>
        /// <param name="amount">amount.</param>
        public PrepareAndExecuteBalanceDetails(string unit = default(string), string amount = default(string))
        {
            this.Unit = unit;
            this.Amount = amount;
        }

        /// <summary>
        /// Gets or Sets Unit
        /// </summary>
        [DataMember(Name="unit", EmitDefaultValue=false)]
        public string Unit { get; set; }

        /// <summary>
        /// Gets or Sets Amount
        /// </summary>
        [DataMember(Name="amount", EmitDefaultValue=false)]
        public string Amount { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PrepareAndExecuteBalanceDetails {\n");
            sb.Append("  Unit: ").Append(Unit).Append("\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
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
            return this.Equals(input as PrepareAndExecuteBalanceDetails);
        }

        /// <summary>
        /// Returns true if PrepareAndExecuteBalanceDetails instances are equal
        /// </summary>
        /// <param name="input">Instance of PrepareAndExecuteBalanceDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PrepareAndExecuteBalanceDetails input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Unit == input.Unit ||
                    (this.Unit != null &&
                    this.Unit.Equals(input.Unit))
                ) && 
                (
                    this.Amount == input.Amount ||
                    (this.Amount != null &&
                    this.Amount.Equals(input.Amount))
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
                if (this.Unit != null)
                    hashCode = hashCode * 59 + this.Unit.GetHashCode();
                if (this.Amount != null)
                    hashCode = hashCode * 59 + this.Amount.GetHashCode();
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
            // Unit (string) maxLength
            if(this.Unit != null && this.Unit.Length > 10)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, length must be less than 10.", new [] { "Unit" });
            }

            // Unit (string) minLength
            if(this.Unit != null && this.Unit.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, length must be greater than 0.", new [] { "Unit" });
            }

            // Unit (string) pattern
            Regex regexUnit = new Regex(@"^[a-zA-Z_ ]{1,10}$", RegexOptions.CultureInvariant);
            if (false == regexUnit.Match(this.Unit).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, must match a pattern of " + regexUnit, new [] { "Unit" });
            }

            yield break;
        }
    }

}
