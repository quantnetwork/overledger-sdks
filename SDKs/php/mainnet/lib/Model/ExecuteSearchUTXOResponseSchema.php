<?php
/**
 * ExecuteSearchUTXOResponseSchema
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
 * ExecuteSearchUTXOResponseSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class ExecuteSearchUTXOResponseSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ExecuteSearchUTXOResponseSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'utxo_id' => 'string',
        'destination' => '\OpenAPI\Client\Model\UTXODestination[]',
        'location' => '\OpenAPI\Client\Model\Location',
        'timestamp' => '\OpenAPI\Client\Model\UTXOTimestampSchema',
        'status' => '\OpenAPI\Client\Model\Status',
        'native_data' => '\OpenAPI\Client\Model\UTXONativeData'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'utxo_id' => null,
        'destination' => null,
        'location' => null,
        'timestamp' => null,
        'status' => null,
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
        'utxo_id' => 'utxoId',
        'destination' => 'destination',
        'location' => 'location',
        'timestamp' => 'timestamp',
        'status' => 'status',
        'native_data' => 'nativeData'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'utxo_id' => 'setUtxoId',
        'destination' => 'setDestination',
        'location' => 'setLocation',
        'timestamp' => 'setTimestamp',
        'status' => 'setStatus',
        'native_data' => 'setNativeData'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'utxo_id' => 'getUtxoId',
        'destination' => 'getDestination',
        'location' => 'getLocation',
        'timestamp' => 'getTimestamp',
        'status' => 'getStatus',
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
        $this->container['utxo_id'] = $data['utxo_id'] ?? null;
        $this->container['destination'] = $data['destination'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
        $this->container['timestamp'] = $data['timestamp'] ?? null;
        $this->container['status'] = $data['status'] ?? null;
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

        if (!is_null($this->container['destination']) && (count($this->container['destination']) > 1)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be less than or equal to 1.";
        }

        if (!is_null($this->container['destination']) && (count($this->container['destination']) < 0)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be greater than or equal to 0.";
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
     * Gets utxo_id
     *
     * @return string|null
     */
    public function getUtxoId()
    {
        return $this->container['utxo_id'];
    }

    /**
     * Sets utxo_id
     *
     * @param string|null $utxo_id utxo_id
     *
     * @return self
     */
    public function setUtxoId($utxo_id)
    {
        $this->container['utxo_id'] = $utxo_id;

        return $this;
    }

    /**
     * Gets destination
     *
     * @return \OpenAPI\Client\Model\UTXODestination[]|null
     */
    public function getDestination()
    {
        return $this->container['destination'];
    }

    /**
     * Sets destination
     *
     * @param \OpenAPI\Client\Model\UTXODestination[]|null $destination destination
     *
     * @return self
     */
    public function setDestination($destination)
    {

        if (!is_null($destination) && (count($destination) > 1)) {
            throw new \InvalidArgumentException('invalid value for $destination when calling ExecuteSearchUTXOResponseSchema., number of items must be less than or equal to 1.');
        }
        if (!is_null($destination) && (count($destination) < 0)) {
            throw new \InvalidArgumentException('invalid length for $destination when calling ExecuteSearchUTXOResponseSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['destination'] = $destination;

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
     * Gets timestamp
     *
     * @return \OpenAPI\Client\Model\UTXOTimestampSchema|null
     */
    public function getTimestamp()
    {
        return $this->container['timestamp'];
    }

    /**
     * Sets timestamp
     *
     * @param \OpenAPI\Client\Model\UTXOTimestampSchema|null $timestamp timestamp
     *
     * @return self
     */
    public function setTimestamp($timestamp)
    {
        $this->container['timestamp'] = $timestamp;

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
     * Gets native_data
     *
     * @return \OpenAPI\Client\Model\UTXONativeData|null
     */
    public function getNativeData()
    {
        return $this->container['native_data'];
    }

    /**
     * Sets native_data
     *
     * @param \OpenAPI\Client\Model\UTXONativeData|null $native_data native_data
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


