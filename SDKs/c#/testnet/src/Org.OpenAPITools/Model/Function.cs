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
    /// Function
    /// </summary>
    [DataContract]
    public partial class Function :  IEquatable<Function>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Function" /> class.
        /// </summary>
        /// <param name="functionId">functionId.</param>
        /// <param name="code">code.</param>
        /// <param name="name">name.</param>
        /// <param name="inputParameters">inputParameters.</param>
        /// <param name="outputParameters">outputParameters.</param>
        public Function(string functionId = default(string), string code = default(string), string name = default(string), List<Parameter> inputParameters = default(List<Parameter>), List<Parameter> outputParameters = default(List<Parameter>))
        {
            this.FunctionId = functionId;
            this.Code = code;
            this.Name = name;
            this.InputParameters = inputParameters;
            this.OutputParameters = outputParameters;
        }

        /// <summary>
        /// Gets or Sets FunctionId
        /// </summary>
        [DataMember(Name="functionId", EmitDefaultValue=false)]
        public string FunctionId { get; set; }

        /// <summary>
        /// Gets or Sets Code
        /// </summary>
        [DataMember(Name="code", EmitDefaultValue=false)]
        public string Code { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets InputParameters
        /// </summary>
        [DataMember(Name="inputParameters", EmitDefaultValue=false)]
        public List<Parameter> InputParameters { get; set; }

        /// <summary>
        /// Gets or Sets OutputParameters
        /// </summary>
        [DataMember(Name="outputParameters", EmitDefaultValue=false)]
        public List<Parameter> OutputParameters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Function {\n");
            sb.Append("  FunctionId: ").Append(FunctionId).Append("\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  InputParameters: ").Append(InputParameters).Append("\n");
            sb.Append("  OutputParameters: ").Append(OutputParameters).Append("\n");
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
            return this.Equals(input as Function);
        }

        /// <summary>
        /// Returns true if Function instances are equal
        /// </summary>
        /// <param name="input">Instance of Function to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Function input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.FunctionId == input.FunctionId ||
                    (this.FunctionId != null &&
                    this.FunctionId.Equals(input.FunctionId))
                ) && 
                (
                    this.Code == input.Code ||
                    (this.Code != null &&
                    this.Code.Equals(input.Code))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.InputParameters == input.InputParameters ||
                    this.InputParameters != null &&
                    input.InputParameters != null &&
                    this.InputParameters.SequenceEqual(input.InputParameters)
                ) && 
                (
                    this.OutputParameters == input.OutputParameters ||
                    this.OutputParameters != null &&
                    input.OutputParameters != null &&
                    this.OutputParameters.SequenceEqual(input.OutputParameters)
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
                if (this.FunctionId != null)
                    hashCode = hashCode * 59 + this.FunctionId.GetHashCode();
                if (this.Code != null)
                    hashCode = hashCode * 59 + this.Code.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.InputParameters != null)
                    hashCode = hashCode * 59 + this.InputParameters.GetHashCode();
                if (this.OutputParameters != null)
                    hashCode = hashCode * 59 + this.OutputParameters.GetHashCode();
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
            // FunctionId (string) maxLength
            if(this.FunctionId != null && this.FunctionId.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for FunctionId, length must be less than 30.", new [] { "FunctionId" });
            }

            // FunctionId (string) minLength
            if(this.FunctionId != null && this.FunctionId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for FunctionId, length must be greater than 0.", new [] { "FunctionId" });
            }

            // FunctionId (string) pattern
            Regex regexFunctionId = new Regex(@"^[\\S\\s]{1,30}$", RegexOptions.CultureInvariant);
            if (false == regexFunctionId.Match(this.FunctionId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for FunctionId, must match a pattern of " + regexFunctionId, new [] { "FunctionId" });
            }

            // Code (string) maxLength
            if(this.Code != null && this.Code.Length > 30)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Code, length must be less than 30.", new [] { "Code" });
            }

            // Code (string) minLength
            if(this.Code != null && this.Code.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Code, length must be greater than 0.", new [] { "Code" });
            }

            // Code (string) pattern
            Regex regexCode = new Regex(@"^[\\S\\s]{1,30}$", RegexOptions.CultureInvariant);
            if (false == regexCode.Match(this.Code).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Code, must match a pattern of " + regexCode, new [] { "Code" });
            }

            // Name (string) maxLength
            if(this.Name != null && this.Name.Length > 50)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Name, length must be less than 50.", new [] { "Name" });
            }

            // Name (string) minLength
            if(this.Name != null && this.Name.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Name, length must be greater than 0.", new [] { "Name" });
            }

            // Name (string) pattern
            Regex regexName = new Regex(@"^[a-zA-Z0-9,_ ]{1,50}$", RegexOptions.CultureInvariant);
            if (false == regexName.Match(this.Name).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Name, must match a pattern of " + regexName, new [] { "Name" });
            }





            yield break;
        }
    }

}
