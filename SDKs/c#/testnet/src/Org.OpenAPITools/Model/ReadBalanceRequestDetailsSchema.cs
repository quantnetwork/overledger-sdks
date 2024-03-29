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
    /// ReadBalanceRequestDetailsSchema
    /// </summary>
    [DataContract]
    public partial class ReadBalanceRequestDetailsSchema :  IEquatable<ReadBalanceRequestDetailsSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ReadBalanceRequestDetailsSchema" /> class.
        /// </summary>
        /// <param name="tokenName">Name of the token.</param>
        /// <param name="accountId">The unique identifiers of the account.</param>
        public ReadBalanceRequestDetailsSchema(string tokenName = default(string), string accountId = default(string))
        {
            this.TokenName = tokenName;
            this.AccountId = accountId;
        }

        /// <summary>
        /// Name of the token
        /// </summary>
        /// <value>Name of the token</value>
        [DataMember(Name="tokenName", EmitDefaultValue=false)]
        public string TokenName { get; set; }

        /// <summary>
        /// The unique identifiers of the account
        /// </summary>
        /// <value>The unique identifiers of the account</value>
        [DataMember(Name="accountId", EmitDefaultValue=false)]
        public string AccountId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ReadBalanceRequestDetailsSchema {\n");
            sb.Append("  TokenName: ").Append(TokenName).Append("\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
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
            return this.Equals(input as ReadBalanceRequestDetailsSchema);
        }

        /// <summary>
        /// Returns true if ReadBalanceRequestDetailsSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of ReadBalanceRequestDetailsSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ReadBalanceRequestDetailsSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.TokenName == input.TokenName ||
                    (this.TokenName != null &&
                    this.TokenName.Equals(input.TokenName))
                ) && 
                (
                    this.AccountId == input.AccountId ||
                    (this.AccountId != null &&
                    this.AccountId.Equals(input.AccountId))
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
                if (this.TokenName != null)
                    hashCode = hashCode * 59 + this.TokenName.GetHashCode();
                if (this.AccountId != null)
                    hashCode = hashCode * 59 + this.AccountId.GetHashCode();
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
            // TokenName (string) maxLength
            if(this.TokenName != null && this.TokenName.Length > 100)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TokenName, length must be less than 100.", new [] { "TokenName" });
            }

            // TokenName (string) minLength
            if(this.TokenName != null && this.TokenName.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TokenName, length must be greater than 0.", new [] { "TokenName" });
            }

            // TokenName (string) pattern
            Regex regexTokenName = new Regex(@"^[A-Za-z0-9 ]{1,100}", RegexOptions.CultureInvariant);
            if (false == regexTokenName.Match(this.TokenName).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TokenName, must match a pattern of " + regexTokenName, new [] { "TokenName" });
            }

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
