<?php
/**
 * LockDetails
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
 * LockDetails Class Doc Comment
 *
 * @category Class
 * @description Lock Details of the tokens
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<TKey, TValue>
 * @template TKey int|null
 * @template TValue mixed|null
 */
class LockDetails implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'LockDetails';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'expiry_date' => 'string',
        'lock_id' => 'string',
        'account_id' => 'string',
        'amount' => 'string',
        'unit' => 'string',
        'account_owning_institution_id' => 'string',
        'lock_description' => 'string',
        'payee_id' => 'string',
        'secret' => 'string',
        'hash' => 'string',
        'payee_owning_institution_id' => 'string',
        'lock_owning_institution_id' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'expiry_date' => null,
        'lock_id' => 'uuid',
        'account_id' => null,
        'amount' => null,
        'unit' => null,
        'account_owning_institution_id' => null,
        'lock_description' => null,
        'payee_id' => null,
        'secret' => null,
        'hash' => null,
        'payee_owning_institution_id' => null,
        'lock_owning_institution_id' => null
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
        'expiry_date' => 'expiryDate',
        'lock_id' => 'lockId',
        'account_id' => 'accountId',
        'amount' => 'amount',
        'unit' => 'unit',
        'account_owning_institution_id' => 'accountOwningInstitutionId',
        'lock_description' => 'lockDescription',
        'payee_id' => 'payeeId',
        'secret' => 'secret',
        'hash' => 'hash',
        'payee_owning_institution_id' => 'payeeOwningInstitutionId',
        'lock_owning_institution_id' => 'lockOwningInstitutionId'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'expiry_date' => 'setExpiryDate',
        'lock_id' => 'setLockId',
        'account_id' => 'setAccountId',
        'amount' => 'setAmount',
        'unit' => 'setUnit',
        'account_owning_institution_id' => 'setAccountOwningInstitutionId',
        'lock_description' => 'setLockDescription',
        'payee_id' => 'setPayeeId',
        'secret' => 'setSecret',
        'hash' => 'setHash',
        'payee_owning_institution_id' => 'setPayeeOwningInstitutionId',
        'lock_owning_institution_id' => 'setLockOwningInstitutionId'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'expiry_date' => 'getExpiryDate',
        'lock_id' => 'getLockId',
        'account_id' => 'getAccountId',
        'amount' => 'getAmount',
        'unit' => 'getUnit',
        'account_owning_institution_id' => 'getAccountOwningInstitutionId',
        'lock_description' => 'getLockDescription',
        'payee_id' => 'getPayeeId',
        'secret' => 'getSecret',
        'hash' => 'getHash',
        'payee_owning_institution_id' => 'getPayeeOwningInstitutionId',
        'lock_owning_institution_id' => 'getLockOwningInstitutionId'
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
        $this->container['expiry_date'] = $data['expiry_date'] ?? null;
        $this->container['lock_id'] = $data['lock_id'] ?? null;
        $this->container['account_id'] = $data['account_id'] ?? null;
        $this->container['amount'] = $data['amount'] ?? null;
        $this->container['unit'] = $data['unit'] ?? null;
        $this->container['account_owning_institution_id'] = $data['account_owning_institution_id'] ?? null;
        $this->container['lock_description'] = $data['lock_description'] ?? null;
        $this->container['payee_id'] = $data['payee_id'] ?? null;
        $this->container['secret'] = $data['secret'] ?? null;
        $this->container['hash'] = $data['hash'] ?? null;
        $this->container['payee_owning_institution_id'] = $data['payee_owning_institution_id'] ?? null;
        $this->container['lock_owning_institution_id'] = $data['lock_owning_institution_id'] ?? null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if (!is_null($this->container['expiry_date']) && (mb_strlen($this->container['expiry_date']) > 50)) {
            $invalidProperties[] = "invalid value for 'expiry_date', the character length must be smaller than or equal to 50.";
        }

        if (!is_null($this->container['expiry_date']) && (mb_strlen($this->container['expiry_date']) < 0)) {
            $invalidProperties[] = "invalid value for 'expiry_date', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['expiry_date']) && !preg_match("/^[a-zA-Z_0-9.,:\\- ]{1,50}/", $this->container['expiry_date'])) {
            $invalidProperties[] = "invalid value for 'expiry_date', must be conform to the pattern /^[a-zA-Z_0-9.,:\\- ]{1,50}/.";
        }

        if (!is_null($this->container['account_id']) && (mb_strlen($this->container['account_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'account_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['account_id']) && (mb_strlen($this->container['account_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'account_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['amount']) && (mb_strlen($this->container['amount']) > 100)) {
            $invalidProperties[] = "invalid value for 'amount', the character length must be smaller than or equal to 100.";
        }

        if (!is_null($this->container['amount']) && (mb_strlen($this->container['amount']) < 0)) {
            $invalidProperties[] = "invalid value for 'amount', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['amount']) && !preg_match("/^[A-Za-z0-9. ]{1,100}/", $this->container['amount'])) {
            $invalidProperties[] = "invalid value for 'amount', must be conform to the pattern /^[A-Za-z0-9. ]{1,100}/.";
        }

        if (!is_null($this->container['unit']) && (mb_strlen($this->container['unit']) > 11)) {
            $invalidProperties[] = "invalid value for 'unit', the character length must be smaller than or equal to 11.";
        }

        if (!is_null($this->container['unit']) && (mb_strlen($this->container['unit']) < 0)) {
            $invalidProperties[] = "invalid value for 'unit', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['account_owning_institution_id']) && (mb_strlen($this->container['account_owning_institution_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'account_owning_institution_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['account_owning_institution_id']) && (mb_strlen($this->container['account_owning_institution_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'account_owning_institution_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['lock_description']) && (mb_strlen($this->container['lock_description']) > 400)) {
            $invalidProperties[] = "invalid value for 'lock_description', the character length must be smaller than or equal to 400.";
        }

        if (!is_null($this->container['lock_description']) && (mb_strlen($this->container['lock_description']) < 0)) {
            $invalidProperties[] = "invalid value for 'lock_description', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['lock_description']) && !preg_match("/^[a-zA-Z_0-9.,\\-() ]{1,400}/", $this->container['lock_description'])) {
            $invalidProperties[] = "invalid value for 'lock_description', must be conform to the pattern /^[a-zA-Z_0-9.,\\-() ]{1,400}/.";
        }

        if (!is_null($this->container['payee_id']) && (mb_strlen($this->container['payee_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'payee_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['payee_id']) && (mb_strlen($this->container['payee_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'payee_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['secret']) && (mb_strlen($this->container['secret']) > 500)) {
            $invalidProperties[] = "invalid value for 'secret', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['secret']) && (mb_strlen($this->container['secret']) < 0)) {
            $invalidProperties[] = "invalid value for 'secret', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['hash']) && (mb_strlen($this->container['hash']) > 500)) {
            $invalidProperties[] = "invalid value for 'hash', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['hash']) && (mb_strlen($this->container['hash']) < 0)) {
            $invalidProperties[] = "invalid value for 'hash', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['hash']) && !preg_match("/^[a-zA-Z0-9]{1,500}/", $this->container['hash'])) {
            $invalidProperties[] = "invalid value for 'hash', must be conform to the pattern /^[a-zA-Z0-9]{1,500}/.";
        }

        if (!is_null($this->container['payee_owning_institution_id']) && (mb_strlen($this->container['payee_owning_institution_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'payee_owning_institution_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['payee_owning_institution_id']) && (mb_strlen($this->container['payee_owning_institution_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'payee_owning_institution_id', the character length must be bigger than or equal to 0.";
        }

        if (!is_null($this->container['lock_owning_institution_id']) && (mb_strlen($this->container['lock_owning_institution_id']) > 500)) {
            $invalidProperties[] = "invalid value for 'lock_owning_institution_id', the character length must be smaller than or equal to 500.";
        }

        if (!is_null($this->container['lock_owning_institution_id']) && (mb_strlen($this->container['lock_owning_institution_id']) < 0)) {
            $invalidProperties[] = "invalid value for 'lock_owning_institution_id', the character length must be bigger than or equal to 0.";
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
     * Gets expiry_date
     *
     * @return string|null
     */
    public function getExpiryDate()
    {
        return $this->container['expiry_date'];
    }

    /**
     * Sets expiry_date
     *
     * @param string|null $expiry_date expiry_date
     *
     * @return self
     */
    public function setExpiryDate($expiry_date)
    {
        if (!is_null($expiry_date) && (mb_strlen($expiry_date) > 50)) {
            throw new \InvalidArgumentException('invalid length for $expiry_date when calling LockDetails., must be smaller than or equal to 50.');
        }
        if (!is_null($expiry_date) && (mb_strlen($expiry_date) < 0)) {
            throw new \InvalidArgumentException('invalid length for $expiry_date when calling LockDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($expiry_date) && (!preg_match("/^[a-zA-Z_0-9.,:\\- ]{1,50}/", $expiry_date))) {
            throw new \InvalidArgumentException("invalid value for $expiry_date when calling LockDetails., must conform to the pattern /^[a-zA-Z_0-9.,:\\- ]{1,50}/.");
        }

        $this->container['expiry_date'] = $expiry_date;

        return $this;
    }

    /**
     * Gets lock_id
     *
     * @return string|null
     */
    public function getLockId()
    {
        return $this->container['lock_id'];
    }

    /**
     * Sets lock_id
     *
     * @param string|null $lock_id lock_id
     *
     * @return self
     */
    public function setLockId($lock_id)
    {
        $this->container['lock_id'] = $lock_id;

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
            throw new \InvalidArgumentException('invalid length for $account_id when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($account_id) && (mb_strlen($account_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $account_id when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['account_id'] = $account_id;

        return $this;
    }

    /**
     * Gets amount
     *
     * @return string|null
     */
    public function getAmount()
    {
        return $this->container['amount'];
    }

    /**
     * Sets amount
     *
     * @param string|null $amount amount
     *
     * @return self
     */
    public function setAmount($amount)
    {
        if (!is_null($amount) && (mb_strlen($amount) > 100)) {
            throw new \InvalidArgumentException('invalid length for $amount when calling LockDetails., must be smaller than or equal to 100.');
        }
        if (!is_null($amount) && (mb_strlen($amount) < 0)) {
            throw new \InvalidArgumentException('invalid length for $amount when calling LockDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($amount) && (!preg_match("/^[A-Za-z0-9. ]{1,100}/", $amount))) {
            throw new \InvalidArgumentException("invalid value for $amount when calling LockDetails., must conform to the pattern /^[A-Za-z0-9. ]{1,100}/.");
        }

        $this->container['amount'] = $amount;

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
            throw new \InvalidArgumentException('invalid length for $unit when calling LockDetails., must be smaller than or equal to 11.');
        }
        if (!is_null($unit) && (mb_strlen($unit) < 0)) {
            throw new \InvalidArgumentException('invalid length for $unit when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['unit'] = $unit;

        return $this;
    }

    /**
     * Gets account_owning_institution_id
     *
     * @return string|null
     */
    public function getAccountOwningInstitutionId()
    {
        return $this->container['account_owning_institution_id'];
    }

    /**
     * Sets account_owning_institution_id
     *
     * @param string|null $account_owning_institution_id account_owning_institution_id
     *
     * @return self
     */
    public function setAccountOwningInstitutionId($account_owning_institution_id)
    {
        if (!is_null($account_owning_institution_id) && (mb_strlen($account_owning_institution_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $account_owning_institution_id when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($account_owning_institution_id) && (mb_strlen($account_owning_institution_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $account_owning_institution_id when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['account_owning_institution_id'] = $account_owning_institution_id;

        return $this;
    }

    /**
     * Gets lock_description
     *
     * @return string|null
     */
    public function getLockDescription()
    {
        return $this->container['lock_description'];
    }

    /**
     * Sets lock_description
     *
     * @param string|null $lock_description lock_description
     *
     * @return self
     */
    public function setLockDescription($lock_description)
    {
        if (!is_null($lock_description) && (mb_strlen($lock_description) > 400)) {
            throw new \InvalidArgumentException('invalid length for $lock_description when calling LockDetails., must be smaller than or equal to 400.');
        }
        if (!is_null($lock_description) && (mb_strlen($lock_description) < 0)) {
            throw new \InvalidArgumentException('invalid length for $lock_description when calling LockDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($lock_description) && (!preg_match("/^[a-zA-Z_0-9.,\\-() ]{1,400}/", $lock_description))) {
            throw new \InvalidArgumentException("invalid value for $lock_description when calling LockDetails., must conform to the pattern /^[a-zA-Z_0-9.,\\-() ]{1,400}/.");
        }

        $this->container['lock_description'] = $lock_description;

        return $this;
    }

    /**
     * Gets payee_id
     *
     * @return string|null
     */
    public function getPayeeId()
    {
        return $this->container['payee_id'];
    }

    /**
     * Sets payee_id
     *
     * @param string|null $payee_id payee_id
     *
     * @return self
     */
    public function setPayeeId($payee_id)
    {
        if (!is_null($payee_id) && (mb_strlen($payee_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $payee_id when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($payee_id) && (mb_strlen($payee_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $payee_id when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['payee_id'] = $payee_id;

        return $this;
    }

    /**
     * Gets secret
     *
     * @return string|null
     */
    public function getSecret()
    {
        return $this->container['secret'];
    }

    /**
     * Sets secret
     *
     * @param string|null $secret secret
     *
     * @return self
     */
    public function setSecret($secret)
    {
        if (!is_null($secret) && (mb_strlen($secret) > 500)) {
            throw new \InvalidArgumentException('invalid length for $secret when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($secret) && (mb_strlen($secret) < 0)) {
            throw new \InvalidArgumentException('invalid length for $secret when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['secret'] = $secret;

        return $this;
    }

    /**
     * Gets hash
     *
     * @return string|null
     */
    public function getHash()
    {
        return $this->container['hash'];
    }

    /**
     * Sets hash
     *
     * @param string|null $hash hash
     *
     * @return self
     */
    public function setHash($hash)
    {
        if (!is_null($hash) && (mb_strlen($hash) > 500)) {
            throw new \InvalidArgumentException('invalid length for $hash when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($hash) && (mb_strlen($hash) < 0)) {
            throw new \InvalidArgumentException('invalid length for $hash when calling LockDetails., must be bigger than or equal to 0.');
        }
        if (!is_null($hash) && (!preg_match("/^[a-zA-Z0-9]{1,500}/", $hash))) {
            throw new \InvalidArgumentException("invalid value for $hash when calling LockDetails., must conform to the pattern /^[a-zA-Z0-9]{1,500}/.");
        }

        $this->container['hash'] = $hash;

        return $this;
    }

    /**
     * Gets payee_owning_institution_id
     *
     * @return string|null
     */
    public function getPayeeOwningInstitutionId()
    {
        return $this->container['payee_owning_institution_id'];
    }

    /**
     * Sets payee_owning_institution_id
     *
     * @param string|null $payee_owning_institution_id payee_owning_institution_id
     *
     * @return self
     */
    public function setPayeeOwningInstitutionId($payee_owning_institution_id)
    {
        if (!is_null($payee_owning_institution_id) && (mb_strlen($payee_owning_institution_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $payee_owning_institution_id when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($payee_owning_institution_id) && (mb_strlen($payee_owning_institution_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $payee_owning_institution_id when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['payee_owning_institution_id'] = $payee_owning_institution_id;

        return $this;
    }

    /**
     * Gets lock_owning_institution_id
     *
     * @return string|null
     */
    public function getLockOwningInstitutionId()
    {
        return $this->container['lock_owning_institution_id'];
    }

    /**
     * Sets lock_owning_institution_id
     *
     * @param string|null $lock_owning_institution_id lock_owning_institution_id
     *
     * @return self
     */
    public function setLockOwningInstitutionId($lock_owning_institution_id)
    {
        if (!is_null($lock_owning_institution_id) && (mb_strlen($lock_owning_institution_id) > 500)) {
            throw new \InvalidArgumentException('invalid length for $lock_owning_institution_id when calling LockDetails., must be smaller than or equal to 500.');
        }
        if (!is_null($lock_owning_institution_id) && (mb_strlen($lock_owning_institution_id) < 0)) {
            throw new \InvalidArgumentException('invalid length for $lock_owning_institution_id when calling LockDetails., must be bigger than or equal to 0.');
        }

        $this->container['lock_owning_institution_id'] = $lock_owning_institution_id;

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


