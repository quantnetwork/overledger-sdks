<?php
/**
 * CreateSubscriptionRequestSchema
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
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
 * CreateSubscriptionRequestSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class CreateSubscriptionRequestSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'CreateSubscriptionRequestSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'ids' => 'string[]',
        'callback_url' => 'string',
        'type' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'ids' => null,
        'callback_url' => null,
        'type' => null
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
        'ids' => 'ids',
        'callback_url' => 'callbackUrl',
        'type' => 'type'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'ids' => 'setIds',
        'callback_url' => 'setCallbackUrl',
        'type' => 'setType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'ids' => 'getIds',
        'callback_url' => 'getCallbackUrl',
        'type' => 'getType'
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
        $this->container['ids'] = $data['ids'] ?? null;
        $this->container['callback_url'] = $data['callback_url'] ?? null;
        $this->container['type'] = $data['type'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['ids']) && (count($this->container['ids']) > 36)) {
            $invalidProperties[] = "invalid value for 'ids', number of items must be less than or equal to 36.";
        }

        if (!is_null($this->container['ids']) && (count($this->container['ids']) < 0)) {
            $invalidProperties[] = "invalid value for 'ids', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['callback_url']) && (mb_strlen($this->container['callback_url']) > 300)) {
            $invalidProperties[] = "invalid value for 'callback_url', the character length must be smaller than or equal to 300.";
        }

        if (!is_null($this->container['callback_url']) && (mb_strlen($this->container['callback_url']) < 0)) {
            $invalidProperties[] = "invalid value for 'callback_url', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['callback_url']) && !preg_match("/^http[\\S\\s]{1,300}$/", $this->container['callback_url'])) {
            $invalidProperties[] = "invalid value for 'callback_url', must be conform to the pattern /^http[\\S\\s]{1,300}$/.";
        }

        if (!is_null($this->container['type']) && (mb_strlen($this->container['type']) > 50)) {
            $invalidProperties[] = "invalid value for 'type', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['type']) && (mb_strlen($this->container['type']) < 0)) {
            $invalidProperties[] = "invalid value for 'type', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['type']) && !preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $this->container['type'])) {
            $invalidProperties[] = "invalid value for 'type', must be conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.";
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
     * Gets ids
     *
     * @return string[]|null
     */
    public function getIds()
    {
        return $this->container['ids'];
    }

    /**
     * Sets ids
     *
     * @param string[]|null $ids ids
     *
     * @return self
     */
    public function setIds($ids)
    {

        if (!is_null($ids) && (count($ids) > 36)) {
            throw new \InvalidArgumentException('invalid value for $ids when calling CreateSubscriptionRequestSchema., number of items must be less than or equal to 36.');
        }
        if (!is_null($ids) && (count($ids) < 0)) {
            throw new \InvalidArgumentException('invalid length for $ids when calling CreateSubscriptionRequestSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['ids'] = $ids;

        return $this;
    }

    /**
     * Gets callback_url
     *
     * @return string|null
     */
    public function getCallbackUrl()
    {
        return $this->container['callback_url'];
    }

    /**
     * Sets callback_url
     *
     * @param string|null $callback_url callback_url
     *
     * @return self
     */
    public function setCallbackUrl($callback_url)
    {
        if (!is_null($callback_url) && (mb_strlen($callback_url) > 300)) {
            throw new \InvalidArgumentException('invalid length for $callback_url when calling CreateSubscriptionRequestSchema., must be smaller than or equal to 300.');
        }
        if (!is_null($callback_url) && (mb_strlen($callback_url) < 0)) {
            throw new \InvalidArgumentException('invalid length for $callback_url when calling CreateSubscriptionRequestSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($callback_url) && (!preg_match("/^http[\\S\\s]{1,300}$/", $callback_url))) {
            throw new \InvalidArgumentException("invalid value for $callback_url when calling CreateSubscriptionRequestSchema., must conform to the pattern /^http[\\S\\s]{1,300}$/.");
        }

        $this->container['callback_url'] = $callback_url;

        return $this;
    }

    /**
     * Gets type
     *
     * @return string|null
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     *
     * @param string|null $type type
     *
     * @return self
     */
    public function setType($type)
    {
        if (!is_null($type) && (mb_strlen($type) > 50)) {
            throw new \InvalidArgumentException('invalid length for $type when calling CreateSubscriptionRequestSchema., must be smaller than or equal to 50.');
        }
        if (!is_null($type) && (mb_strlen($type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $type when calling CreateSubscriptionRequestSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($type) && (!preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $type))) {
            throw new \InvalidArgumentException("invalid value for $type when calling CreateSubscriptionRequestSchema., must conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.");
        }

        $this->container['type'] = $type;

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


