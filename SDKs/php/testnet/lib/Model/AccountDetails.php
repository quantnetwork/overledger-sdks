<?php
/**
 * AccountDetails
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
 * AccountDetails Class Doc Comment
 *
 * @category Class
 * @description Account Details of the tokens
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class AccountDetails implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'AccountDetails';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'parent_account_id' => 'string',
        'account_id' => 'string',
        'unit' => 'string',
        'owning_institution_id' => 'string',
        'account_type' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'parent_account_id' => null,
        'account_id' => null,
        'unit' => null,
        'owning_institution_id' => null,
        'account_type' => null
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
        'parent_account_id' => 'parentAccountId',
        'account_id' => 'accountId',
        'unit' => 'unit',
        'owning_institution_id' => 'owningInstitutionId',
        'account_type' => 'accountType'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'parent_account_id' => 'setParentAccountId',
        'account_id' => 'setAccountId',
        'unit' => 'setUnit',
        'owning_institution_id' => 'setOwningInstitutionId',
        'account_type' => 'setAccountType'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'parent_account_id' => 'getParentAccountId',
        'account_id' => 'getAccountId',
        'unit' => 'getUnit',
        'owning_institution_id' => 'getOwningInstitutionId',
        'account_type' => 'getAccountType'
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
        $this->container['parent_account_id'] = $data['parent_account_id'] ?? null;
        $this->container['account_id'] = $data['account_id'] ?? null;
        $this->container['unit'] = $data['unit'] ?? null;
        $this->container['owning_institution_id'] = $data['owning_institution_id'] ?? null;
        $this->container['account_type'] = $data['account_type'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['parent_account_id']) && (mb_strlen($this->container['parent_account_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'parent_account_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['parent_account_id']) && (mb_strlen($this->container['parent_account_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'parent_account_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['account_id']) && (mb_strlen($this->container['account_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'account_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['account_id']) && (mb_strlen($this->container['account_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'account_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['unit']) && (mb_strlen($this->container['unit']) > 11)) {
            $invalidProperties[] = "invalid value for 'unit', the character length must be smaller than or equal to 11.";
        }

        if (!is_null($this->container['unit']) && (mb_strlen($this->container['unit']) < 0)) {
            $invalidProperties[] = "invalid value for 'unit', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['owning_institution_id']) && (mb_strlen($this->container['owning_institution_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'owning_institution_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['owning_institution_id']) && (mb_strlen($this->container['owning_institution_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'owning_institution_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['account_type']) && (mb_strlen($this->container['account_type']) > 10)) {
            $invalidProperties[] = "invalid value for 'account_type', the character length must be smaller than or equal to 10.";
        }

        if (!is_null($this->container['account_type']) && (mb_strlen($this->container['account_type']) < 0)) {
            $invalidProperties[] = "invalid value for 'account_type', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['account_type']) && !preg_match("/^[a-zA-Z]{1,10}$/", $this->container['account_type'])) {
            $invalidProperties[] = "invalid value for 'account_type', must be conform to the pattern /^[a-zA-Z]{1,10}$/.";
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
     * Gets parent_account_id
     *
     * @return string|null
     */
    public function getParentAccountId()
    {
        return $this->container['parent_account_id'];
    }

    /**
     * Sets parent_account_id
     *
     * @param string|null $parent_account_id parent_account_id
     *
     * @return self
     */
    public function setParentAccountId($parent_account_id)
    {
        if (!is_null($parent_account_id) && (mb_strlen($parent_account_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $parent_account_id when calling AccountDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($parent_account_id) && (mb_strlen($parent_account_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $parent_account_id when calling AccountDetails., must be bigger than or equal to 0.');
        }

        $this->container['parent_account_id'] = $parent_account_id;

        return $this;
    }

    /**
     * Gets account_id
     *
     * @return string|null
     */
    public function getAccountId()
    {
        return $this->container['account_id'];
    }

    /**
     * Sets account_id
     *
     * @param string|null $account_id account_id
     *
     * @return self
     */
    public function setAccountId($account_id)
    {
        if (!is_null($account_id) && (mb_strlen($account_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $account_id when calling AccountDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($account_id) && (mb_strlen($account_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $account_id when calling AccountDetails., must be bigger than or equal to 0.');
        }

        $this->container['account_id'] = $account_id;

        return $this;
    }

    /**
     * Gets unit
     *
     * @return string|null
     */
    public function getUnit()
    {
        return $this->container['unit'];
    }

    /**
     * Sets unit
     *
     * @param string|null $unit unit
     *
     * @return self
     */
    public function setUnit($unit)
    {
        if (!is_null($unit) && (mb_strlen($unit) > 11)) {
            throw new \InvalidArgumentException('invalid length for $unit when calling AccountDetails., must be smaller than or equal to 11.');
        }
        if (!is_null($unit) && (mb_strlen($unit) < 0)) {
            throw new \InvalidArgumentException('invalid length for $unit when calling AccountDetails., must be bigger than or equal to 0.');
        }

        $this->container['unit'] = $unit;

        return $this;
    }

    /**
     * Gets owning_institution_id
     *
     * @return string|null
     */
    public function getOwningInstitutionId()
    {
        return $this->container['owning_institution_id'];
    }

    /**
     * Sets owning_institution_id
     *
     * @param string|null $owning_institution_id owning_institution_id
     *
     * @return self
     */
    public function setOwningInstitutionId($owning_institution_id)
    {
        if (!is_null($owning_institution_id) && (mb_strlen($owning_institution_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $owning_institution_id when calling AccountDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($owning_institution_id) && (mb_strlen($owning_institution_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $owning_institution_id when calling AccountDetails., must be bigger than or equal to 0.');
        }

        $this->container['owning_institution_id'] = $owning_institution_id;

        return $this;
    }

    /**
     * Gets account_type
     *
     * @return string|null
     */
    public function getAccountType()
    {
        return $this->container['account_type'];
    }

    /**
     * Sets account_type
     *
     * @param string|null $account_type account_type
     *
     * @return self
     */
    public function setAccountType($account_type)
    {
        if (!is_null($account_type) && (mb_strlen($account_type) > 10)) {
            throw new \InvalidArgumentException('invalid length for $account_type when calling AccountDetails., must be smaller than or equal to 10.');
        }
        if (!is_null($account_type) && (mb_strlen($account_type) < 0)) {
            throw new \InvalidArgumentException('invalid length for $account_type when calling AccountDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($account_type) && (!preg_match("/^[a-zA-Z]{1,10}$/", $account_type))) {
            throw new \InvalidArgumentException("invalid value for $account_type when calling AccountDetails., must conform to the pattern /^[a-zA-Z]{1,10}$/.");
        }

        $this->container['account_type'] = $account_type;

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

