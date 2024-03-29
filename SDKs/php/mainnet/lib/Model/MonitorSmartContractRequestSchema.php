<?php
/**
 * MonitorSmartContractRequestSchema
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
 * MonitorSmartContractRequestSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class MonitorSmartContractRequestSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'MonitorSmartContractRequestSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'event_params' => '\OpenAPI\Client\Model\MonitorSmartContractEventParam[]',
        'event_name' => 'string',
        'location' => '\OpenAPI\Client\Model\Location',
        'call_back_url' => 'string',
        'smart_contract_id' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'event_params' => null,
        'event_name' => null,
        'location' => null,
        'call_back_url' => null,
        'smart_contract_id' => null
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
        'event_params' => 'eventParams',
        'event_name' => 'eventName',
        'location' => 'location',
        'call_back_url' => 'callBackURL',
        'smart_contract_id' => 'smartContractId'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'event_params' => 'setEventParams',
        'event_name' => 'setEventName',
        'location' => 'setLocation',
        'call_back_url' => 'setCallBackUrl',
        'smart_contract_id' => 'setSmartContractId'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'event_params' => 'getEventParams',
        'event_name' => 'getEventName',
        'location' => 'getLocation',
        'call_back_url' => 'getCallBackUrl',
        'smart_contract_id' => 'getSmartContractId'
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
        $this->container['event_params'] = $data['event_params'] ?? null;
        $this->container['event_name'] = $data['event_name'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
        $this->container['call_back_url'] = $data['call_back_url'] ?? null;
        $this->container['smart_contract_id'] = $data['smart_contract_id'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['event_name']) && (mb_strlen($this->container['event_name']) > 100)) {
            $invalidProperties[] = "invalid value for 'event_name', the character length must be smaller than or equal to 100.";
        }

        if (!is_null($this->container['event_name']) && (mb_strlen($this->container['event_name']) < 0)) {
            $invalidProperties[] = "invalid value for 'event_name', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['event_name']) && !preg_match("/^[a-zA-Z0-9 ]{1,100}$/", $this->container['event_name'])) {
            $invalidProperties[] = "invalid value for 'event_name', must be conform to the pattern /^[a-zA-Z0-9 ]{1,100}$/.";
        }

        if (!is_null($this->container['call_back_url']) && (mb_strlen($this->container['call_back_url']) > 300)) {
            $invalidProperties[] = "invalid value for 'call_back_url', the character length must be smaller than or equal to 300.";
        }

        if (!is_null($this->container['call_back_url']) && (mb_strlen($this->container['call_back_url']) < 0)) {
            $invalidProperties[] = "invalid value for 'call_back_url', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['call_back_url']) && !preg_match("/^http[\\S\\s]{1,300}$/", $this->container['call_back_url'])) {
            $invalidProperties[] = "invalid value for 'call_back_url', must be conform to the pattern /^http[\\S\\s]{1,300}$/.";
        }

        if (!is_null($this->container['smart_contract_id']) && (mb_strlen($this->container['smart_contract_id']) > 100)) {
            $invalidProperties[] = "invalid value for 'smart_contract_id', the character length must be smaller than or equal to 100.";
        }

        if (!is_null($this->container['smart_contract_id']) && (mb_strlen($this->container['smart_contract_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'smart_contract_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['smart_contract_id']) && !preg_match("/^[a-zA-Z0-9-]{1,100}$/", $this->container['smart_contract_id'])) {
            $invalidProperties[] = "invalid value for 'smart_contract_id', must be conform to the pattern /^[a-zA-Z0-9-]{1,100}$/.";
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
     * Gets event_params
     *
     * @return \OpenAPI\Client\Model\MonitorSmartContractEventParam[]|null
     */
    public function getEventParams()
    {
        return $this->container['event_params'];
    }

    /**
     * Sets event_params
     *
     * @param \OpenAPI\Client\Model\MonitorSmartContractEventParam[]|null $event_params event_params
     *
     * @return self
     */
    public function setEventParams($event_params)
    {
        $this->container['event_params'] = $event_params;

        return $this;
    }

    /**
     * Gets event_name
     *
     * @return string|null
     */
    public function getEventName()
    {
        return $this->container['event_name'];
    }

    /**
     * Sets event_name
     *
     * @param string|null $event_name event_name
     *
     * @return self
     */
    public function setEventName($event_name)
    {
        if (!is_null($event_name) && (mb_strlen($event_name) > 100)) {
            throw new \InvalidArgumentException('invalid length for $event_name when calling MonitorSmartContractRequestSchema., must be smaller than or equal to 100.');
        }
        if (!is_null($event_name) && (mb_strlen($event_name) < 0)) {
            throw new \InvalidArgumentException('invalid length for $event_name when calling MonitorSmartContractRequestSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($event_name) && (!preg_match("/^[a-zA-Z0-9 ]{1,100}$/", $event_name))) {
            throw new \InvalidArgumentException("invalid value for $event_name when calling MonitorSmartContractRequestSchema., must conform to the pattern /^[a-zA-Z0-9 ]{1,100}$/.");
        }

        $this->container['event_name'] = $event_name;

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
     * Gets call_back_url
     *
     * @return string|null
     */
    public function getCallBackUrl()
    {
        return $this->container['call_back_url'];
    }

    /**
     * Sets call_back_url
     *
     * @param string|null $call_back_url call_back_url
     *
     * @return self
     */
    public function setCallBackUrl($call_back_url)
    {
        if (!is_null($call_back_url) && (mb_strlen($call_back_url) > 300)) {
            throw new \InvalidArgumentException('invalid length for $call_back_url when calling MonitorSmartContractRequestSchema., must be smaller than or equal to 300.');
        }
        if (!is_null($call_back_url) && (mb_strlen($call_back_url) < 0)) {
            throw new \InvalidArgumentException('invalid length for $call_back_url when calling MonitorSmartContractRequestSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($call_back_url) && (!preg_match("/^http[\\S\\s]{1,300}$/", $call_back_url))) {
            throw new \InvalidArgumentException("invalid value for $call_back_url when calling MonitorSmartContractRequestSchema., must conform to the pattern /^http[\\S\\s]{1,300}$/.");
        }

        $this->container['call_back_url'] = $call_back_url;

        return $this;
    }

    /**
     * Gets smart_contract_id
     *
     * @return string|null
     */
    public function getSmartContractId()
    {
        return $this->container['smart_contract_id'];
    }

    /**
     * Sets smart_contract_id
     *
     * @param string|null $smart_contract_id smart_contract_id
     *
     * @return self
     */
    public function setSmartContractId($smart_contract_id)
    {
        if (!is_null($smart_contract_id) && (mb_strlen($smart_contract_id) > 100)) {
            throw new \InvalidArgumentException('invalid length for $smart_contract_id when calling MonitorSmartContractRequestSchema., must be smaller than or equal to 100.');
        }
        if (!is_null($smart_contract_id) && (mb_strlen($smart_contract_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $smart_contract_id when calling MonitorSmartContractRequestSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($smart_contract_id) && (!preg_match("/^[a-zA-Z0-9-]{1,100}$/", $smart_contract_id))) {
            throw new \InvalidArgumentException("invalid value for $smart_contract_id when calling MonitorSmartContractRequestSchema., must conform to the pattern /^[a-zA-Z0-9-]{1,100}$/.");
        }

        $this->container['smart_contract_id'] = $smart_contract_id;

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


