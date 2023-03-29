<?php
/**
 * Erc20DTO
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
 * Erc20DTO Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class Erc20DTO implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'Erc20DTO';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'is_qrc20' => 'bool',
        'token_unit' => 'string',
        'decimal_places' => 'int',
        'functions' => '\OpenAPI\Client\Model\TierFunctionDTO[]',
        'token_name' => 'string',
        'smart_contract_address' => 'string',
        'location' => '\OpenAPI\Client\Model\LocationDTO',
        'version' => 'string',
        'url' => 'string',
        'audit_date' => '\DateTime'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'is_qrc20' => null,
        'token_unit' => null,
        'decimal_places' => 'int32',
        'functions' => null,
        'token_name' => null,
        'smart_contract_address' => null,
        'location' => null,
        'version' => null,
        'url' => null,
        'audit_date' => 'date'
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
        'is_qrc20' => 'isQrc20',
        'token_unit' => 'tokenUnit',
        'decimal_places' => 'decimalPlaces',
        'functions' => 'functions',
        'token_name' => 'tokenName',
        'smart_contract_address' => 'smartContractAddress',
        'location' => 'location',
        'version' => 'version',
        'url' => 'url',
        'audit_date' => 'auditDate'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'is_qrc20' => 'setIsQrc20',
        'token_unit' => 'setTokenUnit',
        'decimal_places' => 'setDecimalPlaces',
        'functions' => 'setFunctions',
        'token_name' => 'setTokenName',
        'smart_contract_address' => 'setSmartContractAddress',
        'location' => 'setLocation',
        'version' => 'setVersion',
        'url' => 'setUrl',
        'audit_date' => 'setAuditDate'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'is_qrc20' => 'getIsQrc20',
        'token_unit' => 'getTokenUnit',
        'decimal_places' => 'getDecimalPlaces',
        'functions' => 'getFunctions',
        'token_name' => 'getTokenName',
        'smart_contract_address' => 'getSmartContractAddress',
        'location' => 'getLocation',
        'version' => 'getVersion',
        'url' => 'getUrl',
        'audit_date' => 'getAuditDate'
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
        $this->container['is_qrc20'] = $data['is_qrc20'] ?? null;
        $this->container['token_unit'] = $data['token_unit'] ?? null;
        $this->container['decimal_places'] = $data['decimal_places'] ?? null;
        $this->container['functions'] = $data['functions'] ?? null;
        $this->container['token_name'] = $data['token_name'] ?? null;
        $this->container['smart_contract_address'] = $data['smart_contract_address'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
        $this->container['version'] = $data['version'] ?? null;
        $this->container['url'] = $data['url'] ?? null;
        $this->container['audit_date'] = $data['audit_date'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

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
     * Gets is_qrc20
     *
     * @return bool|null
     */
    public function getIsQrc20()
    {
        return $this->container['is_qrc20'];
    }

    /**
     * Sets is_qrc20
     *
     * @param bool|null $is_qrc20 is_qrc20
     *
     * @return self
     */
    public function setIsQrc20($is_qrc20)
    {
        $this->container['is_qrc20'] = $is_qrc20;

        return $this;
    }

    /**
     * Gets token_unit
     *
     * @return string|null
     */
    public function getTokenUnit()
    {
        return $this->container['token_unit'];
    }

    /**
     * Sets token_unit
     *
     * @param string|null $token_unit token_unit
     *
     * @return self
     */
    public function setTokenUnit($token_unit)
    {
        $this->container['token_unit'] = $token_unit;

        return $this;
    }

    /**
     * Gets decimal_places
     *
     * @return int|null
     */
    public function getDecimalPlaces()
    {
        return $this->container['decimal_places'];
    }

    /**
     * Sets decimal_places
     *
     * @param int|null $decimal_places decimal_places
     *
     * @return self
     */
    public function setDecimalPlaces($decimal_places)
    {
        $this->container['decimal_places'] = $decimal_places;

        return $this;
    }

    /**
     * Gets functions
     *
     * @return \OpenAPI\Client\Model\TierFunctionDTO[]|null
     */
    public function getFunctions()
    {
        return $this->container['functions'];
    }

    /**
     * Sets functions
     *
     * @param \OpenAPI\Client\Model\TierFunctionDTO[]|null $functions functions
     *
     * @return self
     */
    public function setFunctions($functions)
    {
        $this->container['functions'] = $functions;

        return $this;
    }

    /**
     * Gets token_name
     *
     * @return string|null
     */
    public function getTokenName()
    {
        return $this->container['token_name'];
    }

    /**
     * Sets token_name
     *
     * @param string|null $token_name token_name
     *
     * @return self
     */
    public function setTokenName($token_name)
    {
        $this->container['token_name'] = $token_name;

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
     * @return \OpenAPI\Client\Model\LocationDTO|null
     */
    public function getLocation()
    {
        return $this->container['location'];
    }

    /**
     * Sets location
     *
     * @param \OpenAPI\Client\Model\LocationDTO|null $location location
     *
     * @return self
     */
    public function setLocation($location)
    {
        $this->container['location'] = $location;

        return $this;
    }

    /**
     * Gets version
     *
     * @return string|null
     */
    public function getVersion()
    {
        return $this->container['version'];
    }

    /**
     * Sets version
     *
     * @param string|null $version version
     *
     * @return self
     */
    public function setVersion($version)
    {
        $this->container['version'] = $version;

        return $this;
    }

    /**
     * Gets url
     *
     * @return string|null
     */
    public function getUrl()
    {
        return $this->container['url'];
    }

    /**
     * Sets url
     *
     * @param string|null $url url
     *
     * @return self
     */
    public function setUrl($url)
    {
        $this->container['url'] = $url;

        return $this;
    }

    /**
     * Gets audit_date
     *
     * @return \DateTime|null
     */
    public function getAuditDate()
    {
        return $this->container['audit_date'];
    }

    /**
     * Sets audit_date
     *
     * @param \DateTime|null $audit_date audit_date
     *
     * @return self
     */
    public function setAuditDate($audit_date)
    {
        $this->container['audit_date'] = $audit_date;

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

