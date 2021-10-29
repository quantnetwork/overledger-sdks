<?php
/**
 * SmartContractReadFunctionSchema
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
 * SmartContractReadFunctionSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class SmartContractReadFunctionSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'SmartContractReadFunctionSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'function_id' => 'string',
        'name' => 'string',
        'input_parameters' => '\OpenAPI\Client\Model\SmartContractInputParameterSchema[]',
        'output_parameters' => '\OpenAPI\Client\Model\SmartContractInputParameterSchema[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'function_id' => null,
        'name' => null,
        'input_parameters' => null,
        'output_parameters' => null
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
        'function_id' => 'functionId',
        'name' => 'name',
        'input_parameters' => 'inputParameters',
        'output_parameters' => 'outputParameters'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'function_id' => 'setFunctionId',
        'name' => 'setName',
        'input_parameters' => 'setInputParameters',
        'output_parameters' => 'setOutputParameters'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'function_id' => 'getFunctionId',
        'name' => 'getName',
        'input_parameters' => 'getInputParameters',
        'output_parameters' => 'getOutputParameters'
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
        $this->container['function_id'] = $data['function_id'] ?? null;
        $this->container['name'] = $data['name'] ?? null;
        $this->container['input_parameters'] = $data['input_parameters'] ?? null;
        $this->container['output_parameters'] = $data['output_parameters'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['input_parameters']) && (count($this->container['input_parameters']) > 20)) {
            $invalidProperties[] = "invalid value for 'input_parameters', number of items must be less than or equal to 20.";
        }

        if (!is_null($this->container['input_parameters']) && (count($this->container['input_parameters']) < 0)) {
            $invalidProperties[] = "invalid value for 'input_parameters', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['output_parameters']) && (count($this->container['output_parameters']) > 10)) {
            $invalidProperties[] = "invalid value for 'output_parameters', number of items must be less than or equal to 10.";
        }

        if (!is_null($this->container['output_parameters']) && (count($this->container['output_parameters']) < 0)) {
            $invalidProperties[] = "invalid value for 'output_parameters', number of items must be greater than or equal to 0.";
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
     * Gets function_id
     *
     * @return string|null
     */
    public function getFunctionId()
    {
        return $this->container['function_id'];
    }

    /**
     * Sets function_id
     *
     * @param string|null $function_id function_id
     *
     * @return self
     */
    public function setFunctionId($function_id)
    {
        $this->container['function_id'] = $function_id;

        return $this;
    }

    /**
     * Gets name
     *
     * @return string|null
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     *
     * @param string|null $name name
     *
     * @return self
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets input_parameters
     *
     * @return \OpenAPI\Client\Model\SmartContractInputParameterSchema[]|null
     */
    public function getInputParameters()
    {
        return $this->container['input_parameters'];
    }

    /**
     * Sets input_parameters
     *
     * @param \OpenAPI\Client\Model\SmartContractInputParameterSchema[]|null $input_parameters input_parameters
     *
     * @return self
     */
    public function setInputParameters($input_parameters)
    {

        if (!is_null($input_parameters) && (count($input_parameters) > 20)) {
            throw new \InvalidArgumentException('invalid value for $input_parameters when calling SmartContractReadFunctionSchema., number of items must be less than or equal to 20.');
        }
        if (!is_null($input_parameters) && (count($input_parameters) < 0)) {
            throw new \InvalidArgumentException('invalid length for $input_parameters when calling SmartContractReadFunctionSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['input_parameters'] = $input_parameters;

        return $this;
    }

    /**
     * Gets output_parameters
     *
     * @return \OpenAPI\Client\Model\SmartContractInputParameterSchema[]|null
     */
    public function getOutputParameters()
    {
        return $this->container['output_parameters'];
    }

    /**
     * Sets output_parameters
     *
     * @param \OpenAPI\Client\Model\SmartContractInputParameterSchema[]|null $output_parameters output_parameters
     *
     * @return self
     */
    public function setOutputParameters($output_parameters)
    {

        if (!is_null($output_parameters) && (count($output_parameters) > 10)) {
            throw new \InvalidArgumentException('invalid value for $output_parameters when calling SmartContractReadFunctionSchema., number of items must be less than or equal to 10.');
        }
        if (!is_null($output_parameters) && (count($output_parameters) < 0)) {
            throw new \InvalidArgumentException('invalid length for $output_parameters when calling SmartContractReadFunctionSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['output_parameters'] = $output_parameters;

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


