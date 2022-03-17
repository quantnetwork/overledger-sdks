<?php
/**
 * PaymentRequestDetailsSchema
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
 * PaymentRequestDetailsSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class PaymentRequestDetailsSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'PaymentRequestDetailsSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'overledger_signing_type' => 'string',
        'origin' => '\OpenAPI\Client\Model\OriginPaymentSchema[]',
        'destination' => '\OpenAPI\Client\Model\DestinationPaymentSchema[]',
        'message' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'overledger_signing_type' => null,
        'origin' => null,
        'destination' => null,
        'message' => null
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
        'overledger_signing_type' => 'overledgerSigningType',
        'origin' => 'origin',
        'destination' => 'destination',
        'message' => 'message'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'overledger_signing_type' => 'setOverledgerSigningType',
        'origin' => 'setOrigin',
        'destination' => 'setDestination',
        'message' => 'setMessage'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'overledger_signing_type' => 'getOverledgerSigningType',
        'origin' => 'getOrigin',
        'destination' => 'getDestination',
        'message' => 'getMessage'
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
        $this->container['overledger_signing_type'] = $data['overledger_signing_type'] ?? null;
        $this->container['origin'] = $data['origin'] ?? null;
        $this->container['destination'] = $data['destination'] ?? null;
        $this->container['message'] = $data['message'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['overledger_signing_type']) && (mb_strlen($this->container['overledger_signing_type']) > 30)) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', the character length must be smaller than or equal to 30.";
        }

        if (!is_null($this->container['overledger_signing_type']) && (mb_strlen($this->container['overledger_signing_type']) < 0)) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['overledger_signing_type']) && !preg_match("/^[A-Za-z- ]{1,30}/", $this->container['overledger_signing_type'])) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', must be conform to the pattern /^[A-Za-z- ]{1,30}/.";
        }

        if (!is_null($this->container['origin']) && (count($this->container['origin']) > 100)) {
            $invalidProperties[] = "invalid value for 'origin', number of items must be less than or equal to 100.";
        }

        if (!is_null($this->container['origin']) && (count($this->container['origin']) < 0)) {
            $invalidProperties[] = "invalid value for 'origin', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['destination']) && (count($this->container['destination']) > 100)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be less than or equal to 100.";
        }

        if (!is_null($this->container['destination']) && (count($this->container['destination']) < 0)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['message']) && (mb_strlen($this->container['message']) > 150)) {
            $invalidProperties[] = "invalid value for 'message', the character length must be smaller than or equal to 150.";
        }

        if (!is_null($this->container['message']) && (mb_strlen($this->container['message']) < 0)) {
            $invalidProperties[] = "invalid value for 'message', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['message']) && !preg_match("/^[\\S\\s]{1,150}$/", $this->container['message'])) {
            $invalidProperties[] = "invalid value for 'message', must be conform to the pattern /^[\\S\\s]{1,150}$/.";
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
     * Gets overledger_signing_type
     *
     * @return string|null
     */
    public function getOverledgerSigningType()
    {
        return $this->container['overledger_signing_type'];
    }

    /**
     * Sets overledger_signing_type
     *
     * @param string|null $overledger_signing_type overledger_signing_type
     *
     * @return self
     */
    public function setOverledgerSigningType($overledger_signing_type)
    {
        if (!is_null($overledger_signing_type) && (mb_strlen($overledger_signing_type) > 30)) {
            throw new \InvalidArgumentException('invalid length for $overledger_signing_type when calling PaymentRequestDetailsSchema., must be smaller than or equal to 30.');
        }
        if (!is_null($overledger_signing_type) && (mb_strlen($overledger_signing_type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $overledger_signing_type when calling PaymentRequestDetailsSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($overledger_signing_type) && (!preg_match("/^[A-Za-z- ]{1,30}/", $overledger_signing_type))) {
            throw new \InvalidArgumentException("invalid value for $overledger_signing_type when calling PaymentRequestDetailsSchema., must conform to the pattern /^[A-Za-z- ]{1,30}/.");
        }

        $this->container['overledger_signing_type'] = $overledger_signing_type;

        return $this;
    }

    /**
     * Gets origin
     *
     * @return \OpenAPI\Client\Model\OriginPaymentSchema[]|null
     */
    public function getOrigin()
    {
        return $this->container['origin'];
    }

    /**
     * Sets origin
     *
     * @param \OpenAPI\Client\Model\OriginPaymentSchema[]|null $origin Where is this transaction coming from
     *
     * @return self
     */
    public function setOrigin($origin)
    {

        if (!is_null($origin) && (count($origin) > 100)) {
            throw new \InvalidArgumentException('invalid value for $origin when calling PaymentRequestDetailsSchema., number of items must be less than or equal to 100.');
        }
        if (!is_null($origin) && (count($origin) < 0)) {
            throw new \InvalidArgumentException('invalid length for $origin when calling PaymentRequestDetailsSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['origin'] = $origin;

        return $this;
    }

    /**
     * Gets destination
     *
     * @return \OpenAPI\Client\Model\DestinationPaymentSchema[]|null
     */
    public function getDestination()
    {
        return $this->container['destination'];
    }

    /**
     * Sets destination
     *
     * @param \OpenAPI\Client\Model\DestinationPaymentSchema[]|null $destination The Destination of this transaction
     *
     * @return self
     */
    public function setDestination($destination)
    {

        if (!is_null($destination) && (count($destination) > 100)) {
            throw new \InvalidArgumentException('invalid value for $destination when calling PaymentRequestDetailsSchema., number of items must be less than or equal to 100.');
        }
        if (!is_null($destination) && (count($destination) < 0)) {
            throw new \InvalidArgumentException('invalid length for $destination when calling PaymentRequestDetailsSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['destination'] = $destination;

        return $this;
    }

    /**
     * Gets message
     *
     * @return string|null
     */
    public function getMessage()
    {
        return $this->container['message'];
    }

    /**
     * Sets message
     *
     * @param string|null $message Any text-based element of the data payload
     *
     * @return self
     */
    public function setMessage($message)
    {
        if (!is_null($message) && (mb_strlen($message) > 150)) {
            throw new \InvalidArgumentException('invalid length for $message when calling PaymentRequestDetailsSchema., must be smaller than or equal to 150.');
        }
        if (!is_null($message) && (mb_strlen($message) < 0)) {
            throw new \InvalidArgumentException('invalid length for $message when calling PaymentRequestDetailsSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($message) && (!preg_match("/^[\\S\\s]{1,150}$/", $message))) {
            throw new \InvalidArgumentException("invalid value for $message when calling PaymentRequestDetailsSchema., must conform to the pattern /^[\\S\\s]{1,150}$/.");
        }

        $this->container['message'] = $message;

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


