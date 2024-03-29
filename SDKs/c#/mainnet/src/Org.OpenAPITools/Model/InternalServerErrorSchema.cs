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
    /// InternalServerErrorSchema
    /// </summary>
    [DataContract]
    public partial class InternalServerErrorSchema :  IEquatable<InternalServerErrorSchema>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InternalServerErrorSchema" /> class.
        /// </summary>
        /// <param name="path">path.</param>
        /// <param name="error">error.</param>
        /// <param name="message">message.</param>
        /// <param name="timestamp">timestamp.</param>
        /// <param name="status">status.</param>
        public InternalServerErrorSchema(string path = default(string), string error = default(string), string message = default(string), DateTime timestamp = default(DateTime), int status = default(int))
        {
            this.Path = path;
            this.Error = error;
            this.Message = message;
            this.Timestamp = timestamp;
            this.Status = status;
        }

        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path", EmitDefaultValue=false)]
        public string Path { get; set; }

        /// <summary>
        /// Gets or Sets Error
        /// </summary>
        [DataMember(Name="error", EmitDefaultValue=false)]
        public string Error { get; set; }

        /// <summary>
        /// Gets or Sets Message
        /// </summary>
        [DataMember(Name="message", EmitDefaultValue=false)]
        public string Message { get; set; }

        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public DateTime Timestamp { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public int Status { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InternalServerErrorSchema {\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
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
            return this.Equals(input as InternalServerErrorSchema);
        }

        /// <summary>
        /// Returns true if InternalServerErrorSchema instances are equal
        /// </summary>
        /// <param name="input">Instance of InternalServerErrorSchema to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InternalServerErrorSchema input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Path == input.Path ||
                    (this.Path != null &&
                    this.Path.Equals(input.Path))
                ) && 
                (
                    this.Error == input.Error ||
                    (this.Error != null &&
                    this.Error.Equals(input.Error))
                ) && 
                (
                    this.Message == input.Message ||
                    (this.Message != null &&
                    this.Message.Equals(input.Message))
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
                if (this.Path != null)
                    hashCode = hashCode * 59 + this.Path.GetHashCode();
                if (this.Error != null)
                    hashCode = hashCode * 59 + this.Error.GetHashCode();
                if (this.Message != null)
                    hashCode = hashCode * 59 + this.Message.GetHashCode();
                if (this.Timestamp != null)
                    hashCode = hashCode * 59 + this.Timestamp.GetHashCode();
                if (this.Status != null)
                    hashCode = hashCode * 59 + this.Status.GetHashCode();
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
            // Path (string) maxLength
            if(this.Path != null && this.Path.Length > 300)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Path, length must be less than 300.", new [] { "Path" });
            }

            // Path (string) minLength
            if(this.Path != null && this.Path.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Path, length must be greater than 0.", new [] { "Path" });
            }

            // Path (string) pattern
            Regex regexPath = new Regex(@"^[\\S\\s]{1,300}$", RegexOptions.CultureInvariant);
            if (false == regexPath.Match(this.Path).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Path, must match a pattern of " + regexPath, new [] { "Path" });
            }

            // Error (string) maxLength
            if(this.Error != null && this.Error.Length > 300)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Error, length must be less than 300.", new [] { "Error" });
            }

            // Error (string) minLength
            if(this.Error != null && this.Error.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Error, length must be greater than 0.", new [] { "Error" });
            }

            // Error (string) pattern
            Regex regexError = new Regex(@"^[\\S\\s]{1,300}$", RegexOptions.CultureInvariant);
            if (false == regexError.Match(this.Error).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Error, must match a pattern of " + regexError, new [] { "Error" });
            }

            // Message (string) maxLength
            if(this.Message != null && this.Message.Length > 300)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be less than 300.", new [] { "Message" });
            }

            // Message (string) minLength
            if(this.Message != null && this.Message.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be greater than 0.", new [] { "Message" });
            }

            // Message (string) pattern
            Regex regexMessage = new Regex(@"^[\\S\\s]{1,300}$", RegexOptions.CultureInvariant);
            if (false == regexMessage.Match(this.Message).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, must match a pattern of " + regexMessage, new [] { "Message" });
            }

            yield break;
        }
    }

}
