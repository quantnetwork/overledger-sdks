=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'date'
require 'time'

module OpenapiClient
  class PrepareRequestDetails
    attr_accessor :mandate

    attr_accessor :alias_details

    attr_accessor :pagination

    attr_accessor :origin

    attr_accessor :destination

    # Name of the token
    attr_accessor :token_name

    attr_accessor :block_search_type

    attr_accessor :payer

    attr_accessor :collector

    attr_accessor :payee

    attr_accessor :additional_owner

    attr_accessor :owner

    attr_accessor :creator

    attr_accessor :receiver

    # Unique identifier for the specific token
    attr_accessor :token_id

    attr_accessor :message

    attr_accessor :lock_details

    attr_accessor :block_id

    # The unique identifiers of the account
    attr_accessor :account_id

    # The unit of this token
    attr_accessor :token_unit

    attr_accessor :beneficiary

    attr_accessor :sender

    attr_accessor :account_details

    attr_accessor :overledger_signing_type

    attr_accessor :total_payment_amount

    attr_accessor :signer_account

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'mandate' => :'mandate',
        :'alias_details' => :'aliasDetails',
        :'pagination' => :'pagination',
        :'origin' => :'origin',
        :'destination' => :'destination',
        :'token_name' => :'tokenName',
        :'block_search_type' => :'blockSearchType',
        :'payer' => :'payer',
        :'collector' => :'collector',
        :'payee' => :'payee',
        :'additional_owner' => :'additionalOwner',
        :'owner' => :'owner',
        :'creator' => :'creator',
        :'receiver' => :'receiver',
        :'token_id' => :'tokenId',
        :'message' => :'message',
        :'lock_details' => :'lockDetails',
        :'block_id' => :'blockId',
        :'account_id' => :'accountId',
        :'token_unit' => :'tokenUnit',
        :'beneficiary' => :'beneficiary',
        :'sender' => :'sender',
        :'account_details' => :'accountDetails',
        :'overledger_signing_type' => :'overledgerSigningType',
        :'total_payment_amount' => :'totalPaymentAmount',
        :'signer_account' => :'signerAccount'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'mandate' => :'Array<Mandate>',
        :'alias_details' => :'AliasDetails',
        :'pagination' => :'Pagination',
        :'origin' => :'Array<Origin>',
        :'destination' => :'Array<Destination>',
        :'token_name' => :'String',
        :'block_search_type' => :'String',
        :'payer' => :'Array<Payer>',
        :'collector' => :'Collector',
        :'payee' => :'Array<Payee>',
        :'additional_owner' => :'AdditionalOwner',
        :'owner' => :'Owner',
        :'creator' => :'Creator',
        :'receiver' => :'Array<Receiver>',
        :'token_id' => :'String',
        :'message' => :'String',
        :'lock_details' => :'LockDetails',
        :'block_id' => :'String',
        :'account_id' => :'String',
        :'token_unit' => :'String',
        :'beneficiary' => :'Beneficiary',
        :'sender' => :'Array<Sender>',
        :'account_details' => :'AccountDetails',
        :'overledger_signing_type' => :'String',
        :'total_payment_amount' => :'Payment',
        :'signer_account' => :'SignerAccount'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::PrepareRequestDetails` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::PrepareRequestDetails`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'mandate')
        if (value = attributes[:'mandate']).is_a?(Array)
          self.mandate = value
        end
      end

      if attributes.key?(:'alias_details')
        self.alias_details = attributes[:'alias_details']
      end

      if attributes.key?(:'pagination')
        self.pagination = attributes[:'pagination']
      end

      if attributes.key?(:'origin')
        if (value = attributes[:'origin']).is_a?(Array)
          self.origin = value
        end
      end

      if attributes.key?(:'destination')
        if (value = attributes[:'destination']).is_a?(Array)
          self.destination = value
        end
      end

      if attributes.key?(:'token_name')
        self.token_name = attributes[:'token_name']
      end

      if attributes.key?(:'block_search_type')
        self.block_search_type = attributes[:'block_search_type']
      end

      if attributes.key?(:'payer')
        if (value = attributes[:'payer']).is_a?(Array)
          self.payer = value
        end
      end

      if attributes.key?(:'collector')
        self.collector = attributes[:'collector']
      end

      if attributes.key?(:'payee')
        if (value = attributes[:'payee']).is_a?(Array)
          self.payee = value
        end
      end

      if attributes.key?(:'additional_owner')
        self.additional_owner = attributes[:'additional_owner']
      end

      if attributes.key?(:'owner')
        self.owner = attributes[:'owner']
      end

      if attributes.key?(:'creator')
        self.creator = attributes[:'creator']
      end

      if attributes.key?(:'receiver')
        if (value = attributes[:'receiver']).is_a?(Array)
          self.receiver = value
        end
      end

      if attributes.key?(:'token_id')
        self.token_id = attributes[:'token_id']
      end

      if attributes.key?(:'message')
        self.message = attributes[:'message']
      end

      if attributes.key?(:'lock_details')
        self.lock_details = attributes[:'lock_details']
      end

      if attributes.key?(:'block_id')
        self.block_id = attributes[:'block_id']
      end

      if attributes.key?(:'account_id')
        self.account_id = attributes[:'account_id']
      end

      if attributes.key?(:'token_unit')
        self.token_unit = attributes[:'token_unit']
      end

      if attributes.key?(:'beneficiary')
        self.beneficiary = attributes[:'beneficiary']
      end

      if attributes.key?(:'sender')
        if (value = attributes[:'sender']).is_a?(Array)
          self.sender = value
        end
      end

      if attributes.key?(:'account_details')
        self.account_details = attributes[:'account_details']
      end

      if attributes.key?(:'overledger_signing_type')
        self.overledger_signing_type = attributes[:'overledger_signing_type']
      end

      if attributes.key?(:'total_payment_amount')
        self.total_payment_amount = attributes[:'total_payment_amount']
      end

      if attributes.key?(:'signer_account')
        self.signer_account = attributes[:'signer_account']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if !@mandate.nil? && @mandate.length > 100
        invalid_properties.push('invalid value for "mandate", number of items must be less than or equal to 100.')
      end

      if !@mandate.nil? && @mandate.length < 0
        invalid_properties.push('invalid value for "mandate", number of items must be greater than or equal to 0.')
      end

      if !@origin.nil? && @origin.length > 100
        invalid_properties.push('invalid value for "origin", number of items must be less than or equal to 100.')
      end

      if !@origin.nil? && @origin.length < 0
        invalid_properties.push('invalid value for "origin", number of items must be greater than or equal to 0.')
      end

      if !@destination.nil? && @destination.length > 100
        invalid_properties.push('invalid value for "destination", number of items must be less than or equal to 100.')
      end

      if !@destination.nil? && @destination.length < 0
        invalid_properties.push('invalid value for "destination", number of items must be greater than or equal to 0.')
      end

      if !@token_name.nil? && @token_name.to_s.length > 100
        invalid_properties.push('invalid value for "token_name", the character length must be smaller than or equal to 100.')
      end

      if !@token_name.nil? && @token_name.to_s.length < 0
        invalid_properties.push('invalid value for "token_name", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[A-Za-z0-9 ]{1,100}/)
      if !@token_name.nil? && @token_name !~ pattern
        invalid_properties.push("invalid value for \"token_name\", must conform to the pattern #{pattern}.")
      end

      if !@block_search_type.nil? && @block_search_type.to_s.length > 30
        invalid_properties.push('invalid value for "block_search_type", the character length must be smaller than or equal to 30.')
      end

      if !@block_search_type.nil? && @block_search_type.to_s.length < 0
        invalid_properties.push('invalid value for "block_search_type", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[A-Z0-9_]{1,30}$/)
      if !@block_search_type.nil? && @block_search_type !~ pattern
        invalid_properties.push("invalid value for \"block_search_type\", must conform to the pattern #{pattern}.")
      end

      if !@payer.nil? && @payer.length > 100
        invalid_properties.push('invalid value for "payer", number of items must be less than or equal to 100.')
      end

      if !@payer.nil? && @payer.length < 0
        invalid_properties.push('invalid value for "payer", number of items must be greater than or equal to 0.')
      end

      if !@payee.nil? && @payee.length > 100
        invalid_properties.push('invalid value for "payee", number of items must be less than or equal to 100.')
      end

      if !@payee.nil? && @payee.length < 0
        invalid_properties.push('invalid value for "payee", number of items must be greater than or equal to 0.')
      end

      if !@token_id.nil? && @token_id.to_s.length > 100
        invalid_properties.push('invalid value for "token_id", the character length must be smaller than or equal to 100.')
      end

      if !@token_id.nil? && @token_id.to_s.length < 0
        invalid_properties.push('invalid value for "token_id", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[A-Za-z0-9. ]{1,100}/)
      if !@token_id.nil? && @token_id !~ pattern
        invalid_properties.push("invalid value for \"token_id\", must conform to the pattern #{pattern}.")
      end

      if !@message.nil? && @message.to_s.length > 150
        invalid_properties.push('invalid value for "message", the character length must be smaller than or equal to 150.')
      end

      if !@message.nil? && @message.to_s.length < 0
        invalid_properties.push('invalid value for "message", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[\S\s]{1,150}$/)
      if !@message.nil? && @message !~ pattern
        invalid_properties.push("invalid value for \"message\", must conform to the pattern #{pattern}.")
      end

      if !@block_id.nil? && @block_id.to_s.length > 150
        invalid_properties.push('invalid value for "block_id", the character length must be smaller than or equal to 150.')
      end

      if !@block_id.nil? && @block_id.to_s.length < 0
        invalid_properties.push('invalid value for "block_id", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[a-zA-Z0-9]{1,150}$/)
      if !@block_id.nil? && @block_id !~ pattern
        invalid_properties.push("invalid value for \"block_id\", must conform to the pattern #{pattern}.")
      end

      if !@account_id.nil? && @account_id.to_s.length > 500
        invalid_properties.push('invalid value for "account_id", the character length must be smaller than or equal to 500.')
      end

      if !@account_id.nil? && @account_id.to_s.length < 0
        invalid_properties.push('invalid value for "account_id", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[a-zA-Z0-9:,\\/.=\-\s]{1,500}/)
      if !@account_id.nil? && @account_id !~ pattern
        invalid_properties.push("invalid value for \"account_id\", must conform to the pattern #{pattern}.")
      end

      if !@token_unit.nil? && @token_unit.to_s.length > 11
        invalid_properties.push('invalid value for "token_unit", the character length must be smaller than or equal to 11.')
      end

      if !@token_unit.nil? && @token_unit.to_s.length < 0
        invalid_properties.push('invalid value for "token_unit", the character length must be great than or equal to 0.')
      end

      if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length > 30
        invalid_properties.push('invalid value for "overledger_signing_type", the character length must be smaller than or equal to 30.')
      end

      if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length < 0
        invalid_properties.push('invalid value for "overledger_signing_type", the character length must be great than or equal to 0.')
      end

      pattern = Regexp.new(/^[A-Za-z- ]{1,30}/)
      if !@overledger_signing_type.nil? && @overledger_signing_type !~ pattern
        invalid_properties.push("invalid value for \"overledger_signing_type\", must conform to the pattern #{pattern}.")
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if !@mandate.nil? && @mandate.length > 100
      return false if !@mandate.nil? && @mandate.length < 0
      return false if !@origin.nil? && @origin.length > 100
      return false if !@origin.nil? && @origin.length < 0
      return false if !@destination.nil? && @destination.length > 100
      return false if !@destination.nil? && @destination.length < 0
      return false if !@token_name.nil? && @token_name.to_s.length > 100
      return false if !@token_name.nil? && @token_name.to_s.length < 0
      return false if !@token_name.nil? && @token_name !~ Regexp.new(/^[A-Za-z0-9 ]{1,100}/)
      return false if !@block_search_type.nil? && @block_search_type.to_s.length > 30
      return false if !@block_search_type.nil? && @block_search_type.to_s.length < 0
      return false if !@block_search_type.nil? && @block_search_type !~ Regexp.new(/^[A-Z0-9_]{1,30}$/)
      return false if !@payer.nil? && @payer.length > 100
      return false if !@payer.nil? && @payer.length < 0
      return false if !@payee.nil? && @payee.length > 100
      return false if !@payee.nil? && @payee.length < 0
      return false if !@token_id.nil? && @token_id.to_s.length > 100
      return false if !@token_id.nil? && @token_id.to_s.length < 0
      return false if !@token_id.nil? && @token_id !~ Regexp.new(/^[A-Za-z0-9. ]{1,100}/)
      return false if !@message.nil? && @message.to_s.length > 150
      return false if !@message.nil? && @message.to_s.length < 0
      return false if !@message.nil? && @message !~ Regexp.new(/^[\S\s]{1,150}$/)
      return false if !@block_id.nil? && @block_id.to_s.length > 150
      return false if !@block_id.nil? && @block_id.to_s.length < 0
      return false if !@block_id.nil? && @block_id !~ Regexp.new(/^[a-zA-Z0-9]{1,150}$/)
      return false if !@account_id.nil? && @account_id.to_s.length > 500
      return false if !@account_id.nil? && @account_id.to_s.length < 0
      return false if !@account_id.nil? && @account_id !~ Regexp.new(/^[a-zA-Z0-9:,\\/.=\-\s]{1,500}/)
      return false if !@token_unit.nil? && @token_unit.to_s.length > 11
      return false if !@token_unit.nil? && @token_unit.to_s.length < 0
      return false if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length > 30
      return false if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length < 0
      return false if !@overledger_signing_type.nil? && @overledger_signing_type !~ Regexp.new(/^[A-Za-z- ]{1,30}/)
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] mandate Value to be assigned
    def mandate=(mandate)
      if !mandate.nil? && mandate.length > 100
        fail ArgumentError, 'invalid value for "mandate", number of items must be less than or equal to 100.'
      end

      if !mandate.nil? && mandate.length < 0
        fail ArgumentError, 'invalid value for "mandate", number of items must be greater than or equal to 0.'
      end

      @mandate = mandate
    end

    # Custom attribute writer method with validation
    # @param [Object] origin Value to be assigned
    def origin=(origin)
      if !origin.nil? && origin.length > 100
        fail ArgumentError, 'invalid value for "origin", number of items must be less than or equal to 100.'
      end

      if !origin.nil? && origin.length < 0
        fail ArgumentError, 'invalid value for "origin", number of items must be greater than or equal to 0.'
      end

      @origin = origin
    end

    # Custom attribute writer method with validation
    # @param [Object] destination Value to be assigned
    def destination=(destination)
      if !destination.nil? && destination.length > 100
        fail ArgumentError, 'invalid value for "destination", number of items must be less than or equal to 100.'
      end

      if !destination.nil? && destination.length < 0
        fail ArgumentError, 'invalid value for "destination", number of items must be greater than or equal to 0.'
      end

      @destination = destination
    end

    # Custom attribute writer method with validation
    # @param [Object] token_name Value to be assigned
    def token_name=(token_name)
      if !token_name.nil? && token_name.to_s.length > 100
        fail ArgumentError, 'invalid value for "token_name", the character length must be smaller than or equal to 100.'
      end

      if !token_name.nil? && token_name.to_s.length < 0
        fail ArgumentError, 'invalid value for "token_name", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[A-Za-z0-9 ]{1,100}/)
      if !token_name.nil? && token_name !~ pattern
        fail ArgumentError, "invalid value for \"token_name\", must conform to the pattern #{pattern}."
      end

      @token_name = token_name
    end

    # Custom attribute writer method with validation
    # @param [Object] block_search_type Value to be assigned
    def block_search_type=(block_search_type)
      if !block_search_type.nil? && block_search_type.to_s.length > 30
        fail ArgumentError, 'invalid value for "block_search_type", the character length must be smaller than or equal to 30.'
      end

      if !block_search_type.nil? && block_search_type.to_s.length < 0
        fail ArgumentError, 'invalid value for "block_search_type", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[A-Z0-9_]{1,30}$/)
      if !block_search_type.nil? && block_search_type !~ pattern
        fail ArgumentError, "invalid value for \"block_search_type\", must conform to the pattern #{pattern}."
      end

      @block_search_type = block_search_type
    end

    # Custom attribute writer method with validation
    # @param [Object] payer Value to be assigned
    def payer=(payer)
      if !payer.nil? && payer.length > 100
        fail ArgumentError, 'invalid value for "payer", number of items must be less than or equal to 100.'
      end

      if !payer.nil? && payer.length < 0
        fail ArgumentError, 'invalid value for "payer", number of items must be greater than or equal to 0.'
      end

      @payer = payer
    end

    # Custom attribute writer method with validation
    # @param [Object] payee Value to be assigned
    def payee=(payee)
      if !payee.nil? && payee.length > 100
        fail ArgumentError, 'invalid value for "payee", number of items must be less than or equal to 100.'
      end

      if !payee.nil? && payee.length < 0
        fail ArgumentError, 'invalid value for "payee", number of items must be greater than or equal to 0.'
      end

      @payee = payee
    end

    # Custom attribute writer method with validation
    # @param [Object] token_id Value to be assigned
    def token_id=(token_id)
      if !token_id.nil? && token_id.to_s.length > 100
        fail ArgumentError, 'invalid value for "token_id", the character length must be smaller than or equal to 100.'
      end

      if !token_id.nil? && token_id.to_s.length < 0
        fail ArgumentError, 'invalid value for "token_id", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[A-Za-z0-9. ]{1,100}/)
      if !token_id.nil? && token_id !~ pattern
        fail ArgumentError, "invalid value for \"token_id\", must conform to the pattern #{pattern}."
      end

      @token_id = token_id
    end

    # Custom attribute writer method with validation
    # @param [Object] message Value to be assigned
    def message=(message)
      if !message.nil? && message.to_s.length > 150
        fail ArgumentError, 'invalid value for "message", the character length must be smaller than or equal to 150.'
      end

      if !message.nil? && message.to_s.length < 0
        fail ArgumentError, 'invalid value for "message", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[\S\s]{1,150}$/)
      if !message.nil? && message !~ pattern
        fail ArgumentError, "invalid value for \"message\", must conform to the pattern #{pattern}."
      end

      @message = message
    end

    # Custom attribute writer method with validation
    # @param [Object] block_id Value to be assigned
    def block_id=(block_id)
      if !block_id.nil? && block_id.to_s.length > 150
        fail ArgumentError, 'invalid value for "block_id", the character length must be smaller than or equal to 150.'
      end

      if !block_id.nil? && block_id.to_s.length < 0
        fail ArgumentError, 'invalid value for "block_id", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[a-zA-Z0-9]{1,150}$/)
      if !block_id.nil? && block_id !~ pattern
        fail ArgumentError, "invalid value for \"block_id\", must conform to the pattern #{pattern}."
      end

      @block_id = block_id
    end

    # Custom attribute writer method with validation
    # @param [Object] account_id Value to be assigned
    def account_id=(account_id)
      if !account_id.nil? && account_id.to_s.length > 500
        fail ArgumentError, 'invalid value for "account_id", the character length must be smaller than or equal to 500.'
      end

      if !account_id.nil? && account_id.to_s.length < 0
        fail ArgumentError, 'invalid value for "account_id", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[a-zA-Z0-9:,\\/.=\-\s]{1,500}/)
      if !account_id.nil? && account_id !~ pattern
        fail ArgumentError, "invalid value for \"account_id\", must conform to the pattern #{pattern}."
      end

      @account_id = account_id
    end

    # Custom attribute writer method with validation
    # @param [Object] token_unit Value to be assigned
    def token_unit=(token_unit)
      if !token_unit.nil? && token_unit.to_s.length > 11
        fail ArgumentError, 'invalid value for "token_unit", the character length must be smaller than or equal to 11.'
      end

      if !token_unit.nil? && token_unit.to_s.length < 0
        fail ArgumentError, 'invalid value for "token_unit", the character length must be great than or equal to 0.'
      end

      @token_unit = token_unit
    end

    # Custom attribute writer method with validation
    # @param [Object] overledger_signing_type Value to be assigned
    def overledger_signing_type=(overledger_signing_type)
      if !overledger_signing_type.nil? && overledger_signing_type.to_s.length > 30
        fail ArgumentError, 'invalid value for "overledger_signing_type", the character length must be smaller than or equal to 30.'
      end

      if !overledger_signing_type.nil? && overledger_signing_type.to_s.length < 0
        fail ArgumentError, 'invalid value for "overledger_signing_type", the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[A-Za-z- ]{1,30}/)
      if !overledger_signing_type.nil? && overledger_signing_type !~ pattern
        fail ArgumentError, "invalid value for \"overledger_signing_type\", must conform to the pattern #{pattern}."
      end

      @overledger_signing_type = overledger_signing_type
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          mandate == o.mandate &&
          alias_details == o.alias_details &&
          pagination == o.pagination &&
          origin == o.origin &&
          destination == o.destination &&
          token_name == o.token_name &&
          block_search_type == o.block_search_type &&
          payer == o.payer &&
          collector == o.collector &&
          payee == o.payee &&
          additional_owner == o.additional_owner &&
          owner == o.owner &&
          creator == o.creator &&
          receiver == o.receiver &&
          token_id == o.token_id &&
          message == o.message &&
          lock_details == o.lock_details &&
          block_id == o.block_id &&
          account_id == o.account_id &&
          token_unit == o.token_unit &&
          beneficiary == o.beneficiary &&
          sender == o.sender &&
          account_details == o.account_details &&
          overledger_signing_type == o.overledger_signing_type &&
          total_payment_amount == o.total_payment_amount &&
          signer_account == o.signer_account
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [mandate, alias_details, pagination, origin, destination, token_name, block_search_type, payer, collector, payee, additional_owner, owner, creator, receiver, token_id, message, lock_details, block_id, account_id, token_unit, beneficiary, sender, account_details, overledger_signing_type, total_payment_amount, signer_account].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if attributes[self.class.attribute_map[key]].nil? && self.class.openapi_nullable.include?(key)
          self.send("#{key}=", nil)
        elsif type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :Time
        Time.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        # models (e.g. Pet) or oneOf
        klass = OpenapiClient.const_get(type)
        klass.respond_to?(:openapi_one_of) ? klass.build(value) : klass.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end

        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end

  end

end
