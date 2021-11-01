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
    /// LinkedBlocks
    /// </summary>
    [DataContract]
    public partial class LinkedBlocks :  IEquatable<LinkedBlocks>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="LinkedBlocks" /> class.
        /// </summary>
        /// <param name="parent">parent.</param>
        /// <param name="child">child.</param>
        public LinkedBlocks(string parent = default(string), string child = default(string))
        {
            this.Parent = parent;
            this.Child = child;
        }

        /// <summary>
        /// Gets or Sets Parent
        /// </summary>
        [DataMember(Name="parent", EmitDefaultValue=false)]
        public string Parent { get; set; }

        /// <summary>
        /// Gets or Sets Child
        /// </summary>
        [DataMember(Name="child", EmitDefaultValue=false)]
        public string Child { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LinkedBlocks {\n");
            sb.Append("  Parent: ").Append(Parent).Append("\n");
            sb.Append("  Child: ").Append(Child).Append("\n");
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
            return this.Equals(input as LinkedBlocks);
        }

        /// <summary>
        /// Returns true if LinkedBlocks instances are equal
        /// </summary>
        /// <param name="input">Instance of LinkedBlocks to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(LinkedBlocks input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Parent == input.Parent ||
                    (this.Parent != null &&
                    this.Parent.Equals(input.Parent))
                ) && 
                (
                    this.Child == input.Child ||
                    (this.Child != null &&
                    this.Child.Equals(input.Child))
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
                if (this.Parent != null)
                    hashCode = hashCode * 59 + this.Parent.GetHashCode();
                if (this.Child != null)
                    hashCode = hashCode * 59 + this.Child.GetHashCode();
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
            // Parent (string) maxLength
            if(this.Parent != null && this.Parent.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Parent, length must be less than 150.", new [] { "Parent" });
            }

            // Parent (string) minLength
            if(this.Parent != null && this.Parent.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Parent, length must be greater than 0.", new [] { "Parent" });
            }

            // Parent (string) pattern
            Regex regexParent = new Regex(@"^[a-zA-Z0-9]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexParent.Match(this.Parent).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Parent, must match a pattern of " + regexParent, new [] { "Parent" });
            }

            // Child (string) maxLength
            if(this.Child != null && this.Child.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Child, length must be less than 150.", new [] { "Child" });
            }

            // Child (string) minLength
            if(this.Child != null && this.Child.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Child, length must be greater than 0.", new [] { "Child" });
            }

            // Child (string) pattern
            Regex regexChild = new Regex(@"^[a-zA-Z0-9]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexChild.Match(this.Child).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Child, must match a pattern of " + regexChild, new [] { "Child" });
            }

            yield break;
        }
    }

}