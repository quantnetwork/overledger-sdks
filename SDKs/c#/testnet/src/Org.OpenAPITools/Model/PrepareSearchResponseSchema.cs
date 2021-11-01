/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
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
    /// PrepareSearchResponseSchema
    /// </summary>
    [DataContract]
    public partial class PrepareSearchResponseSchema :  IEquatable<PrepareSearchResponseSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PrepareSearchResponseSchema" /> class.
        /// </summary>
        /// <param name="gatewayFee">gatewayFee.</param>
        /// <param name="requestId">The ID assigned to a preparation request in Overledger.</param>
        public PrepareSearchResponseSchema(Fee gatewayFee = default(Fee), string requestId = default(string))
        {
            this.GatewayFee = gatewayFee;
            this.RequestId = requestId;
        }

        /// <summary>
        /// Gets or Sets GatewayFee
        /// </summary>
        [DataMember(Name="gatewayFee", EmitDefaultValue=false)]
        public Fee GatewayFee { get; set; }

        /// <summary>
        /// The ID assigned to a preparation request in Overledger
        /// </summary>
        /// <value>The ID assigned to a preparation request in Overledger</value>
        [DataMember(Name="requestId", EmitDefaultValue=false)]
        public string RequestId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PrepareSearchResponseSchema {\n");
            sb.Append("  GatewayFee: ").Append(GatewayFee).Append("\n");
            sb.Append("  RequestId: ").Append(RequestId).Append("\n");
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
            return this.Equals(input as PrepareSearchResponseSchema);
        }

        /// <summary>
        /// Returns true if PrepareSearchResponseSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PrepareSearchResponseSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PrepareSearchResponseSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.GatewayFee == input.GatewayFee ||
                    (this.GatewayFee != null &&
                    this.GatewayFee.Equals(input.GatewayFee))
                ) && 
                (
                    this.RequestId == input.RequestId ||
                    (this.RequestId != null &&
                    this.RequestId.Equals(input.RequestId))
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
                if (this.GatewayFee != null)
                    hashCode = hashCode * 59 + this.GatewayFee.GetHashCode();
                if (this.RequestId != null)
                    hashCode = hashCode * 59 + this.RequestId.GetHashCode();
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