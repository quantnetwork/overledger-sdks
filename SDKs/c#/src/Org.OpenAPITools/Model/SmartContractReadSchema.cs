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
    /// Computer program storage in a DLT system where the outcome is recorded on the distributed ledger
    /// </summary>
    [DataContract]
    public partial class SmartContractReadSchema :  IEquatable<SmartContractReadSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SmartContractReadSchema" /> class.
        /// </summary>
        /// <param name="function">function.</param>
        /// <param name="smartContractId">smartContractId.</param>
        public SmartContractReadSchema(SmartContractReadFunctionSchema function = default(SmartContractReadFunctionSchema), string smartContractId = default(string))
        {
            this.Function = function;
            this.SmartContractId = smartContractId;
        }

        /// <summary>
        /// Gets or Sets Function
        /// </summary>
        [DataMember(Name="function", EmitDefaultValue=false)]
        public SmartContractReadFunctionSchema Function { get; set; }

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
            sb.Append("class SmartContractReadSchema {\n");
            sb.Append("  Function: ").Append(Function).Append("\n");
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
            return this.Equals(input as SmartContractReadSchema);
        }

        /// <summary>
        /// Returns true if SmartContractReadSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of SmartContractReadSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SmartContractReadSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Function == input.Function ||
                    (this.Function != null &&
                    this.Function.Equals(input.Function))
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
                if (this.Function != null)
                    hashCode = hashCode * 59 + this.Function.GetHashCode();
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
