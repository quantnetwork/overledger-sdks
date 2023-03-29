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
    /// Block
    /// </summary>
    [DataContract]
    public partial class Block :  IEquatable<Block>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Block" /> class.
        /// </summary>
        /// <param name="blockId">blockId.</param>
        /// <param name="number">number.</param>
        /// <param name="transactionIds">transactionIds.</param>
        /// <param name="size">size.</param>
        /// <param name="hashes">hashes.</param>
        /// <param name="linkedBlocks">linkedBlocks.</param>
        /// <param name="numberOfTransactions">numberOfTransactions.</param>
        /// <param name="message">message.</param>
        /// <param name="timestamp">timestamp.</param>
        /// <param name="nativeData">nativeData.</param>
        public Block(string blockId = default(string), int number = default(int), List<string> transactionIds = default(List<string>), List<BlockSize> size = default(List<BlockSize>), List<BlockHash> hashes = default(List<BlockHash>), LinkedBlocks linkedBlocks = default(LinkedBlocks), int numberOfTransactions = default(int), string message = default(string), string timestamp = default(string), Object nativeData = default(Object))
        {
            this.BlockId = blockId;
            this.Number = number;
            this.TransactionIds = transactionIds;
            this.Size = size;
            this.Hashes = hashes;
            this.LinkedBlocks = linkedBlocks;
            this.NumberOfTransactions = numberOfTransactions;
            this.Message = message;
            this.Timestamp = timestamp;
            this.NativeData = nativeData;
        }

        /// <summary>
        /// Gets or Sets BlockId
        /// </summary>
        [DataMember(Name="blockId", EmitDefaultValue=false)]
        public string BlockId { get; set; }

        /// <summary>
        /// Gets or Sets Number
        /// </summary>
        [DataMember(Name="number", EmitDefaultValue=false)]
        public int Number { get; set; }

        /// <summary>
        /// Gets or Sets TransactionIds
        /// </summary>
        [DataMember(Name="transactionIds", EmitDefaultValue=false)]
        public List<string> TransactionIds { get; set; }

        /// <summary>
        /// Gets or Sets Size
        /// </summary>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public List<BlockSize> Size { get; set; }

        /// <summary>
        /// Gets or Sets Hashes
        /// </summary>
        [DataMember(Name="hashes", EmitDefaultValue=false)]
        public List<BlockHash> Hashes { get; set; }

        /// <summary>
        /// Gets or Sets LinkedBlocks
        /// </summary>
        [DataMember(Name="linkedBlocks", EmitDefaultValue=false)]
        public LinkedBlocks LinkedBlocks { get; set; }

        /// <summary>
        /// Gets or Sets NumberOfTransactions
        /// </summary>
        [DataMember(Name="numberOfTransactions", EmitDefaultValue=false)]
        public int NumberOfTransactions { get; set; }

        /// <summary>
        /// Gets or Sets Message
        /// </summary>
        [DataMember(Name="message", EmitDefaultValue=false)]
        public string Message { get; set; }

        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public string Timestamp { get; set; }

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
            sb.Append("class Block {\n");
            sb.Append("  BlockId: ").Append(BlockId).Append("\n");
            sb.Append("  Number: ").Append(Number).Append("\n");
            sb.Append("  TransactionIds: ").Append(TransactionIds).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  Hashes: ").Append(Hashes).Append("\n");
            sb.Append("  LinkedBlocks: ").Append(LinkedBlocks).Append("\n");
            sb.Append("  NumberOfTransactions: ").Append(NumberOfTransactions).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
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
            return this.Equals(input as Block);
        }

        /// <summary>
        /// Returns true if Block instances are equal
        /// </summary>
        /// <param name="input">Instance of Block to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Block input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.BlockId == input.BlockId ||
                    (this.BlockId != null &&
                    this.BlockId.Equals(input.BlockId))
                ) && 
                (
                    this.Number == input.Number ||
                    (this.Number != null &&
                    this.Number.Equals(input.Number))
                ) && 
                (
                    this.TransactionIds == input.TransactionIds ||
                    this.TransactionIds != null &&
                    input.TransactionIds != null &&
                    this.TransactionIds.SequenceEqual(input.TransactionIds)
                ) && 
                (
                    this.Size == input.Size ||
                    this.Size != null &&
                    input.Size != null &&
                    this.Size.SequenceEqual(input.Size)
                ) && 
                (
                    this.Hashes == input.Hashes ||
                    this.Hashes != null &&
                    input.Hashes != null &&
                    this.Hashes.SequenceEqual(input.Hashes)
                ) && 
                (
                    this.LinkedBlocks == input.LinkedBlocks ||
                    (this.LinkedBlocks != null &&
                    this.LinkedBlocks.Equals(input.LinkedBlocks))
                ) && 
                (
                    this.NumberOfTransactions == input.NumberOfTransactions ||
                    (this.NumberOfTransactions != null &&
                    this.NumberOfTransactions.Equals(input.NumberOfTransactions))
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
                if (this.BlockId != null)
                    hashCode = hashCode * 59 + this.BlockId.GetHashCode();
                if (this.Number != null)
                    hashCode = hashCode * 59 + this.Number.GetHashCode();
                if (this.TransactionIds != null)
                    hashCode = hashCode * 59 + this.TransactionIds.GetHashCode();
                if (this.Size != null)
                    hashCode = hashCode * 59 + this.Size.GetHashCode();
                if (this.Hashes != null)
                    hashCode = hashCode * 59 + this.Hashes.GetHashCode();
                if (this.LinkedBlocks != null)
                    hashCode = hashCode * 59 + this.LinkedBlocks.GetHashCode();
                if (this.NumberOfTransactions != null)
                    hashCode = hashCode * 59 + this.NumberOfTransactions.GetHashCode();
                if (this.Message != null)
                    hashCode = hashCode * 59 + this.Message.GetHashCode();
                if (this.Timestamp != null)
                    hashCode = hashCode * 59 + this.Timestamp.GetHashCode();
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
            // BlockId (string) maxLength
            if(this.BlockId != null && this.BlockId.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for BlockId, length must be less than 150.", new [] { "BlockId" });
            }

            // BlockId (string) minLength
            if(this.BlockId != null && this.BlockId.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for BlockId, length must be greater than 0.", new [] { "BlockId" });
            }

            // BlockId (string) pattern
            Regex regexBlockId = new Regex(@"^[a-zA-Z0-9]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexBlockId.Match(this.BlockId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for BlockId, must match a pattern of " + regexBlockId, new [] { "BlockId" });
            }







            // Message (string) maxLength
            if(this.Message != null && this.Message.Length > 150)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be less than 150.", new [] { "Message" });
            }

            // Message (string) minLength
            if(this.Message != null && this.Message.Length < 0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, length must be greater than 0.", new [] { "Message" });
            }

            // Message (string) pattern
            Regex regexMessage = new Regex(@"^[\\S\\s]{1,150}$", RegexOptions.CultureInvariant);
            if (false == regexMessage.Match(this.Message).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Message, must match a pattern of " + regexMessage, new [] { "Message" });
            }

            yield break;
        }
    }

}
