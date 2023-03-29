<?php
/**
 * AutoExecuteSearchBlockResponseSchema
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
 * AutoExecuteSearchBlockResponseSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class AutoExecuteSearchBlockResponseSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'AutoExecuteSearchBlockResponseSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'prepare_and_execute_overledger_error_response' => '\OpenAPI\Client\Model\PrepareAndExecuteOverledgerErrorResponse',
        'execution_block_search_response' => '\OpenAPI\Client\Model\ExecuteSearchBlockResponse',
        'preparation_block_search_response' => '\OpenAPI\Client\Model\PrepareSearchResponseSchema'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'prepare_and_execute_overledger_error_response' => null,
        'execution_block_search_response' => null,
        'preparation_block_search_response' => null
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
        'prepare_and_execute_overledger_error_response' => 'prepareAndExecuteOverledgerErrorResponse',
        'execution_block_search_response' => 'executionBlockSearchResponse',
        'preparation_block_search_response' => 'preparationBlockSearchResponse'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'prepare_and_execute_overledger_error_response' => 'setPrepareAndExecuteOverledgerErrorResponse',
        'execution_block_search_response' => 'setExecutionBlockSearchResponse',
        'preparation_block_search_response' => 'setPreparationBlockSearchResponse'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'prepare_and_execute_overledger_error_response' => 'getPrepareAndExecuteOverledgerErrorResponse',
        'execution_block_search_response' => 'getExecutionBlockSearchResponse',
        'preparation_block_search_response' => 'getPreparationBlockSearchResponse'
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
        $this->container['prepare_and_execute_overledger_error_response'] = $data['prepare_and_execute_overledger_error_response'] ?? null;
        $this->container['execution_block_search_response'] = $data['execution_block_search_response'] ?? null;
        $this->container['preparation_block_search_response'] = $data['preparation_block_search_response'] ?? null;
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
     * Gets prepare_and_execute_overledger_error_response
     *
     * @return \OpenAPI\Client\Model\PrepareAndExecuteOverledgerErrorResponse|null
     */
    public function getPrepareAndExecuteOverledgerErrorResponse()
    {
        return $this->container['prepare_and_execute_overledger_error_response'];
    }

    /**
     * Sets prepare_and_execute_overledger_error_response
     *
     * @param \OpenAPI\Client\Model\PrepareAndExecuteOverledgerErrorResponse|null $prepare_and_execute_overledger_error_response prepare_and_execute_overledger_error_response
     *
     * @return self
     */
    public function setPrepareAndExecuteOverledgerErrorResponse($prepare_and_execute_overledger_error_response)
    {
        $this->container['prepare_and_execute_overledger_error_response'] = $prepare_and_execute_overledger_error_response;

        return $this;
    }

    /**
     * Gets execution_block_search_response
     *
     * @return \OpenAPI\Client\Model\ExecuteSearchBlockResponse|null
     */
    public function getExecutionBlockSearchResponse()
    {
        return $this->container['execution_block_search_response'];
    }

    /**
     * Sets execution_block_search_response
     *
     * @param \OpenAPI\Client\Model\ExecuteSearchBlockResponse|null $execution_block_search_response execution_block_search_response
     *
     * @return self
     */
    public function setExecutionBlockSearchResponse($execution_block_search_response)
    {
        $this->container['execution_block_search_response'] = $execution_block_search_response;

        return $this;
    }

    /**
     * Gets preparation_block_search_response
     *
     * @return \OpenAPI\Client\Model\PrepareSearchResponseSchema|null
     */
    public function getPreparationBlockSearchResponse()
    {
        return $this->container['preparation_block_search_response'];
    }

    /**
     * Sets preparation_block_search_response
     *
     * @param \OpenAPI\Client\Model\PrepareSearchResponseSchema|null $preparation_block_search_response preparation_block_search_response
     *
     * @return self
     */
    public function setPreparationBlockSearchResponse($preparation_block_search_response)
    {
        $this->container['preparation_block_search_response'] = $preparation_block_search_response;

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


