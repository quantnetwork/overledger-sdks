<?php
/**
 * ExecuteTransactionResponse
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
 * ExecuteTransactionResponse Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class ExecuteTransactionResponse implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ExecuteTransactionResponse';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'urgency' => 'string',
        'request_id' => 'string',
        'overledger_transaction_id' => 'string',
        'location' => '\OpenAPI\Client\Model\Location',
        'type' => 'string',
        'transaction_id' => 'string',
        'status' => '\OpenAPI\Client\Model\Status'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'urgency' => null,
        'request_id' => null,
        'overledger_transaction_id' => null,
        'location' => null,
        'type' => null,
        'transaction_id' => null,
        'status' => null
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
        'urgency' => 'urgency',
        'request_id' => 'requestId',
        'overledger_transaction_id' => 'overledgerTransactionId',
        'location' => 'location',
        'type' => 'type',
        'transaction_id' => 'transactionId',
        'status' => 'status'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'urgency' => 'setUrgency',
        'request_id' => 'setRequestId',
        'overledger_transaction_id' => 'setOverledgerTransactionId',
        'location' => 'setLocation',
        'type' => 'setType',
        'transaction_id' => 'setTransactionId',
        'status' => 'setStatus'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'urgency' => 'getUrgency',
        'request_id' => 'getRequestId',
        'overledger_transaction_id' => 'getOverledgerTransactionId',
        'location' => 'getLocation',
        'type' => 'getType',
        'transaction_id' => 'getTransactionId',
        'status' => 'getStatus'
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
        $this->container['urgency'] = $data['urgency'] ?? null;
        $this->container['request_id'] = $data['request_id'] ?? null;
        $this->container['overledger_transaction_id'] = $data['overledger_transaction_id'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
        $this->container['type'] = $data['type'] ?? null;
        $this->container['transaction_id'] = $data['transaction_id'] ?? null;
        $this->container['status'] = $data['status'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['urgency']) && (mb_strlen($this->container['urgency']) > 50)) {
            $invalidProperties[] = "invalid value for 'urgency', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['urgency']) && (mb_strlen($this->container['urgency']) < 0)) {
            $invalidProperties[] = "invalid value for 'urgency', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['urgency']) && !preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $this->container['urgency'])) {
            $invalidProperties[] = "invalid value for 'urgency', must be conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.";
        }

        if (!is_null($this->container['request_id']) && (mb_strlen($this->container['request_id']) > 36)) {
            $invalidProperties[] = "invalid value for 'request_id', the character length must be smaller than or equal to 36.";
        }

        if (!is_null($this->container['request_id']) && (mb_strlen($this->container['request_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'request_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['request_id']) && !preg_match("/^[A-Za-z0-9-]{1,36}$/", $this->container['request_id'])) {
            $invalidProperties[] = "invalid value for 'request_id', must be conform to the pattern /^[A-Za-z0-9-]{1,36}$/.";
        }

        if (!is_null($this->container['overledger_transaction_id']) && (mb_strlen($this->container['overledger_transaction_id']) > 36)) {
            $invalidProperties[] = "invalid value for 'overledger_transaction_id', the character length must be smaller than or equal to 36.";
        }

        if (!is_null($this->container['overledger_transaction_id']) && (mb_strlen($this->container['overledger_transaction_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'overledger_transaction_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['overledger_transaction_id']) && !preg_match("/^[a-zA-Z0-9\\-]{1,36}$/", $this->container['overledger_transaction_id'])) {
            $invalidProperties[] = "invalid value for 'overledger_transaction_id', must be conform to the pattern /^[a-zA-Z0-9\\-]{1,36}$/.";
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

        if (!is_null($this->container['transaction_id']) && (mb_strlen($this->container['transaction_id']) > 100)) {
            $invalidProperties[] = "invalid value for 'transaction_id', the character length must be smaller than or equal to 100.";
        }

        if (!is_null($this->container['transaction_id']) && (mb_strlen($this->container['transaction_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'transaction_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['transaction_id']) && !preg_match("/^[a-zA-Z0-9-]{1,100}$/", $this->container['transaction_id'])) {
            $invalidProperties[] = "invalid value for 'transaction_id', must be conform to the pattern /^[a-zA-Z0-9-]{1,100}$/.";
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
     * Gets urgency
     *
     * @return string|null
     */
    public function getUrgency()
    {
        return $this->container['urgency'];
    }

    /**
     * Sets urgency
     *
     * @param string|null $urgency urgency
     *
     * @return self
     */
    public function setUrgency($urgency)
    {
        if (!is_null($urgency) && (mb_strlen($urgency) > 50)) {
            throw new \InvalidArgumentException('invalid length for $urgency when calling ExecuteTransactionResponse., must be smaller than or equal to 50.');
        }
        if (!is_null($urgency) && (mb_strlen($urgency) < 0)) {
            throw new \InvalidArgumentException('invalid length for $urgency when calling ExecuteTransactionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($urgency) && (!preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $urgency))) {
            throw new \InvalidArgumentException("invalid value for $urgency when calling ExecuteTransactionResponse., must conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.");
        }

        $this->container['urgency'] = $urgency;

        return $this;
    }

    /**
     * Gets request_id
     *
     * @return string|null
     */
    public function getRequestId()
    {
        return $this->container['request_id'];
    }

    /**
     * Sets request_id
     *
     * @param string|null $request_id The ID assigned to a preparation request in Overledger
     *
     * @return self
     */
    public function setRequestId($request_id)
    {
        if (!is_null($request_id) && (mb_strlen($request_id) > 36)) {
            throw new \InvalidArgumentException('invalid length for $request_id when calling ExecuteTransactionResponse., must be smaller than or equal to 36.');
        }
        if (!is_null($request_id) && (mb_strlen($request_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $request_id when calling ExecuteTransactionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($request_id) && (!preg_match("/^[A-Za-z0-9-]{1,36}$/", $request_id))) {
            throw new \InvalidArgumentException("invalid value for $request_id when calling ExecuteTransactionResponse., must conform to the pattern /^[A-Za-z0-9-]{1,36}$/.");
        }

        $this->container['request_id'] = $request_id;

        return $this;
    }

    /**
     * Gets overledger_transaction_id
     *
     * @return string|null
     */
    public function getOverledgerTransactionId()
    {
        return $this->container['overledger_transaction_id'];
    }

    /**
     * Sets overledger_transaction_id
     *
     * @param string|null $overledger_transaction_id overledger_transaction_id
     *
     * @return self
     */
    public function setOverledgerTransactionId($overledger_transaction_id)
    {
        if (!is_null($overledger_transaction_id) && (mb_strlen($overledger_transaction_id) > 36)) {
            throw new \InvalidArgumentException('invalid length for $overledger_transaction_id when calling ExecuteTransactionResponse., must be smaller than or equal to 36.');
        }
        if (!is_null($overledger_transaction_id) && (mb_strlen($overledger_transaction_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $overledger_transaction_id when calling ExecuteTransactionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($overledger_transaction_id) && (!preg_match("/^[a-zA-Z0-9\\-]{1,36}$/", $overledger_transaction_id))) {
            throw new \InvalidArgumentException("invalid value for $overledger_transaction_id when calling ExecuteTransactionResponse., must conform to the pattern /^[a-zA-Z0-9\\-]{1,36}$/.");
        }

        $this->container['overledger_transaction_id'] = $overledger_transaction_id;

        return $this;
    }

    /**
     * Gets location
     *
     * @return \OpenAPI\Client\Model\Location|null
     */
    public function getLocation()
    {
        return $this->container['location'];
    }

    /**
     * Sets location
     *
     * @param \OpenAPI\Client\Model\Location|null $location location
     *
     * @return self
     */
    public function setLocation($location)
    {
        $this->container['location'] = $location;

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
     * @param string|null $type The type of the transaction executed
     *
     * @return self
     */
    public function setType($type)
    {
        if (!is_null($type) && (mb_strlen($type) > 50)) {
            throw new \InvalidArgumentException('invalid length for $type when calling ExecuteTransactionResponse., must be smaller than or equal to 50.');
        }
        if (!is_null($type) && (mb_strlen($type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $type when calling ExecuteTransactionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($type) && (!preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $type))) {
            throw new \InvalidArgumentException("invalid value for $type when calling ExecuteTransactionResponse., must conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.");
        }

        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets transaction_id
     *
     * @return string|null
     */
    public function getTransactionId()
    {
        return $this->container['transaction_id'];
    }

    /**
     * Sets transaction_id
     *
     * @param string|null $transaction_id The ID assigned by Overledger to a transaction submitted to a DLT via Overledger
     *
     * @return self
     */
    public function setTransactionId($transaction_id)
    {
        if (!is_null($transaction_id) && (mb_strlen($transaction_id) > 100)) {
            throw new \InvalidArgumentException('invalid length for $transaction_id when calling ExecuteTransactionResponse., must be smaller than or equal to 100.');
        }
        if (!is_null($transaction_id) && (mb_strlen($transaction_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $transaction_id when calling ExecuteTransactionResponse., must be bigger than or equal to 0.');
        }
        if (!is_null($transaction_id) && (!preg_match("/^[a-zA-Z0-9-]{1,100}$/", $transaction_id))) {
            throw new \InvalidArgumentException("invalid value for $transaction_id when calling ExecuteTransactionResponse., must conform to the pattern /^[a-zA-Z0-9-]{1,100}$/.");
        }

        $this->container['transaction_id'] = $transaction_id;

        return $this;
    }

    /**
     * Gets status
     *
     * @return \OpenAPI\Client\Model\Status|null
     */
    public function getStatus()
    {
        return $this->container['status'];
    }

    /**
     * Sets status
     *
     * @param \OpenAPI\Client\Model\Status|null $status status
     *
     * @return self
     */
    public function setStatus($status)
    {
        $this->container['status'] = $status;

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


