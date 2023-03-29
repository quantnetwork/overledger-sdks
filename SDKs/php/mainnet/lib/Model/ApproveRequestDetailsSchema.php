<?php
/**
 * ApproveRequestDetailsSchema
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
 * ApproveRequestDetailsSchema Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class ApproveRequestDetailsSchema implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ApproveRequestDetailsSchema';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'payer' => '\OpenAPI\Client\Model\PayerCreditSchema[]',
        'mandate' => '\OpenAPI\Client\Model\PayeeCreditSchema[]',
        'overledger_signing_type' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'payer' => null,
        'mandate' => null,
        'overledger_signing_type' => null
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
        'payer' => 'payer',
        'mandate' => 'mandate',
        'overledger_signing_type' => 'overledgerSigningType'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'payer' => 'setPayer',
        'mandate' => 'setMandate',
        'overledger_signing_type' => 'setOverledgerSigningType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'payer' => 'getPayer',
        'mandate' => 'getMandate',
        'overledger_signing_type' => 'getOverledgerSigningType'
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
        $this->container['payer'] = $data['payer'] ?? null;
        $this->container['mandate'] = $data['mandate'] ?? null;
        $this->container['overledger_signing_type'] = $data['overledger_signing_type'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['payer']) && (count($this->container['payer']) > 100)) {
            $invalidProperties[] = "invalid value for 'payer', number of items must be less than or equal to 100.";
        }

        if (!is_null($this->container['payer']) && (count($this->container['payer']) < 0)) {
            $invalidProperties[] = "invalid value for 'payer', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['mandate']) && (count($this->container['mandate']) > 100)) {
            $invalidProperties[] = "invalid value for 'mandate', number of items must be less than or equal to 100.";
        }

        if (!is_null($this->container['mandate']) && (count($this->container['mandate']) < 0)) {
            $invalidProperties[] = "invalid value for 'mandate', number of items must be greater than or equal to 0.";
        }

        if (!is_null($this->container['overledger_signing_type']) && (mb_strlen($this->container['overledger_signing_type']) > 30)) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', the character length must be smaller than or equal to 30.";
        }

        if (!is_null($this->container['overledger_signing_type']) && (mb_strlen($this->container['overledger_signing_type']) < 0)) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['overledger_signing_type']) && !preg_match("/^[A-Za-z- ]{1,30}/", $this->container['overledger_signing_type'])) {
            $invalidProperties[] = "invalid value for 'overledger_signing_type', must be conform to the pattern /^[A-Za-z- ]{1,30}/.";
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
     * Gets payer
     *
     * @return \OpenAPI\Client\Model\PayerCreditSchema[]|null
     */
    public function getPayer()
    {
        return $this->container['payer'];
    }

    /**
     * Sets payer
     *
     * @param \OpenAPI\Client\Model\PayerCreditSchema[]|null $payer Who are the payers of this transaction
     *
     * @return self
     */
    public function setPayer($payer)
    {

        if (!is_null($payer) && (count($payer) > 100)) {
            throw new \InvalidArgumentException('invalid value for $payer when calling ApproveRequestDetailsSchema., number of items must be less than or equal to 100.');
        }
        if (!is_null($payer) && (count($payer) < 0)) {
            throw new \InvalidArgumentException('invalid length for $payer when calling ApproveRequestDetailsSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['payer'] = $payer;

        return $this;
    }

    /**
     * Gets mandate
     *
     * @return \OpenAPI\Client\Model\PayeeCreditSchema[]|null
     */
    public function getMandate()
    {
        return $this->container['mandate'];
    }

    /**
     * Sets mandate
     *
     * @param \OpenAPI\Client\Model\PayeeCreditSchema[]|null $mandate Who are the payees of this transaction
     *
     * @return self
     */
    public function setMandate($mandate)
    {

        if (!is_null($mandate) && (count($mandate) > 100)) {
            throw new \InvalidArgumentException('invalid value for $mandate when calling ApproveRequestDetailsSchema., number of items must be less than or equal to 100.');
        }
        if (!is_null($mandate) && (count($mandate) < 0)) {
            throw new \InvalidArgumentException('invalid length for $mandate when calling ApproveRequestDetailsSchema., number of items must be greater than or equal to 0.');
        }
        $this->container['mandate'] = $mandate;

        return $this;
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
            throw new \InvalidArgumentException('invalid length for $overledger_signing_type when calling ApproveRequestDetailsSchema., must be smaller than or equal to 30.');
        }
        if (!is_null($overledger_signing_type) && (mb_strlen($overledger_signing_type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $overledger_signing_type when calling ApproveRequestDetailsSchema., must be bigger than or equal to 0.');
        }
        if (!is_null($overledger_signing_type) && (!preg_match("/^[A-Za-z- ]{1,30}/", $overledger_signing_type))) {
            throw new \InvalidArgumentException("invalid value for $overledger_signing_type when calling ApproveRequestDetailsSchema., must conform to the pattern /^[A-Za-z- ]{1,30}/.");
        }

        $this->container['overledger_signing_type'] = $overledger_signing_type;

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


