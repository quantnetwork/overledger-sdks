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
    /// Unique reference to the ledger on a particular ledger network (optionally accessed from a particular node)
    /// </summary>
    [DataContract]
    public partial class Location :  IEquatable<Location>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Location" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected Location() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="Location" /> class.
        /// </summary>
        /// <param name="technology">The technology used by the desired network (required).</param>
        /// <param name="network">The network that the ledger resides on (required).</param>
        public Location(string technology = default(string), string network = default(string))
        {
            // to ensure "technology" is required (not null)
            if (technology == null)
            {
                throw new InvalidDataException("technology is a required property for Location and cannot be null");
            }
            else
            {
                this.Technology = technology;
            }

            // to ensure "network" is required (not null)
            if (network == null)
            {
                throw new InvalidDataException("network is a required property for Location and cannot be null");
            }
            else
            {
                this.Network = network;
            }

        }

        /// <summary>
        /// The technology used by the desired network
        /// </summary>
        /// <value>The technology used by the desired network</value>
        [DataMember(Name="technology", EmitDefaultValue=true)]
        public string Technology { get; set; }

        /// <summary>
        /// The network that the ledger resides on
        /// </summary>
        /// <value>The network that the ledger resides on</value>
        [DataMember(Name="network", EmitDefaultValue=true)]
        public string Network { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Location {\n");
            sb.Append("  Technology: ").Append(Technology).Append("\n");
            sb.Append("  Network: ").Append(Network).Append("\n");
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
            return this.Equals(input as Location);
        }

        /// <summary>
        /// Returns true if Location instances are equal
        /// </summary>
        /// <param name="input">Instance of Location to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Location input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Technology == input.Technology ||
                    (this.Technology != null &&
                    this.Technology.Equals(input.Technology))
                ) && 
                (
                    this.Network == input.Network ||
                    (this.Network != null &&
                    this.Network.Equals(input.Network))
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
                if (this.Technology != null)
                    hashCode = hashCode * 59 + this.Technology.GetHashCode();
                if (this.Network != null)
                    hashCode = hashCode * 59 + this.Network.GetHashCode();
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
            // Technology (string) maxLength
            if(this.Technology != null && this.Technology.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Technology, length must be less than 30.", new [] { "Technology" });
            }

            // Technology (string) minLength
            if(this.Technology != null && this.Technology.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Technology, length must be greater than 0.", new [] { "Technology" });
            }

            // Technology (string) pattern
            Regex regexTechnology = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexTechnology.Match(this.Technology).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Technology, must match a pattern of " + regexTechnology, new [] { "Technology" });
            }

            // Network (string) maxLength
            if(this.Network != null && this.Network.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Network, length must be less than 30.", new [] { "Network" });
            }

            // Network (string) minLength
            if(this.Network != null && this.Network.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Network, length must be greater than 0.", new [] { "Network" });
            }

            // Network (string) pattern
            Regex regexNetwork = new Regex(@"^[A-Za-z ]{1,30}", RegexOptions.CultureInvariant);
            if (false == regexNetwork.Match(this.Network).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Network, must match a pattern of " + regexNetwork, new [] { "Network" });
            }

            yield break;
        }
    }

}
