<?php
/**
 * ErrorDetails
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
 * ErrorDetails Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class ErrorDetails implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ErrorDetails';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'category' => 'string',
        'description' => 'string',
        'code' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'category' => null,
        'description' => null,
        'code' => null
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
        'category' => 'category',
        'description' => 'description',
        'code' => 'code'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'category' => 'setCategory',
        'description' => 'setDescription',
        'code' => 'setCode'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'category' => 'getCategory',
        'description' => 'getDescription',
        'code' => 'getCode'
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
        $this->container['category'] = $data['category'] ?? null;
        $this->container['description'] = $data['description'] ?? null;
        $this->container['code'] = $data['code'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['category']) && (mb_strlen($this->container['category']) > 50)) {
            $invalidProperties[] = "invalid value for 'category', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['category']) && (mb_strlen($this->container['category']) < 0)) {
            $invalidProperties[] = "invalid value for 'category', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['category']) && !preg_match("/^[\\S\\s]{1,50}$/", $this->container['category'])) {
            $invalidProperties[] = "invalid value for 'category', must be conform to the pattern /^[\\S\\s]{1,50}$/.";
        }

        if (!is_null($this->container['description']) && (mb_strlen($this->container['description']) > 300)) {
            $invalidProperties[] = "invalid value for 'description', the character length must be smaller than or equal to 300.";
        }

        if (!is_null($this->container['description']) && (mb_strlen($this->container['description']) < 0)) {
            $invalidProperties[] = "invalid value for 'description', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['description']) && !preg_match("/^[\\S\\s]{1,300}$/", $this->container['description'])) {
            $invalidProperties[] = "invalid value for 'description', must be conform to the pattern /^[\\S\\s]{1,300}$/.";
        }

        if (!is_null($this->container['code']) && (mb_strlen($this->container['code']) > 30)) {
            $invalidProperties[] = "invalid value for 'code', the character length must be smaller than or equal to 30.";
        }

        if (!is_null($this->container['code']) && (mb_strlen($this->container['code']) < 0)) {
            $invalidProperties[] = "invalid value for 'code', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['code']) && !preg_match("/^[a-zA-Z0-9_ ]{1,30}$/", $this->container['code'])) {
            $invalidProperties[] = "invalid value for 'code', must be conform to the pattern /^[a-zA-Z0-9_ ]{1,30}$/.";
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
     * Gets category
     *
     * @return string|null
     */
    public function getCategory()
    {
        return $this->container['category'];
    }

    /**
     * Sets category
     *
     * @param string|null $category category
     *
     * @return self
     */
    public function setCategory($category)
    {
        if (!is_null($category) && (mb_strlen($category) > 50)) {
            throw new \InvalidArgumentException('invalid length for $category when calling ErrorDetails., must be smaller than or equal to 50.');
        }
        if (!is_null($category) && (mb_strlen($category) < 0)) {
            throw new \InvalidArgumentException('invalid length for $category when calling ErrorDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($category) && (!preg_match("/^[\\S\\s]{1,50}$/", $category))) {
            throw new \InvalidArgumentException("invalid value for $category when calling ErrorDetails., must conform to the pattern /^[\\S\\s]{1,50}$/.");
        }

        $this->container['category'] = $category;

        return $this;
    }

    /**
     * Gets description
     *
     * @return string|null
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     *
     * @param string|null $description description
     *
     * @return self
     */
    public function setDescription($description)
    {
        if (!is_null($description) && (mb_strlen($description) > 300)) {
            throw new \InvalidArgumentException('invalid length for $description when calling ErrorDetails., must be smaller than or equal to 300.');
        }
        if (!is_null($description) && (mb_strlen($description) < 0)) {
            throw new \InvalidArgumentException('invalid length for $description when calling ErrorDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($description) && (!preg_match("/^[\\S\\s]{1,300}$/", $description))) {
            throw new \InvalidArgumentException("invalid value for $description when calling ErrorDetails., must conform to the pattern /^[\\S\\s]{1,300}$/.");
        }

        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets code
     *
     * @return string|null
     */
    public function getCode()
    {
        return $this->container['code'];
    }

    /**
     * Sets code
     *
     * @param string|null $code code
     *
     * @return self
     */
    public function setCode($code)
    {
        if (!is_null($code) && (mb_strlen($code) > 30)) {
            throw new \InvalidArgumentException('invalid length for $code when calling ErrorDetails., must be smaller than or equal to 30.');
        }
        if (!is_null($code) && (mb_strlen($code) < 0)) {
            throw new \InvalidArgumentException('invalid length for $code when calling ErrorDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($code) && (!preg_match("/^[a-zA-Z0-9_ ]{1,30}$/", $code))) {
            throw new \InvalidArgumentException("invalid value for $code when calling ErrorDetails., must conform to the pattern /^[a-zA-Z0-9_ ]{1,30}$/.");
        }

        $this->container['code'] = $code;

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


