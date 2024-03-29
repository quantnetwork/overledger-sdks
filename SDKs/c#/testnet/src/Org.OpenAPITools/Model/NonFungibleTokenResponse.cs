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
    /// NonFungibleTokenResponse
    /// </summary>
    [DataContract]
    public partial class NonFungibleTokenResponse :  IEquatable<NonFungibleTokenResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="NonFungibleTokenResponse" /> class.
        /// </summary>
        /// <param name="tokenName">tokenName.</param>
        /// <param name="documentationUrl">documentationUrl.</param>
        /// <param name="location">location.</param>
        /// <param name="functions">functions.</param>
        /// <param name="contractType">contractType.</param>
        /// <param name="smartContractId">smartContractId.</param>
        public NonFungibleTokenResponse(string tokenName = default(string), string documentationUrl = default(string), Location location = default(Location), List<Function> functions = default(List<Function>), string contractType = default(string), string smartContractId = default(string))
        {
            this.TokenName = tokenName;
            this.DocumentationUrl = documentationUrl;
            this.Location = location;
            this.Functions = functions;
            this.ContractType = contractType;
            this.SmartContractId = smartContractId;
        }

        /// <summary>
        /// Gets or Sets TokenName
        /// </summary>
        [DataMember(Name="tokenName", EmitDefaultValue=false)]
        public string TokenName { get; set; }

        /// <summary>
        /// Gets or Sets DocumentationUrl
        /// </summary>
        [DataMember(Name="documentationUrl", EmitDefaultValue=false)]
        public string DocumentationUrl { get; set; }

        /// <summary>
        /// Gets or Sets Location
        /// </summary>
        [DataMember(Name="location", EmitDefaultValue=false)]
        public Location Location { get; set; }

        /// <summary>
        /// Gets or Sets Functions
        /// </summary>
        [DataMember(Name="functions", EmitDefaultValue=false)]
        public List<Function> Functions { get; set; }

        /// <summary>
        /// Gets or Sets ContractType
        /// </summary>
        [DataMember(Name="contractType", EmitDefaultValue=false)]
        public string ContractType { get; set; }

        /// <summary>
        /// Gets or Sets SmartContractId
        /// </summary>
        [DataMember(Name="smartContractId", EmitDefaultValue=false)]
        public string SmartContractId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class NonFungibleTokenResponse {\n");
            sb.Append("  TokenName: ").Append(TokenName).Append("\n");
            sb.Append("  DocumentationUrl: ").Append(DocumentationUrl).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  Functions: ").Append(Functions).Append("\n");
            sb.Append("  ContractType: ").Append(ContractType).Append("\n");
            sb.Append("  SmartContractId: ").Append(SmartContractId).Append("\n");
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
            return this.Equals(input as NonFungibleTokenResponse);
        }

        /// <summary>
        /// Returns true if NonFungibleTokenResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of NonFungibleTokenResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(NonFungibleTokenResponse input)
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
                    this.DocumentationUrl == input.DocumentationUrl ||
                    (this.DocumentationUrl != null &&
                    this.DocumentationUrl.Equals(input.DocumentationUrl))
                ) && 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this.Functions == input.Functions ||
                    this.Functions != null &&
                    input.Functions != null &&
                    this.Functions.SequenceEqual(input.Functions)
                ) && 
                (
                    this.ContractType == input.ContractType ||
                    (this.ContractType != null &&
                    this.ContractType.Equals(input.ContractType))
                ) && 
                (
                    this.SmartContractId == input.SmartContractId ||
                    (this.SmartContractId != null &&
                    this.SmartContractId.Equals(input.SmartContractId))
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
                if (this.DocumentationUrl != null)
                    hashCode = hashCode * 59 + this.DocumentationUrl.GetHashCode();
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this.Functions != null)
                    hashCode = hashCode * 59 + this.Functions.GetHashCode();
                if (this.ContractType != null)
                    hashCode = hashCode * 59 + this.ContractType.GetHashCode();
                if (this.SmartContractId != null)
                    hashCode = hashCode * 59 + this.SmartContractId.GetHashCode();
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
