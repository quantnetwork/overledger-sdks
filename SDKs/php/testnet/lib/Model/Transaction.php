<?php
/**
 * Transaction
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
 * Transaction Class Doc Comment
 *
 * @category Class
 * @description Smallest unit of a work process related to interactions with distributed ledgers
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class Transaction implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'Transaction';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'signature' => 'string[]',
        'origin' => '\OpenAPI\Client\Model\Origin[]',
        'fee' => '\OpenAPI\Client\Model\Fee',
        'destination' => '\OpenAPI\Client\Model\Destination[]',
        'signed' => 'string',
        'total_payment_amount' => '\OpenAPI\Client\Model\Payment[]',
        'message' => 'string',
        'transaction_id' => 'string',
        'encoded' => 'string[]',
        'extra_fields' => 'object',
        'native_data' => 'object'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'signature' => null,
        'origin' => null,
        'fee' => null,
        'destination' => null,
        'signed' => null,
        'total_payment_amount' => null,
        'message' => null,
        'transaction_id' => null,
        'encoded' => null,
        'extra_fields' => null,
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
        'signature' => 'signature',
        'origin' => 'origin',
        'fee' => 'fee',
        'destination' => 'destination',
        'signed' => 'signed',
        'total_payment_amount' => 'totalPaymentAmount',
        'message' => 'message',
        'transaction_id' => 'transactionId',
        'encoded' => 'encoded',
        'extra_fields' => 'extraFields',
        'native_data' => 'nativeData'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'signature' => 'setSignature',
        'origin' => 'setOrigin',
        'fee' => 'setFee',
        'destination' => 'setDestination',
        'signed' => 'setSigned',
        'total_payment_amount' => 'setTotalPaymentAmount',
        'message' => 'setMessage',
        'transaction_id' => 'setTransactionId',
        'encoded' => 'setEncoded',
        'extra_fields' => 'setExtraFields',
        'native_data' => 'setNativeData'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'signature' => 'getSignature',
        'origin' => 'getOrigin',
        'fee' => 'getFee',
        'destination' => 'getDestination',
        'signed' => 'getSigned',
        'total_payment_amount' => 'getTotalPaymentAmount',
        'message' => 'getMessage',
        'transaction_id' => 'getTransactionId',
        'encoded' => 'getEncoded',
        'extra_fields' => 'getExtraFields',
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
        $this->container['signature'] = $data['signature'] ?? null;
        $this->container['origin'] = $data['origin'] ?? null;
        $this->container['fee'] = $data['fee'] ?? null;
        $this->container['destination'] = $data['destination'] ?? null;
        $this->container['signed'] = $data['signed'] ?? null;
        $this->container['total_payment_amount'] = $data['total_payment_amount'] ?? null;
        $this->container['message'] = $data['message'] ?? null;
        $this->container['transaction_id'] = $data['transaction_id'] ?? null;
        $this->container['encoded'] = $data['encoded'] ?? null;
        $this->container['extra_fields'] = $data['extra_fields'] ?? null;
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

        if (!is_null($this->container['signature']) && (count($this->container['signature']) > 20000)) {
            $invalidProperties[] = "invalid value for 'signature', number of items must be less than or equal to 20000.";
        }

        if (!is_null($this->container['signature']) && (count($this->container['signature']) < 0)) {
            $invalidProperties[] = "invalid value for 'signature', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['origin']) && (count($this->container['origin']) > 20000)) {
            $invalidProperties[] = "invalid value for 'origin', number of items must be less than or equal to 20000.";
        }

        if (!is_null($this->container['origin']) && (count($this->container['origin']) < 0)) {
            $invalidProperties[] = "invalid value for 'origin', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['destination']) && (count($this->container['destination']) > 13107)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be less than or equal to 13107.";
        }

        if (!is_null($this->container['destination']) && (count($this->container['destination']) < 0)) {
            $invalidProperties[] = "invalid value for 'destination', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['signed']) && (mb_strlen($this->container['signed']) > 400)) {
            $invalidProperties[] = "invalid value for 'signed', the character length must be smaller than or equal to 400.";
        }

        if (!is_null($this->container['signed']) && (mb_strlen($this->container['signed']) < 0)) {
            $invalidProperties[] = "invalid value for 'signed', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['signed']) && !preg_match("/^[A-Za-z0-9-]{1,400}$/", $this->container['signed'])) {
            $invalidProperties[] = "invalid value for 'signed', must be conform to the pattern /^[A-Za-z0-9-]{1,400}$/.";
        }

        if (!is_null($this->container['total_payment_amount']) && (count($this->container['total_payment_amount']) > 20)) {
            $invalidProperties[] = "invalid value for 'total_payment_amount', number of items must be less than or equal to 20.";
        }

        if (!is_null($this->container['total_payment_amount']) && (count($this->container['total_payment_amount']) < 0)) {
            $invalidProperties[] = "invalid value for 'total_payment_amount', number of items must be greater than or equal to 0.";
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

        if (!is_null($this->container['transaction_id']) && (mb_strlen($this->container['transaction_id']) > 100)) {
            $invalidProperties[] = "invalid value for 'transaction_id', the character length must be smaller than or equal to 100.";
        }

        if (!is_null($this->container['transaction_id']) && (mb_strlen($this->container['transaction_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'transaction_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['transaction_id']) && !preg_match("/^[a-zA-Z0-9]{1,100}$/", $this->container['transaction_id'])) {
            $invalidProperties[] = "invalid value for 'transaction_id', must be conform to the pattern /^[a-zA-Z0-9]{1,100}$/.";
        }

        if (!is_null($this->container['encoded']) && (count($this->container['encoded']) > 100)) {
            $invalidProperties[] = "invalid value for 'encoded', number of items must be less than or equal to 100.";
        }

        if (!is_null($this->container['encoded']) && (count($this->container['encoded']) < 0)) {
            $invalidProperties[] = "invalid value for 'encoded', number of items must be greater than or equal to 0.";
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
     * Gets signature
     *
     * @return string[]|null
     */
    public function getSignature()
    {
        return $this->container['signature'];
    }

    /**
     * Sets signature
     *
     * @param string[]|null $signature The signatures of this transaction
     *
     * @return self
     */
    public function setSignature($signature)
    {

        if (!is_null($signature) && (count($signature) > 20000)) {
            throw new \InvalidArgumentException('invalid value for $signature when calling Transaction., number of items must be less than or equal to 20000.');
        }
        if (!is_null($signature) && (count($signature) < 0)) {
            throw new \InvalidArgumentException('invalid length for $signature when calling Transaction., number of items must be greater than or equal to 0.');
        }
        $this->container['signature'] = $signature;

        return $this;
    }

    /**
     * Gets origin
     *
     * @return \OpenAPI\Client\Model\Origin[]|null
     */
    public function getOrigin()
    {
        return $this->container['origin'];
    }

    /**
     * Sets origin
     *
     * @param \OpenAPI\Client\Model\Origin[]|null $origin origin
     *
     * @return self
     */
    public function setOrigin($origin)
    {

        if (!is_null($origin) && (count($origin) > 20000)) {
            throw new \InvalidArgumentException('invalid value for $origin when calling Transaction., number of items must be less than or equal to 20000.');
        }
        if (!is_null($origin) && (count($origin) < 0)) {
            throw new \InvalidArgumentException('invalid length for $origin when calling Transaction., number of items must be greater than or equal to 0.');
        }
        $this->container['origin'] = $origin;

        return $this;
    }

    /**
     * Gets fee
     *
     * @return \OpenAPI\Client\Model\Fee|null
     */
    public function getFee()
    {
        return $this->container['fee'];
    }

    /**
     * Sets fee
     *
     * @param \OpenAPI\Client\Model\Fee|null $fee fee
     *
     * @return self
     */
    public function setFee($fee)
    {
        $this->container['fee'] = $fee;

        return $this;
    }

    /**
     * Gets destination
     *
     * @return \OpenAPI\Client\Model\Destination[]|null
     */
    public function getDestination()
    {
        return $this->container['destination'];
    }

    /**
     * Sets destination
     *
     * @param \OpenAPI\Client\Model\Destination[]|null $destination destination
     *
     * @return self
     */
    public function setDestination($destination)
    {

        if (!is_null($destination) && (count($destination) > 13107)) {
            throw new \InvalidArgumentException('invalid value for $destination when calling Transaction., number of items must be less than or equal to 13107.');
        }
        if (!is_null($destination) && (count($destination) < 0)) {
            throw new \InvalidArgumentException('invalid length for $destination when calling Transaction., number of items must be greater than or equal to 0.');
        }
        $this->container['destination'] = $destination;

        return $this;
    }

    /**
     * Gets signed
     *
     * @return string|null
     */
    public function getSigned()
    {
        return $this->container['signed'];
    }

    /**
     * Sets signed
     *
     * @param string|null $signed signed
     *
     * @return self
     */
    public function setSigned($signed)
    {
        if (!is_null($signed) && (mb_strlen($signed) > 400)) {
            throw new \InvalidArgumentException('invalid length for $signed when calling Transaction., must be smaller than or equal to 400.');
        }
        if (!is_null($signed) && (mb_strlen($signed) < 0)) {
            throw new \InvalidArgumentException('invalid length for $signed when calling Transaction., must be bigger than or equal to 0.');
        }
        if (!is_null($signed) && (!preg_match("/^[A-Za-z0-9-]{1,400}$/", $signed))) {
            throw new \InvalidArgumentException("invalid value for $signed when calling Transaction., must conform to the pattern /^[A-Za-z0-9-]{1,400}$/.");
        }

        $this->container['signed'] = $signed;

        return $this;
    }

    /**
     * Gets total_payment_amount
     *
     * @return \OpenAPI\Client\Model\Payment[]|null
     */
    public function getTotalPaymentAmount()
    {
        return $this->container['total_payment_amount'];
    }

    /**
     * Sets total_payment_amount
     *
     * @param \OpenAPI\Client\Model\Payment[]|null $total_payment_amount total_payment_amount
     *
     * @return self
     */
    public function setTotalPaymentAmount($total_payment_amount)
    {

        if (!is_null($total_payment_amount) && (count($total_payment_amount) > 20)) {
            throw new \InvalidArgumentException('invalid value for $total_payment_amount when calling Transaction., number of items must be less than or equal to 20.');
        }
        if (!is_null($total_payment_amount) && (count($total_payment_amount) < 0)) {
            throw new \InvalidArgumentException('invalid length for $total_payment_amount when calling Transaction., number of items must be greater than or equal to 0.');
        }
        $this->container['total_payment_amount'] = $total_payment_amount;

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
            throw new \InvalidArgumentException('invalid length for $message when calling Transaction., must be smaller than or equal to 150.');
        }
        if (!is_null($message) && (mb_strlen($message) < 0)) {
            throw new \InvalidArgumentException('invalid length for $message when calling Transaction., must be bigger than or equal to 0.');
        }
        if (!is_null($message) && (!preg_match("/^[\\S\\s]{1,150}$/", $message))) {
            throw new \InvalidArgumentException("invalid value for $message when calling Transaction., must conform to the pattern /^[\\S\\s]{1,150}$/.");
        }

        $this->container['message'] = $message;

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
     * @param string|null $transaction_id The unique identifier of the transaction on this DLN
     *
     * @return self
     */
    public function setTransactionId($transaction_id)
    {
        if (!is_null($transaction_id) && (mb_strlen($transaction_id) > 100)) {
            throw new \InvalidArgumentException('invalid length for $transaction_id when calling Transaction., must be smaller than or equal to 100.');
        }
        if (!is_null($transaction_id) && (mb_strlen($transaction_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $transaction_id when calling Transaction., must be bigger than or equal to 0.');
        }
        if (!is_null($transaction_id) && (!preg_match("/^[a-zA-Z0-9]{1,100}$/", $transaction_id))) {
            throw new \InvalidArgumentException("invalid value for $transaction_id when calling Transaction., must conform to the pattern /^[a-zA-Z0-9]{1,100}$/.");
        }

        $this->container['transaction_id'] = $transaction_id;

        return $this;
    }

    /**
     * Gets encoded
     *
     * @return string[]|null
     */
    public function getEncoded()
    {
        return $this->container['encoded'];
    }

    /**
     * Sets encoded
     *
     * @param string[]|null $encoded encoded
     *
     * @return self
     */
    public function setEncoded($encoded)
    {

        if (!is_null($encoded) && (count($encoded) > 100)) {
            throw new \InvalidArgumentException('invalid value for $encoded when calling Transaction., number of items must be less than or equal to 100.');
        }
        if (!is_null($encoded) && (count($encoded) < 0)) {
            throw new \InvalidArgumentException('invalid length for $encoded when calling Transaction., number of items must be greater than or equal to 0.');
        }
        $this->container['encoded'] = $encoded;

        return $this;
    }

    /**
     * Gets extra_fields
     *
     * @return object|null
     */
    public function getExtraFields()
    {
        return $this->container['extra_fields'];
    }

    /**
     * Sets extra_fields
     *
     * @param object|null $extra_fields extra_fields
     *
     * @return self
     */
    public function setExtraFields($extra_fields)
    {
        $this->container['extra_fields'] = $extra_fields;

        return $this;
    }

    /**
     * Gets native_data
     *
     * @return object|null
     */
    public function getNativeData()
    {
        return $this->container['native_data'];
    }

    /**
     * Sets native_data
     *
     * @param object|null $native_data native_data
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


