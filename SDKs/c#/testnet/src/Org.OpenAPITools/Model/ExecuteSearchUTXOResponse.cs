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
    /// ExecuteSearchUTXOResponse
    /// </summary>
    [DataContract]
    public partial class ExecuteSearchUTXOResponse :  IEquatable<ExecuteSearchUTXOResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ExecuteSearchUTXOResponse" /> class.
        /// </summary>
        /// <param name="utxoId">utxoId.</param>
        /// <param name="destination">destination.</param>
        /// <param name="location">location.</param>
        /// <param name="timestamp">timestamp.</param>
        /// <param name="status">status.</param>
        /// <param name="nativeData">nativeData.</param>
        public ExecuteSearchUTXOResponse(string utxoId = default(string), List<Destination> destination = default(List<Destination>), Location location = default(Location), string timestamp = default(string), Status status = default(Status), Object nativeData = default(Object))
        {
            this.UtxoId = utxoId;
            this.Destination = destination;
            this.Location = location;
            this.Timestamp = timestamp;
            this.Status = status;
            this.NativeData = nativeData;
        }

        /// <summary>
        /// Gets or Sets UtxoId
        /// </summary>
        [DataMember(Name="utxoId", EmitDefaultValue=false)]
        public string UtxoId { get; set; }

        /// <summary>
        /// Gets or Sets Destination
        /// </summary>
        [DataMember(Name="destination", EmitDefaultValue=false)]
        public List<Destination> Destination { get; set; }

        /// <summary>
        /// Gets or Sets Location
        /// </summary>
        [DataMember(Name="location", EmitDefaultValue=false)]
        public Location Location { get; set; }

        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public string Timestamp { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public Status Status { get; set; }

        /// <summary>
        /// Gets or Sets NativeData
        /// </summary>
        [DataMember(Name="nativeData", EmitDefaultValue=false)]
        public Object NativeData { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ExecuteSearchUTXOResponse {\n");
            sb.Append("  UtxoId: ").Append(UtxoId).Append("\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  NativeData: ").Append(NativeData).Append("\n");
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
            return this.Equals(input as ExecuteSearchUTXOResponse);
        }

        /// <summary>
        /// Returns true if ExecuteSearchUTXOResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of ExecuteSearchUTXOResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ExecuteSearchUTXOResponse input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.UtxoId == input.UtxoId ||
                    (this.UtxoId != null &&
                    this.UtxoId.Equals(input.UtxoId))
                ) && 
                (
                    this.Destination == input.Destination ||
                    this.Destination != null &&
                    input.Destination != null &&
                    this.Destination.SequenceEqual(input.Destination)
                ) && 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this.Timestamp == input.Timestamp ||
                    (this.Timestamp != null &&
                    this.Timestamp.Equals(input.Timestamp))
                ) && 
                (
                    this.Status == input.Status ||
                    (this.Status != null &&
                    this.Status.Equals(input.Status))
                ) && 
                (
                    this.NativeData == input.NativeData ||
                    (this.NativeData != null &&
                    this.NativeData.Equals(input.NativeData))
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
                if (this.UtxoId != null)
                    hashCode = hashCode * 59 + this.UtxoId.GetHashCode();
                if (this.Destination != null)
                    hashCode = hashCode * 59 + this.Destination.GetHashCode();
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this.Timestamp != null)
                    hashCode = hashCode * 59 + this.Timestamp.GetHashCode();
                if (this.Status != null)
                    hashCode = hashCode * 59 + this.Status.GetHashCode();
                if (this.NativeData != null)
                    hashCode = hashCode * 59 + this.NativeData.GetHashCode();
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


            // Timestamp (string) maxLength
            if(this.Timestamp != null && this.Timestamp.Length > 50)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Timestamp, length must be less than 50.", new [] { "Timestamp" });
            }

            // Timestamp (string) minLength
            if(this.Timestamp != null && this.Timestamp.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Timestamp, length must be greater than 0.", new [] { "Timestamp" });
            }

            // Timestamp (string) pattern
            Regex regexTimestamp = new Regex(@"^[a-zA-Z_0-9.,:\\- ]{1,50}", RegexOptions.CultureInvariant);
            if (false == regexTimestamp.Match(this.Timestamp).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Timestamp, must match a pattern of " + regexTimestamp, new [] { "Timestamp" });
            }

            yield break;
        }
    }

}