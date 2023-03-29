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
    /// AddressMonitoringResponseSchema
    /// </summary>
    [DataContract]
    public partial class AddressMonitoringResponseSchema :  IEquatable<AddressMonitoringResponseSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AddressMonitoringResponseSchema" /> class.
        /// </summary>
        /// <param name="resourceMonitoring">resourceMonitoring.</param>
        /// <param name="subscriptionDetails">subscriptionDetails.</param>
        /// <param name="subscription">subscription.</param>
        public AddressMonitoringResponseSchema(ResourceMonitoringDetails resourceMonitoring = default(ResourceMonitoringDetails), ResourceMonitoringSubscriptionDetails subscriptionDetails = default(ResourceMonitoringSubscriptionDetails), ResourceMonitoringSubscription subscription = default(ResourceMonitoringSubscription))
        {
            this.ResourceMonitoring = resourceMonitoring;
            this.SubscriptionDetails = subscriptionDetails;
            this.Subscription = subscription;
        }

        /// <summary>
        /// Gets or Sets ResourceMonitoring
        /// </summary>
        [DataMember(Name="resourceMonitoring", EmitDefaultValue=false)]
        public ResourceMonitoringDetails ResourceMonitoring { get; set; }

        /// <summary>
        /// Gets or Sets SubscriptionDetails
        /// </summary>
        [DataMember(Name="subscriptionDetails", EmitDefaultValue=false)]
        public ResourceMonitoringSubscriptionDetails SubscriptionDetails { get; set; }

        /// <summary>
        /// Gets or Sets Subscription
        /// </summary>
        [DataMember(Name="subscription", EmitDefaultValue=false)]
        public ResourceMonitoringSubscription Subscription { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AddressMonitoringResponseSchema {\n");
            sb.Append("  ResourceMonitoring: ").Append(ResourceMonitoring).Append("\n");
            sb.Append("  SubscriptionDetails: ").Append(SubscriptionDetails).Append("\n");
            sb.Append("  Subscription: ").Append(Subscription).Append("\n");
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
            return this.Equals(input as AddressMonitoringResponseSchema);
        }

        /// <summary>
        /// Returns true if AddressMonitoringResponseSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of AddressMonitoringResponseSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AddressMonitoringResponseSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ResourceMonitoring == input.ResourceMonitoring ||
                    (this.ResourceMonitoring != null &&
                    this.ResourceMonitoring.Equals(input.ResourceMonitoring))
                ) && 
                (
                    this.SubscriptionDetails == input.SubscriptionDetails ||
                    (this.SubscriptionDetails != null &&
                    this.SubscriptionDetails.Equals(input.SubscriptionDetails))
                ) && 
                (
                    this.Subscription == input.Subscription ||
                    (this.Subscription != null &&
                    this.Subscription.Equals(input.Subscription))
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
                if (this.ResourceMonitoring != null)
                    hashCode = hashCode * 59 + this.ResourceMonitoring.GetHashCode();
                if (this.SubscriptionDetails != null)
                    hashCode = hashCode * 59 + this.SubscriptionDetails.GetHashCode();
                if (this.Subscription != null)
                    hashCode = hashCode * 59 + this.Subscription.GetHashCode();
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
            yield break;
        }
    }

}
