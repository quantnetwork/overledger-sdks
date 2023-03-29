<?php
/**
 * NonFungibleTokenResponse
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
 * NonFungibleTokenResponse Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class NonFungibleTokenResponse implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'NonFungibleTokenResponse';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'token_name' => 'string',
        'documentation_url' => 'string',
        'location' => '\OpenAPI\Client\Model\Location',
        'functions' => '\OpenAPI\Client\Model\ModelFunction[]',
        'contract_type' => 'string',
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
        'token_name' => null,
        'documentation_url' => null,
        'location' => null,
        'functions' => null,
        'contract_type' => null,
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
        'token_name' => 'tokenName',
        'documentation_url' => 'documentationUrl',
        'location' => 'location',
        'functions' => 'functions',
        'contract_type' => 'contractType',
        'smart_contract_id' => 'smartContractId'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'token_name' => 'setTokenName',
        'documentation_url' => 'setDocumentationUrl',
        'location' => 'setLocation',
        'functions' => 'setFunctions',
        'contract_type' => 'setContractType',
        'smart_contract_id' => 'setSmartContractId'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'token_name' => 'getTokenName',
        'documentation_url' => 'getDocumentationUrl',
        'location' => 'getLocation',
        'functions' => 'getFunctions',
        'contract_type' => 'getContractType',
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
        $this->container['token_name'] = $data['token_name'] ?? null;
        $this->container['documentation_url'] = $data['documentation_url'] ?? null;
        $this->container['location'] = $data['location'] ?? null;
        $this->container['functions'] = $data['functions'] ?? null;
        $this->container['contract_type'] = $data['contract_type'] ?? null;
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
     * Gets documentation_url
     *
     * @return string|null
     */
    public function getDocumentationUrl()
    {
        return $this->container['documentation_url'];
    }

    /**
     * Sets documentation_url
     *
     * @param string|null $documentation_url documentation_url
     *
     * @return self
     */
    public function setDocumentationUrl($documentation_url)
    {
        $this->container['documentation_url'] = $documentation_url;

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
     * Gets functions
     *
     * @return \OpenAPI\Client\Model\ModelFunction[]|null
     */
    public function getFunctions()
    {
        return $this->container['functions'];
    }

    /**
     * Sets functions
     *
     * @param \OpenAPI\Client\Model\ModelFunction[]|null $functions functions
     *
     * @return self
     */
    public function setFunctions($functions)
    {
        $this->container['functions'] = $functions;

        return $this;
    }

    /**
     * Gets contract_type
     *
     * @return string|null
     */
    public function getContractType()
    {
        return $this->container['contract_type'];
    }

    /**
     * Sets contract_type
     *
     * @param string|null $contract_type contract_type
     *
     * @return self
     */
    public function setContractType($contract_type)
    {
        $this->container['contract_type'] = $contract_type;

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

