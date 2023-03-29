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
    /// Who is the collector of the tokens.
    /// </summary>
    [DataContract]
    public partial class Collector :  IEquatable<Collector>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Collector" /> class.
        /// </summary>
        /// <param name="accountId">accountId.</param>
        /// <param name="transfer">transfer.</param>
        public Collector(string accountId = default(string), Transfer transfer = default(Transfer))
        {
            this.AccountId = accountId;
            this.Transfer = transfer;
        }

        /// <summary>
        /// Gets or Sets AccountId
        /// </summary>
        [DataMember(Name="accountId", EmitDefaultValue=false)]
        public string AccountId { get; set; }

        /// <summary>
        /// Gets or Sets Transfer
        /// </summary>
        [DataMember(Name="transfer", EmitDefaultValue=false)]
        public Transfer Transfer { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Collector {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
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
            return this.Equals(input as Collector);
        }

        /// <summary>
        /// Returns true if Collector instances are equal
        /// </summary>
        /// <param name="input">Instance of Collector to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Collector input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AccountId == input.AccountId ||
                    (this.AccountId != null &&
                    this.AccountId.Equals(input.AccountId))
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
                if (this.AccountId != null)
                    hashCode = hashCode * 59 + this.AccountId.GetHashCode();
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
            // AccountId (string) maxLength
            if(this.AccountId != null && this.AccountId.Length > 500)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AccountId, length must be less than 500.", new [] { "AccountId" });
            }

            // AccountId (string) minLength
            if(this.AccountId != null && this.AccountId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AccountId, length must be greater than 0.", new [] { "AccountId" });
            }

            // AccountId (string) pattern
            Regex regexAccountId = new Regex(@"^[a-zA-Z0-9:,\/.=\\-\\s]{1,500}", RegexOptions.CultureInvariant);
            if (false == regexAccountId.Match(this.AccountId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AccountId, must match a pattern of " + regexAccountId, new [] { "AccountId" });
            }

            yield break;
        }
    }

}
