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
    /// ResourceMonitoringSubscription
    /// </summary>
    [DataContract]
    public partial class ResourceMonitoringSubscription :  IEquatable<ResourceMonitoringSubscription>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResourceMonitoringSubscription" /> class.
        /// </summary>
        /// <param name="subscriptionId">subscriptionId.</param>
        /// <param name="type">type.</param>
        /// <param name="callbackUrl">callbackUrl.</param>
        public ResourceMonitoringSubscription(string subscriptionId = default(string), string type = default(string), string callbackUrl = default(string))
        {
            this.SubscriptionId = subscriptionId;
            this.Type = type;
            this.CallbackUrl = callbackUrl;
        }

        /// <summary>
        /// Gets or Sets SubscriptionId
        /// </summary>
        [DataMember(Name="subscriptionId", EmitDefaultValue=false)]
        public string SubscriptionId { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

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
            sb.Append("class ResourceMonitoringSubscription {\n");
            sb.Append("  SubscriptionId: ").Append(SubscriptionId).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
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
            return this.Equals(input as ResourceMonitoringSubscription);
        }

        /// <summary>
        /// Returns true if ResourceMonitoringSubscription instances are equal
        /// </summary>
        /// <param name="input">Instance of ResourceMonitoringSubscription to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResourceMonitoringSubscription input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SubscriptionId == input.SubscriptionId ||
                    (this.SubscriptionId != null &&
                    this.SubscriptionId.Equals(input.SubscriptionId))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
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
                if (this.SubscriptionId != null)
                    hashCode = hashCode * 59 + this.SubscriptionId.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
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
            // SubscriptionId (string) maxLength
            if(this.SubscriptionId != null && this.SubscriptionId.Length > 24)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SubscriptionId, length must be less than 24.", new [] { "SubscriptionId" });
            }

            // SubscriptionId (string) minLength
            if(this.SubscriptionId != null && this.SubscriptionId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SubscriptionId, length must be greater than 0.", new [] { "SubscriptionId" });
            }

            // SubscriptionId (string) pattern
            Regex regexSubscriptionId = new Regex(@"^[a-z0-9-]{1,24}$", RegexOptions.CultureInvariant);
            if (false == regexSubscriptionId.Match(this.SubscriptionId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for SubscriptionId, must match a pattern of " + regexSubscriptionId, new [] { "SubscriptionId" });
            }

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
