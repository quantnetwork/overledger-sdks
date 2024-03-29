<?php
/**
 * Block
 *
 * PHP version 7.3
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.3.0
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * Block Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class Block implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'Block';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'block_id' => 'string',
        'number' => 'int',
        'transaction_ids' => 'string[]',
        'size' => '\OpenAPI\Client\Model\BlockSize[]',
        'hashes' => '\OpenAPI\Client\Model\BlockHash[]',
        'linked_blocks' => '\OpenAPI\Client\Model\LinkedBlocks',
        'number_of_transactions' => 'int',
        'message' => 'string',
        'timestamp' => 'string',
        'native_data' => 'object'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'block_id' => null,
        'number' => null,
        'transaction_ids' => null,
        'size' => null,
        'hashes' => null,
        'linked_blocks' => null,
        'number_of_transactions' => 'int32',
        'message' => null,
        'timestamp' => null,
        'native_data' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'block_id' => 'blockId',
        'number' => 'number',
        'transaction_ids' => 'transactionIds',
        'size' => 'size',
        'hashes' => 'hashes',
        'linked_blocks' => 'linkedBlocks',
        'number_of_transactions' => 'numberOfTransactions',
        'message' => 'message',
        'timestamp' => 'timestamp',
        'native_data' => 'nativeData'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'block_id' => 'setBlockId',
        'number' => 'setNumber',
        'transaction_ids' => 'setTransactionIds',
        'size' => 'setSize',
        'hashes' => 'setHashes',
        'linked_blocks' => 'setLinkedBlocks',
        'number_of_transactions' => 'setNumberOfTransactions',
        'message' => 'setMessage',
        'timestamp' => 'setTimestamp',
        'native_data' => 'setNativeData'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'block_id' => 'getBlockId',
        'number' => 'getNumber',
        'transaction_ids' => 'getTransactionIds',
        'size' => 'getSize',
        'hashes' => 'getHashes',
        'linked_blocks' => 'getLinkedBlocks',
        'number_of_transactions' => 'getNumberOfTransactions',
        'message' => 'getMessage',
        'timestamp' => 'getTimestamp',
        'native_data' => 'getNativeData'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }


    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['block_id'] = $data['block_id'] ?? null;
        $this->container['number'] = $data['number'] ?? null;
        $this->container['transaction_ids'] = $data['transaction_ids'] ?? null;
        $this->container['size'] = $data['size'] ?? null;
        $this->container['hashes'] = $data['hashes'] ?? null;
        $this->container['linked_blocks'] = $data['linked_blocks'] ?? null;
        $this->container['number_of_transactions'] = $data['number_of_transactions'] ?? null;
        $this->container['message'] = $data['message'] ?? null;
        $this->container['timestamp'] = $data['timestamp'] ?? null;
        $this->container['native_data'] = $data['native_data'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['block_id']) && (mb_strlen($this->container['block_id']) > 150)) {
            $invalidProperties[] = "invalid value for 'block_id', the character length must be smaller than or equal to 150.";
        }

        if (!is_null($this->container['block_id']) && (mb_strlen($this->container['block_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'block_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['block_id']) && !preg_match("/^[a-zA-Z0-9]{1,150}$/", $this->container['block_id'])) {
            $invalidProperties[] = "invalid value for 'block_id', must be conform to the pattern /^[a-zA-Z0-9]{1,150}$/.";
        }

        if (!is_null($this->container['transaction_ids']) && (count($this->container['transaction_ids']) > 10000)) {
            $invalidProperties[] = "invalid value for 'transaction_ids', number of items must be less than or equal to 10000.";
        }

        if (!is_null($this->container['transaction_ids']) && (count($this->container['transaction_ids']) < 0)) {
            $invalidProperties[] = "invalid value for 'transaction_ids', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['size']) && (count($this->container['size']) > 10)) {
            $invalidProperties[] = "invalid value for 'size', number of items must be less than or equal to 10.";
        }

        if (!is_null($this->container['size']) && (count($this->container['size']) < 0)) {
            $invalidProperties[] = "invalid value for 'size', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['hashes']) && (count($this->container['hashes']) > 10)) {
            $invalidProperties[] = "invalid value for 'hashes', number of items must be less than or equal to 10.";
        }

        if (!is_null($this->container['hashes']) && (count($this->container['hashes']) < 0)) {
            $invalidProperties[] = "invalid value for 'hashes', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['message']) && (mb_strlen($this->container['message']) > 150)) {
            $invalidProperties[] = "invalid value for 'message', the character length must be smaller than or equal to 150.";
        }

        if (!is_null($this->container['message']) && (mb_strlen($this->container['message']) < 0)) {
            $invalidProperties[] = "invalid value for 'message', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['message']) && !preg_match("/^[\\S\\s]{1,150}$/", $this->container['message'])) {
            $invalidProperties[] = "invalid value for 'message', must be conform to the pattern /^[\\S\\s]{1,150}$/.";
        }

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets block_id
     *
     * @return string|null
     */
    public function getBlockId()
    {
        return $this->container['block_id'];
    }

    /**
     * Sets block_id
     *
     * @param string|null $block_id block_id
     *
     * @return self
     */
    public function setBlockId($block_id)
    {
        if (!is_null($block_id) && (mb_strlen($block_id) > 150)) {
            throw new \InvalidArgumentException('invalid length for $block_id when calling Block., must be smaller than or equal to 150.');
        }
        if (!is_null($block_id) && (mb_strlen($block_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $block_id when calling Block., must be bigger than or equal to 0.');
        }
        if (!is_null($block_id) && (!preg_match("/^[a-zA-Z0-9]{1,150}$/", $block_id))) {
            throw new \InvalidArgumentException("invalid value for $block_id when calling Block., must conform to the pattern /^[a-zA-Z0-9]{1,150}$/.");
        }

        $this->container['block_id'] = $block_id;

        return $this;
    }

    /**
     * Gets number
     *
     * @return int|null
     */
    public function getNumber()
    {
        return $this->container['number'];
    }

    /**
     * Sets number
     *
     * @param int|null $number number
     *
     * @return self
     */
    public function setNumber($number)
    {
        $this->container['number'] = $number;

        return $this;
    }

    /**
     * Gets transaction_ids
     *
     * @return string[]|null
     */
    public function getTransactionIds()
    {
        return $this->container['transaction_ids'];
    }

    /**
     * Sets transaction_ids
     *
     * @param string[]|null $transaction_ids transaction_ids
     *
     * @return self
     */
    public function setTransactionIds($transaction_ids)
    {

        if (!is_null($transaction_ids) && (count($transaction_ids) > 10000)) {
            throw new \InvalidArgumentException('invalid value for $transaction_ids when calling Block., number of items must be less than or equal to 10000.');
        }
        if (!is_null($transaction_ids) && (count($transaction_ids) < 0)) {
            throw new \InvalidArgumentException('invalid length for $transaction_ids when calling Block., number of items must be greater than or equal to 0.');
        }
        $this->container['transaction_ids'] = $transaction_ids;

        return $this;
    }

    /**
     * Gets size
     *
     * @return \OpenAPI\Client\Model\BlockSize[]|null
     */
    public function getSize()
    {
        return $this->container['size'];
    }

    /**
     * Sets size
     *
     * @param \OpenAPI\Client\Model\BlockSize[]|null $size size
     *
     * @return self
     */
    public function setSize($size)
    {

        if (!is_null($size) && (count($size) > 10)) {
            throw new \InvalidArgumentException('invalid value for $size when calling Block., number of items must be less than or equal to 10.');
        }
        if (!is_null($size) && (count($size) < 0)) {
            throw new \InvalidArgumentException('invalid length for $size when calling Block., number of items must be greater than or equal to 0.');
        }
        $this->container['size'] = $size;

        return $this;
    }

    /**
     * Gets hashes
     *
     * @return \OpenAPI\Client\Model\BlockHash[]|null
     */
    public function getHashes()
    {
        return $this->container['hashes'];
    }

    /**
     * Sets hashes
     *
     * @param \OpenAPI\Client\Model\BlockHash[]|null $hashes hashes
     *
     * @return self
     */
    public function setHashes($hashes)
    {

        if (!is_null($hashes) && (count($hashes) > 10)) {
            throw new \InvalidArgumentException('invalid value for $hashes when calling Block., number of items must be less than or equal to 10.');
        }
        if (!is_null($hashes) && (count($hashes) < 0)) {
            throw new \InvalidArgumentException('invalid length for $hashes when calling Block., number of items must be greater than or equal to 0.');
        }
        $this->container['hashes'] = $hashes;

        return $this;
    }

    /**
     * Gets linked_blocks
     *
     * @return \OpenAPI\Client\Model\LinkedBlocks|null
     */
    public function getLinkedBlocks()
    {
        return $this->container['linked_blocks'];
    }

    /**
     * Sets linked_blocks
     *
     * @param \OpenAPI\Client\Model\LinkedBlocks|null $linked_blocks linked_blocks
     *
     * @return self
     */
    public function setLinkedBlocks($linked_blocks)
    {
        $this->container['linked_blocks'] = $linked_blocks;

        return $this;
    }

    /**
     * Gets number_of_transactions
     *
     * @return int|null
     */
    public function getNumberOfTransactions()
    {
        return $this->container['number_of_transactions'];
    }

    /**
     * Sets number_of_transactions
     *
     * @param int|null $number_of_transactions number_of_transactions
     *
     * @return self
     */
    public function setNumberOfTransactions($number_of_transactions)
    {
        $this->container['number_of_transactions'] = $number_of_transactions;

        return $this;
    }

    /**
     * Gets message
     *
     * @return string|null
     */
    public function getMessage()
    {
        return $this->container['message'];
    }

    /**
     * Sets message
     *
     * @param string|null $message message
     *
     * @return self
     */
    public function setMessage($message)
    {
        if (!is_null($message) && (mb_strlen($message) > 150)) {
            throw new \InvalidArgumentException('invalid length for $message when calling Block., must be smaller than or equal to 150.');
        }
        if (!is_null($message) && (mb_strlen($message) < 0)) {
            throw new \InvalidArgumentException('invalid length for $message when calling Block., must be bigger than or equal to 0.');
        }
        if (!is_null($message) && (!preg_match("/^[\\S\\s]{1,150}$/", $message))) {
            throw new \InvalidArgumentException("invalid value for $message when calling Block., must conform to the pattern /^[\\S\\s]{1,150}$/.");
        }

        $this->container['message'] = $message;

        return $this;
    }

    /**
     * Gets timestamp
     *
     * @return string|null
     */
    public function getTimestamp()
    {
        return $this->container['timestamp'];
    }

    /**
     * Sets timestamp
     *
     * @param string|null $timestamp timestamp
     *
     * @return self
     */
    public function setTimestamp($timestamp)
    {
        $this->container['timestamp'] = $timestamp;

        return $this;
    }

    /**
     * Gets native_data
     *
     * @return object|null
     */
    public function getNativeData()
    {
        return $this->container['native_data'];
    }

    /**
     * Sets native_data
     *
     * @param object|null $native_data native_data
     *
     * @return self
     */
    public function setNativeData($native_data)
    {
        $this->container['native_data'] = $native_data;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed|null
     */
    public function offsetGet($offset)
    {
        return $this->container[$offset] ?? null;
    }

    /**
     * Sets value based on offset.
     *
     * @param int|null $offset Offset
     * @param mixed    $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Serializes the object to a value that can be serialized natively by json_encode().
     * @link https://www.php.net/manual/en/jsonserializable.jsonserialize.php
     *
     * @return mixed Returns data which can be serialized by json_encode(), which is a value
     * of any type other than a resource.
     */
    public function jsonSerialize()
    {
       return ObjectSerializer::sanitizeForSerialization($this);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


