/*
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
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
    /// MonitorSmartContractEventParam
    /// </summary>
    [DataContract]
    public partial class MonitorSmartContractEventParam :  IEquatable<MonitorSmartContractEventParam>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MonitorSmartContractEventParam" /> class.
        /// </summary>
        /// <param name="selectedIntegerLength">selectedIntegerLength.</param>
        /// <param name="type">type.</param>
        /// <param name="value">value.</param>
        public MonitorSmartContractEventParam(string selectedIntegerLength = default(string), string type = default(string), string value = default(string))
        {
            this.SelectedIntegerLength = selectedIntegerLength;
            this.Type = type;
            this.Value = value;
        }

        /// <summary>
        /// Gets or Sets SelectedIntegerLength
        /// </summary>
        [DataMember(Name="selectedIntegerLength", EmitDefaultValue=false)]
        public string SelectedIntegerLength { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Gets or Sets Value
        /// </summary>
        [DataMember(Name="value", EmitDefaultValue=false)]
        public string Value { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MonitorSmartContractEventParam {\n");
            sb.Append("  SelectedIntegerLength: ").Append(SelectedIntegerLength).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
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
            return this.Equals(input as MonitorSmartContractEventParam);
        }

        /// <summary>
        /// Returns true if MonitorSmartContractEventParam instances are equal
        /// </summary>
        /// <param name="input">Instance of MonitorSmartContractEventParam to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MonitorSmartContractEventParam input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SelectedIntegerLength == input.SelectedIntegerLength ||
                    (this.SelectedIntegerLength != null &&
                    this.SelectedIntegerLength.Equals(input.SelectedIntegerLength))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Value == input.Value ||
                    (this.Value != null &&
                    this.Value.Equals(input.Value))
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
                if (this.SelectedIntegerLength != null)
                    hashCode = hashCode * 59 + this.SelectedIntegerLength.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Value != null)
                    hashCode = hashCode * 59 + this.Value.GetHashCode();
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
            // SelectedIntegerLength (string) maxLength
            if(this.SelectedIntegerLength != null && this.SelectedIntegerLength.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SelectedIntegerLength, length must be less than 30.", new [] { "SelectedIntegerLength" });
            }

            // SelectedIntegerLength (string) minLength
            if(this.SelectedIntegerLength != null && this.SelectedIntegerLength.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SelectedIntegerLength, length must be greater than 0.", new [] { "SelectedIntegerLength" });
            }

            // SelectedIntegerLength (string) pattern
            Regex regexSelectedIntegerLength = new Regex(@"^[a-zA-Z0-9]{1,30}$", RegexOptions.CultureInvariant);
            if (false == regexSelectedIntegerLength.Match(this.SelectedIntegerLength).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SelectedIntegerLength, must match a pattern of " + regexSelectedIntegerLength, new [] { "SelectedIntegerLength" });
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
            Regex regexType = new Regex(@"^[a-zA-Z]{1,30}$", RegexOptions.CultureInvariant);
            if (false == regexType.Match(this.Type).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, must match a pattern of " + regexType, new [] { "Type" });
            }

            // Value (string) maxLength
            if(this.Value != null && this.Value.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Value, length must be less than 150.", new [] { "Value" });
            }

            // Value (string) minLength
            if(this.Value != null && this.Value.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Value, length must be greater than 0.", new [] { "Value" });
            }

            // Value (string) pattern
            Regex regexValue = new Regex(@"^[a-zA-Z0-9_ ]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexValue.Match(this.Value).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Value, must match a pattern of " + regexValue, new [] { "Value" });
            }

            yield break;
        }
    }

}
