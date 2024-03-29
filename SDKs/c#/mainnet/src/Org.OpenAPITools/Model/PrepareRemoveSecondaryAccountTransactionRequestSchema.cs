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
    /// PrepareRemoveSecondaryAccountTransactionRequestSchema
    /// </summary>
    [DataContract]
    public partial class PrepareRemoveSecondaryAccountTransactionRequestSchema :  IEquatable<PrepareRemoveSecondaryAccountTransactionRequestSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PrepareRemoveSecondaryAccountTransactionRequestSchema" /> class.
        /// </summary>
        /// <param name="removeSecondaryAccountDetailsSchema">removeSecondaryAccountDetailsSchema.</param>
        public PrepareRemoveSecondaryAccountTransactionRequestSchema(RemoveSecondaryAccountDetailsSchema removeSecondaryAccountDetailsSchema = default(RemoveSecondaryAccountDetailsSchema))
        {
            this.RemoveSecondaryAccountDetailsSchema = removeSecondaryAccountDetailsSchema;
        }

        /// <summary>
        /// Gets or Sets RemoveSecondaryAccountDetailsSchema
        /// </summary>
        [DataMember(Name="removeSecondaryAccountDetailsSchema", EmitDefaultValue=false)]
        public RemoveSecondaryAccountDetailsSchema RemoveSecondaryAccountDetailsSchema { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PrepareRemoveSecondaryAccountTransactionRequestSchema {\n");
            sb.Append("  RemoveSecondaryAccountDetailsSchema: ").Append(RemoveSecondaryAccountDetailsSchema).Append("\n");
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
            return this.Equals(input as PrepareRemoveSecondaryAccountTransactionRequestSchema);
        }

        /// <summary>
        /// Returns true if PrepareRemoveSecondaryAccountTransactionRequestSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of PrepareRemoveSecondaryAccountTransactionRequestSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PrepareRemoveSecondaryAccountTransactionRequestSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.RemoveSecondaryAccountDetailsSchema == input.RemoveSecondaryAccountDetailsSchema ||
                    (this.RemoveSecondaryAccountDetailsSchema != null &&
                    this.RemoveSecondaryAccountDetailsSchema.Equals(input.RemoveSecondaryAccountDetailsSchema))
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
                if (this.RemoveSecondaryAccountDetailsSchema != null)
                    hashCode = hashCode * 59 + this.RemoveSecondaryAccountDetailsSchema.GetHashCode();
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
