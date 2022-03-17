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
    /// AutoExecuteSearchAddressBalanceResponseSchema
    /// </summary>
    [DataContract]
    public partial class AutoExecuteSearchAddressBalanceResponseSchema :  IEquatable<AutoExecuteSearchAddressBalanceResponseSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AutoExecuteSearchAddressBalanceResponseSchema" /> class.
        /// </summary>
        /// <param name="executionAddressBalanceSearchResponse">executionAddressBalanceSearchResponse.</param>
        /// <param name="prepareAndExecuteOverledgerErrorResponse">prepareAndExecuteOverledgerErrorResponse.</param>
        /// <param name="preparationAddressBalanceSearchResponse">preparationAddressBalanceSearchResponse.</param>
        public AutoExecuteSearchAddressBalanceResponseSchema(PrepareAndExecuteSearchAddressBalanceResponse executionAddressBalanceSearchResponse = default(PrepareAndExecuteSearchAddressBalanceResponse), PrepareAndExecuteOverledgerErrorResponse prepareAndExecuteOverledgerErrorResponse = default(PrepareAndExecuteOverledgerErrorResponse), PrepareSearchResponseSchema preparationAddressBalanceSearchResponse = default(PrepareSearchResponseSchema))
        {
            this.ExecutionAddressBalanceSearchResponse = executionAddressBalanceSearchResponse;
            this.PrepareAndExecuteOverledgerErrorResponse = prepareAndExecuteOverledgerErrorResponse;
            this.PreparationAddressBalanceSearchResponse = preparationAddressBalanceSearchResponse;
        }

        /// <summary>
        /// Gets or Sets ExecutionAddressBalanceSearchResponse
        /// </summary>
        [DataMember(Name="executionAddressBalanceSearchResponse", EmitDefaultValue=false)]
        public PrepareAndExecuteSearchAddressBalanceResponse ExecutionAddressBalanceSearchResponse { get; set; }

        /// <summary>
        /// Gets or Sets PrepareAndExecuteOverledgerErrorResponse
        /// </summary>
        [DataMember(Name="prepareAndExecuteOverledgerErrorResponse", EmitDefaultValue=false)]
        public PrepareAndExecuteOverledgerErrorResponse PrepareAndExecuteOverledgerErrorResponse { get; set; }

        /// <summary>
        /// Gets or Sets PreparationAddressBalanceSearchResponse
        /// </summary>
        [DataMember(Name="preparationAddressBalanceSearchResponse", EmitDefaultValue=false)]
        public PrepareSearchResponseSchema PreparationAddressBalanceSearchResponse { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AutoExecuteSearchAddressBalanceResponseSchema {\n");
            sb.Append("  ExecutionAddressBalanceSearchResponse: ").Append(ExecutionAddressBalanceSearchResponse).Append("\n");
            sb.Append("  PrepareAndExecuteOverledgerErrorResponse: ").Append(PrepareAndExecuteOverledgerErrorResponse).Append("\n");
            sb.Append("  PreparationAddressBalanceSearchResponse: ").Append(PreparationAddressBalanceSearchResponse).Append("\n");
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
            return this.Equals(input as AutoExecuteSearchAddressBalanceResponseSchema);
        }

        /// <summary>
        /// Returns true if AutoExecuteSearchAddressBalanceResponseSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of AutoExecuteSearchAddressBalanceResponseSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AutoExecuteSearchAddressBalanceResponseSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ExecutionAddressBalanceSearchResponse == input.ExecutionAddressBalanceSearchResponse ||
                    (this.ExecutionAddressBalanceSearchResponse != null &&
                    this.ExecutionAddressBalanceSearchResponse.Equals(input.ExecutionAddressBalanceSearchResponse))
                ) && 
                (
                    this.PrepareAndExecuteOverledgerErrorResponse == input.PrepareAndExecuteOverledgerErrorResponse ||
                    (this.PrepareAndExecuteOverledgerErrorResponse != null &&
                    this.PrepareAndExecuteOverledgerErrorResponse.Equals(input.PrepareAndExecuteOverledgerErrorResponse))
                ) && 
                (
                    this.PreparationAddressBalanceSearchResponse == input.PreparationAddressBalanceSearchResponse ||
                    (this.PreparationAddressBalanceSearchResponse != null &&
                    this.PreparationAddressBalanceSearchResponse.Equals(input.PreparationAddressBalanceSearchResponse))
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
                if (this.ExecutionAddressBalanceSearchResponse != null)
                    hashCode = hashCode * 59 + this.ExecutionAddressBalanceSearchResponse.GetHashCode();
                if (this.PrepareAndExecuteOverledgerErrorResponse != null)
                    hashCode = hashCode * 59 + this.PrepareAndExecuteOverledgerErrorResponse.GetHashCode();
                if (this.PreparationAddressBalanceSearchResponse != null)
                    hashCode = hashCode * 59 + this.PreparationAddressBalanceSearchResponse.GetHashCode();
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
