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
    /// ResourceMonitoredAddressDetails
    /// </summary>
    [DataContract]
    public partial class ResourceMonitoredAddressDetails :  IEquatable<ResourceMonitoredAddressDetails>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResourceMonitoredAddressDetails" /> class.
        /// </summary>
        /// <param name="addressId">addressId.</param>
        public ResourceMonitoredAddressDetails(string addressId = default(string))
        {
            this.AddressId = addressId;
        }

        /// <summary>
        /// Gets or Sets AddressId
        /// </summary>
        [DataMember(Name="addressId", EmitDefaultValue=false)]
        public string AddressId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResourceMonitoredAddressDetails {\n");
            sb.Append("  AddressId: ").Append(AddressId).Append("\n");
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
            return this.Equals(input as ResourceMonitoredAddressDetails);
        }

        /// <summary>
        /// Returns true if ResourceMonitoredAddressDetails instances are equal
        /// </summary>
        /// <param name="input">Instance of ResourceMonitoredAddressDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResourceMonitoredAddressDetails input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AddressId == input.AddressId ||
                    (this.AddressId != null &&
                    this.AddressId.Equals(input.AddressId))
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
                if (this.AddressId != null)
                    hashCode = hashCode * 59 + this.AddressId.GetHashCode();
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
            // AddressId (string) maxLength
            if(this.AddressId != null && this.AddressId.Length > 100)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AddressId, length must be less than 100.", new [] { "AddressId" });
            }

            // AddressId (string) minLength
            if(this.AddressId != null && this.AddressId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AddressId, length must be greater than 0.", new [] { "AddressId" });
            }

            // AddressId (string) pattern
            Regex regexAddressId = new Regex(@"^[a-zA-Z0-9]{1,100}$", RegexOptions.CultureInvariant);
            if (false == regexAddressId.Match(this.AddressId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AddressId, must match a pattern of " + regexAddressId, new [] { "AddressId" });
            }

            yield break;
        }
    }

}
