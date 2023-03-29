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
    /// The payload for each recipient
    /// </summary>
    [DataContract]
    public partial class PaymentSchema :  IEquatable<PaymentSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentSchema" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PaymentSchema() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentSchema" /> class.
        /// </summary>
        /// <param name="amount">The payload amount. The exact format depends on the unit of the token. (required).</param>
        /// <param name="unit">The currency or token code (required).</param>
        public PaymentSchema(string amount = default(string), string unit = default(string))
        {
            // to ensure "amount" is required (not null)
            if (amount == null)
            {
                throw new InvalidDataException("amount is a required property for PaymentSchema and cannot be null");
            }
            else
            {
                this.Amount = amount;
            }

            // to ensure "unit" is required (not null)
            if (unit == null)
            {
                throw new InvalidDataException("unit is a required property for PaymentSchema and cannot be null");
            }
            else
            {
                this.Unit = unit;
            }

        }

        /// <summary>
        /// The payload amount. The exact format depends on the unit of the token.
        /// </summary>
        /// <value>The payload amount. The exact format depends on the unit of the token.</value>
        [DataMember(Name="amount", EmitDefaultValue=true)]
        public string Amount { get; set; }

        /// <summary>
        /// The currency or token code
        /// </summary>
        /// <value>The currency or token code</value>
        [DataMember(Name="unit", EmitDefaultValue=true)]
        public string Unit { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentSchema {\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  Unit: ").Append(Unit).Append("\n");
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
            return this.Equals(input as PaymentSchema);
        }

        /// <summary>
        /// Returns true if PaymentSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PaymentSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PaymentSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Amount == input.Amount ||
                    (this.Amount != null &&
                    this.Amount.Equals(input.Amount))
                ) && 
                (
                    this.Unit == input.Unit ||
                    (this.Unit != null &&
                    this.Unit.Equals(input.Unit))
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
                if (this.Amount != null)
                    hashCode = hashCode * 59 + this.Amount.GetHashCode();
                if (this.Unit != null)
                    hashCode = hashCode * 59 + this.Unit.GetHashCode();
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
            // Amount (string) maxLength
            if(this.Amount != null && this.Amount.Length > 100)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Amount, length must be less than 100.", new [] { "Amount" });
            }

            // Amount (string) minLength
            if(this.Amount != null && this.Amount.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Amount, length must be greater than 0.", new [] { "Amount" });
            }

            // Amount (string) pattern
            Regex regexAmount = new Regex(@"^[A-Za-z0-9. ]{1,100}", RegexOptions.CultureInvariant);
            if (false == regexAmount.Match(this.Amount).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Amount, must match a pattern of " + regexAmount, new [] { "Amount" });
            }

            // Unit (string) maxLength
            if(this.Unit != null && this.Unit.Length > 5)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, length must be less than 5.", new [] { "Unit" });
            }

            // Unit (string) minLength
            if(this.Unit != null && this.Unit.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, length must be greater than 0.", new [] { "Unit" });
            }

            // Unit (string) pattern
            Regex regexUnit = new Regex(@"^[A-Za-z0-9 ]{1,5}", RegexOptions.CultureInvariant);
            if (false == regexUnit.Match(this.Unit).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Unit, must match a pattern of " + regexUnit, new [] { "Unit" });
            }

            yield break;
        }
    }

}
