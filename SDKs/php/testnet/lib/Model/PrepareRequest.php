<?php
/**
 * PrepareRequest
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
 * PrepareRequest Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class PrepareRequest implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'PrepareRequest';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'api_lookup_path' => 'string',
        'smart_contract_tag' => '\OpenAPI\Client\Model\SmartContractTag[]',
        'urgency' => 'string',
        'request_details' => '\OpenAPI\Client\Model\PrepareRequestDetails',
        'smart_contract_address' => 'string',
        'location' => '\OpenAPI\Client\Model\Location',
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
        'api_lookup_path' => null,
        'smart_contract_tag' => null,
        'urgency' => null,
        'request_details' => null,
        'smart_contract_address' => null,
        'location' => null,
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
        'api_lookup_path' => 'apiLookupPath',
        'smart_contract_tag' => 'smartContractTag',
        'urgency' => 'urgency',
        'request_details' => 'requestDetails',
        'smart_contract_address' => 'smartContractAddress',
        'location' => 'location',
        'type' => 'type'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'api_lookup_path' => 'setApiLookupPath',
        'smart_contract_tag' => 'setSmartContractTag',
        'urgency' => 'setUrgency',
        'request_details' => 'setRequestDetails',
        'smart_contract_address' => 'setSmartContractAddress',
        'location' => 'setLocation',
        'type' => 'setType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'api_lookup_path' => 'getApiLookupPath',
        'smart_contract_tag' => 'getSmartContractTag',
        'urgency' => 'getUrgency',
        'request_details' => 'getRequestDetails',
        'smart_contract_address' => 'getSmartContractAddress',
        'location' => 'getLocation',
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
        $this->container['api_lookup_path'] = $data['api_lookup_path'] ?? null;
        $this->container['smart_contract_tag'] = $data['smart_contract_tag'] ?? null;
        $this->container['urgency'] = $data['urgency'] ?? null;
        $this->container['request_details'] = $data['request_details'] ?? null;
        $this->container['smart_contract_address'] = $data['smart_contract_address'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
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

        if (!is_null($this->container['urgency']) && (mb_strlen($this->container['urgency']) > 50)) {
            $invalidProperties[] = "invalid value for 'urgency', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['urgency']) && (mb_strlen($this->container['urgency']) < 0)) {
            $invalidProperties[] = "invalid value for 'urgency', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['urgency']) && !preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $this->container['urgency'])) {
            $invalidProperties[] = "invalid value for 'urgency', must be conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.";
        }

        if (!is_null($this->container['type']) && (mb_strlen($this->container['type']) > 50)) {
            $invalidProperties[] = "invalid value for 'type', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['type']) && (mb_strlen($this->container['type']) < 0)) {
            $invalidProperties[] = "invalid value for 'type', the character length must be bigger than or equal to 0.";
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
     * Gets api_lookup_path
     *
     * @return string|null
     */
    public function getApiLookupPath()
    {
        return $this->container['api_lookup_path'];
    }

    /**
     * Sets api_lookup_path
     *
     * @param string|null $api_lookup_path api_lookup_path
     *
     * @return self
     */
    public function setApiLookupPath($api_lookup_path)
    {
        $this->container['api_lookup_path'] = $api_lookup_path;

        return $this;
    }

    /**
     * Gets smart_contract_tag
     *
     * @return \OpenAPI\Client\Model\SmartContractTag[]|null
     */
    public function getSmartContractTag()
    {
        return $this->container['smart_contract_tag'];
    }

    /**
     * Sets smart_contract_tag
     *
     * @param \OpenAPI\Client\Model\SmartContractTag[]|null $smart_contract_tag smart_contract_tag
     *
     * @return self
     */
    public function setSmartContractTag($smart_contract_tag)
    {
        $this->container['smart_contract_tag'] = $smart_contract_tag;

        return $this;
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
            throw new \InvalidArgumentException('invalid length for $urgency when calling PrepareRequest., must be smaller than or equal to 50.');
        }
        if (!is_null($urgency) && (mb_strlen($urgency) < 0)) {
            throw new \InvalidArgumentException('invalid length for $urgency when calling PrepareRequest., must be bigger than or equal to 0.');
        }
        if (!is_null($urgency) && (!preg_match("/^[a-zA-Z0-9-_ ]{1,50}$/", $urgency))) {
            throw new \InvalidArgumentException("invalid value for $urgency when calling PrepareRequest., must conform to the pattern /^[a-zA-Z0-9-_ ]{1,50}$/.");
        }

        $this->container['urgency'] = $urgency;

        return $this;
    }

    /**
     * Gets request_details
     *
     * @return \OpenAPI\Client\Model\PrepareRequestDetails|null
     */
    public function getRequestDetails()
    {
        return $this->container['request_details'];
    }

    /**
     * Sets request_details
     *
     * @param \OpenAPI\Client\Model\PrepareRequestDetails|null $request_details request_details
     *
     * @return self
     */
    public function setRequestDetails($request_details)
    {
        $this->container['request_details'] = $request_details;

        return $this;
    }

    /**
     * Gets smart_contract_address
     *
     * @return string|null
     */
    public function getSmartContractAddress()
    {
        return $this->container['smart_contract_address'];
    }

    /**
     * Sets smart_contract_address
     *
     * @param string|null $smart_contract_address smart_contract_address
     *
     * @return self
     */
    public function setSmartContractAddress($smart_contract_address)
    {
        $this->container['smart_contract_address'] = $smart_contract_address;

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
     * @param string|null $type type
     *
     * @return self
     */
    public function setType($type)
    {
        if (!is_null($type) && (mb_strlen($type) > 50)) {
            throw new \InvalidArgumentException('invalid length for $type when calling PrepareRequest., must be smaller than or equal to 50.');
        }
        if (!is_null($type) && (mb_strlen($type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $type when calling PrepareRequest., must be bigger than or equal to 0.');
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

