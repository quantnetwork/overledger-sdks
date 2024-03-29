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
    /// CreateWebhookSubscriptionRequestSchema
    /// </summary>
    [DataContract]
    public partial class CreateWebhookSubscriptionRequestSchema :  IEquatable<CreateWebhookSubscriptionRequestSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CreateWebhookSubscriptionRequestSchema" /> class.
        /// </summary>
        /// <param name="type">type.</param>
        /// <param name="ids">ids.</param>
        /// <param name="callbackUrl">callbackUrl.</param>
        public CreateWebhookSubscriptionRequestSchema(string type = default(string), List<string> ids = default(List<string>), string callbackUrl = default(string))
        {
            this.Type = type;
            this.Ids = ids;
            this.CallbackUrl = callbackUrl;
        }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Gets or Sets Ids
        /// </summary>
        [DataMember(Name="ids", EmitDefaultValue=false)]
        public List<string> Ids { get; set; }

        /// <summary>
        /// Gets or Sets CallbackUrl
        /// </summary>
        [DataMember(Name="callbackUrl", EmitDefaultValue=false)]
        public string CallbackUrl { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CreateWebhookSubscriptionRequestSchema {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Ids: ").Append(Ids).Append("\n");
            sb.Append("  CallbackUrl: ").Append(CallbackUrl).Append("\n");
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
            return this.Equals(input as CreateWebhookSubscriptionRequestSchema);
        }

        /// <summary>
        /// Returns true if CreateWebhookSubscriptionRequestSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of CreateWebhookSubscriptionRequestSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CreateWebhookSubscriptionRequestSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Ids == input.Ids ||
                    this.Ids != null &&
                    input.Ids != null &&
                    this.Ids.SequenceEqual(input.Ids)
                ) && 
                (
                    this.CallbackUrl == input.CallbackUrl ||
                    (this.CallbackUrl != null &&
                    this.CallbackUrl.Equals(input.CallbackUrl))
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
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Ids != null)
                    hashCode = hashCode * 59 + this.Ids.GetHashCode();
                if (this.CallbackUrl != null)
                    hashCode = hashCode * 59 + this.CallbackUrl.GetHashCode();
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
            if(this.Type != null && this.Type.Length > 50)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be less than 50.", new [] { "Type" });
            }

            // Type (string) minLength
            if(this.Type != null && this.Type.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, length must be greater than 0.", new [] { "Type" });
            }

            // Type (string) pattern
            Regex regexType = new Regex(@"^[a-zA-Z0-9-_ ]{1,50}$", RegexOptions.CultureInvariant);
            if (false == regexType.Match(this.Type).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Type, must match a pattern of " + regexType, new [] { "Type" });
            }



            // CallbackUrl (string) maxLength
            if(this.CallbackUrl != null && this.CallbackUrl.Length > 300)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CallbackUrl, length must be less than 300.", new [] { "CallbackUrl" });
            }

            // CallbackUrl (string) minLength
            if(this.CallbackUrl != null && this.CallbackUrl.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CallbackUrl, length must be greater than 0.", new [] { "CallbackUrl" });
            }

            // CallbackUrl (string) pattern
            Regex regexCallbackUrl = new Regex(@"^http[\\S\\s]{1,300}$", RegexOptions.CultureInvariant);
            if (false == regexCallbackUrl.Match(this.CallbackUrl).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CallbackUrl, must match a pattern of " + regexCallbackUrl, new [] { "CallbackUrl" });
            }

            yield break;
        }
    }

}
