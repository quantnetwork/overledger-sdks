<?php
/**
 * SubscriptionDeletionResponse
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
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
 * SubscriptionDeletionResponse Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class SubscriptionDeletionResponse implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'SubscriptionDeletionResponse';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'subscription_details' => '\OpenAPI\Client\Model\SubscriptionDetails',
        'callback_url' => 'string',
        'subscription_id' => 'string',
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
        'subscription_details' => null,
        'callback_url' => null,
        'subscription_id' => null,
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
        'subscription_details' => 'subscriptionDetails',
        'callback_url' => 'callbackUrl',
        'subscription_id' => 'subscriptionId',
        'type' => 'type'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'subscription_details' => 'setSubscriptionDetails',
        'callback_url' => 'setCallbackUrl',
        'subscription_id' => 'setSubscriptionId',
        'type' => 'setType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'subscription_details' => 'getSubscriptionDetails',
        'callback_url' => 'getCallbackUrl',
        'subscription_id' => 'getSubscriptionId',
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
        $this->container['subscription_details'] = $data['subscription_details'] ?? null;
        $this->container['callback_url'] = $data['callback_url'] ?? null;
        $this->container['subscription_id'] = $data['subscription_id'] ?? null;
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

        if (!is_null($this->container['callback_url']) && (mb_strlen($this->container['callback_url']) > 300)) {
            $invalidProperties[] = "invalid value for 'callback_url', the character length must be smaller than or equal to 300.";
        }

        if (!is_null($this->container['callback_url']) && (mb_strlen($this->container['callback_url']) < 0)) {
            $invalidProperties[] = "invalid value for 'callback_url', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['callback_url']) && !preg_match("/^http[\\S\\s]{1,300}$/", $this->container['callback_url'])) {
            $invalidProperties[] = "invalid value for 'callback_url', must be conform to the pattern /^http[\\S\\s]{1,300}$/.";
        }

        if (!is_null($this->container['subscription_id']) && (mb_strlen($this->container['subscription_id']) > 24)) {
            $invalidProperties[] = "invalid value for 'subscription_id', the character length must be smaller than or equal to 24.";
        }

        if (!is_null($this->container['subscription_id']) && (mb_strlen($this->container['subscription_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'subscription_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['subscription_id']) && !preg_match("/^[a-z0-9-]{1,24}$/", $this->container['subscription_id'])) {
            $invalidProperties[] = "invalid value for 'subscription_id', must be conform to the pattern /^[a-z0-9-]{1,24}$/.";
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
     * Gets subscription_details
     *
     * @return \OpenAPI\Client\Model\SubscriptionDetails|null
     */
    public function getSubscriptionDetails()
    {
        return $this->container['subscription_details'];
    }

    /**
     * Sets subscription_details
     *
     * @param \OpenAPI\Client\Model\SubscriptionDetails|null $subscription_details subscription_details
     *
     * @return self
     */
    public function setSubscriptionDetails($subscription_details)
    {
        $this->container['subscription_details'] = $subscription_details;

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
            throw new \InvalidArgumentException('invalid length for $callback_url when calling SubscriptionDeletionResponse., must be smaller than or equal to 300.');
        }
        if (!is_null($callback_url) && (mb_strlen($callback_url) < 0)) {
            throw new \InvalidArgumentException('invalid length for $callback_url when calling SubscriptionDeletionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($callback_url) && (!preg_match("/^http[\\S\\s]{1,300}$/", $callback_url))) {
            throw new \InvalidArgumentException("invalid value for $callback_url when calling SubscriptionDeletionResponse., must conform to the pattern /^http[\\S\\s]{1,300}$/.");
        }

        $this->container['callback_url'] = $callback_url;

        return $this;
    }

    /**
     * Gets subscription_id
     *
     * @return string|null
     */
    public function getSubscriptionId()
    {
        return $this->container['subscription_id'];
    }

    /**
     * Sets subscription_id
     *
     * @param string|null $subscription_id subscription_id
     *
     * @return self
     */
    public function setSubscriptionId($subscription_id)
    {
        if (!is_null($subscription_id) && (mb_strlen($subscription_id) > 24)) {
            throw new \InvalidArgumentException('invalid length for $subscription_id when calling SubscriptionDeletionResponse., must be smaller than or equal to 24.');
        }
        if (!is_null($subscription_id) && (mb_strlen($subscription_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $subscription_id when calling SubscriptionDeletionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($subscription_id) && (!preg_match("/^[a-z0-9-]{1,24}$/", $subscription_id))) {
            throw new \InvalidArgumentException("invalid value for $subscription_id when calling SubscriptionDeletionResponse., must conform to the pattern /^[a-z0-9-]{1,24}$/.");
        }

        $this->container['subscription_id'] = $subscription_id;

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
            throw new \InvalidArgumentException('invalid length for $type when calling SubscriptionDeletionResponse., must be smaller than or equal to 50.');
        }
        if (!is_null($type) && (mb_strlen($type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $type when calling SubscriptionDeletionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($type) && (!preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $type))) {
            throw new \InvalidArgumentException("invalid value for $type when calling SubscriptionDeletionResponse., must conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.");
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


