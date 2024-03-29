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
    /// Erc20DTO
    /// </summary>
    [DataContract]
    public partial class Erc20DTO :  IEquatable<Erc20DTO>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Erc20DTO" /> class.
        /// </summary>
        /// <param name="isQrc20">isQrc20.</param>
        /// <param name="tokenUnit">tokenUnit.</param>
        /// <param name="decimalPlaces">decimalPlaces.</param>
        /// <param name="functions">functions.</param>
        /// <param name="tokenName">tokenName.</param>
        /// <param name="smartContractAddress">smartContractAddress.</param>
        /// <param name="location">location.</param>
        /// <param name="version">version.</param>
        /// <param name="url">url.</param>
        /// <param name="auditDate">auditDate.</param>
        public Erc20DTO(bool isQrc20 = default(bool), string tokenUnit = default(string), int decimalPlaces = default(int), List<TierFunctionDTO> functions = default(List<TierFunctionDTO>), string tokenName = default(string), string smartContractAddress = default(string), LocationDTO location = default(LocationDTO), string version = default(string), string url = default(string), DateTime auditDate = default(DateTime))
        {
            this.IsQrc20 = isQrc20;
            this.TokenUnit = tokenUnit;
            this.DecimalPlaces = decimalPlaces;
            this.Functions = functions;
            this.TokenName = tokenName;
            this.SmartContractAddress = smartContractAddress;
            this.Location = location;
            this._Version = version;
            this.Url = url;
            this.AuditDate = auditDate;
        }

        /// <summary>
        /// Gets or Sets IsQrc20
        /// </summary>
        [DataMember(Name="isQrc20", EmitDefaultValue=false)]
        public bool IsQrc20 { get; set; }

        /// <summary>
        /// Gets or Sets TokenUnit
        /// </summary>
        [DataMember(Name="tokenUnit", EmitDefaultValue=false)]
        public string TokenUnit { get; set; }

        /// <summary>
        /// Gets or Sets DecimalPlaces
        /// </summary>
        [DataMember(Name="decimalPlaces", EmitDefaultValue=false)]
        public int DecimalPlaces { get; set; }

        /// <summary>
        /// Gets or Sets Functions
        /// </summary>
        [DataMember(Name="functions", EmitDefaultValue=false)]
        public List<TierFunctionDTO> Functions { get; set; }

        /// <summary>
        /// Gets or Sets TokenName
        /// </summary>
        [DataMember(Name="tokenName", EmitDefaultValue=false)]
        public string TokenName { get; set; }

        /// <summary>
        /// Gets or Sets SmartContractAddress
        /// </summary>
        [DataMember(Name="smartContractAddress", EmitDefaultValue=false)]
        public string SmartContractAddress { get; set; }

        /// <summary>
        /// Gets or Sets Location
        /// </summary>
        [DataMember(Name="location", EmitDefaultValue=false)]
        public LocationDTO Location { get; set; }

        /// <summary>
        /// Gets or Sets _Version
        /// </summary>
        [DataMember(Name="version", EmitDefaultValue=false)]
        public string _Version { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url", EmitDefaultValue=false)]
        public string Url { get; set; }

        /// <summary>
        /// Gets or Sets AuditDate
        /// </summary>
        [DataMember(Name="auditDate", EmitDefaultValue=false)]
        [JsonConverter(typeof(OpenAPIDateConverter))]
        public DateTime AuditDate { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Erc20DTO {\n");
            sb.Append("  IsQrc20: ").Append(IsQrc20).Append("\n");
            sb.Append("  TokenUnit: ").Append(TokenUnit).Append("\n");
            sb.Append("  DecimalPlaces: ").Append(DecimalPlaces).Append("\n");
            sb.Append("  Functions: ").Append(Functions).Append("\n");
            sb.Append("  TokenName: ").Append(TokenName).Append("\n");
            sb.Append("  SmartContractAddress: ").Append(SmartContractAddress).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  _Version: ").Append(_Version).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  AuditDate: ").Append(AuditDate).Append("\n");
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
            return this.Equals(input as Erc20DTO);
        }

        /// <summary>
        /// Returns true if Erc20DTO instances are equal
        /// </summary>
        /// <param name="input">Instance of Erc20DTO to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Erc20DTO input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.IsQrc20 == input.IsQrc20 ||
                    (this.IsQrc20 != null &&
                    this.IsQrc20.Equals(input.IsQrc20))
                ) && 
                (
                    this.TokenUnit == input.TokenUnit ||
                    (this.TokenUnit != null &&
                    this.TokenUnit.Equals(input.TokenUnit))
                ) && 
                (
                    this.DecimalPlaces == input.DecimalPlaces ||
                    (this.DecimalPlaces != null &&
                    this.DecimalPlaces.Equals(input.DecimalPlaces))
                ) && 
                (
                    this.Functions == input.Functions ||
                    this.Functions != null &&
                    input.Functions != null &&
                    this.Functions.SequenceEqual(input.Functions)
                ) && 
                (
                    this.TokenName == input.TokenName ||
                    (this.TokenName != null &&
                    this.TokenName.Equals(input.TokenName))
                ) && 
                (
                    this.SmartContractAddress == input.SmartContractAddress ||
                    (this.SmartContractAddress != null &&
                    this.SmartContractAddress.Equals(input.SmartContractAddress))
                ) && 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this._Version == input._Version ||
                    (this._Version != null &&
                    this._Version.Equals(input._Version))
                ) && 
                (
                    this.Url == input.Url ||
                    (this.Url != null &&
                    this.Url.Equals(input.Url))
                ) && 
                (
                    this.AuditDate == input.AuditDate ||
                    (this.AuditDate != null &&
                    this.AuditDate.Equals(input.AuditDate))
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
                if (this.IsQrc20 != null)
                    hashCode = hashCode * 59 + this.IsQrc20.GetHashCode();
                if (this.TokenUnit != null)
                    hashCode = hashCode * 59 + this.TokenUnit.GetHashCode();
                if (this.DecimalPlaces != null)
                    hashCode = hashCode * 59 + this.DecimalPlaces.GetHashCode();
                if (this.Functions != null)
                    hashCode = hashCode * 59 + this.Functions.GetHashCode();
                if (this.TokenName != null)
                    hashCode = hashCode * 59 + this.TokenName.GetHashCode();
                if (this.SmartContractAddress != null)
                    hashCode = hashCode * 59 + this.SmartContractAddress.GetHashCode();
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this._Version != null)
                    hashCode = hashCode * 59 + this._Version.GetHashCode();
                if (this.Url != null)
                    hashCode = hashCode * 59 + this.Url.GetHashCode();
                if (this.AuditDate != null)
                    hashCode = hashCode * 59 + this.AuditDate.GetHashCode();
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
