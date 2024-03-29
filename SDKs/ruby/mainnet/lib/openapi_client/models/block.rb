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
  class Block
    attr_accessor :block_id

    attr_accessor :number

    attr_accessor :transaction_ids

    attr_accessor :size

    attr_accessor :hashes

    attr_accessor :linked_blocks

    attr_accessor :number_of_transactions

    attr_accessor :message

    attr_accessor :timestamp

    attr_accessor :native_data

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'block_id' => :'blockId',
        :'number' => :'number',
        :'transaction_ids' => :'transactionIds',
        :'size' => :'size',
        :'hashes' => :'hashes',
        :'linked_blocks' => :'linkedBlocks',
        :'number_of_transactions' => :'numberOfTransactions',
        :'message' => :'message',
        :'timestamp' => :'timestamp',
        :'native_data' => :'nativeData'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'block_id' => :'String',
        :'number' => :'Integer',
        :'transaction_ids' => :'Array<String>',
        :'size' => :'Array<BlockSize>',
        :'hashes' => :'Array<BlockHash>',
        :'linked_blocks' => :'LinkedBlocks',
        :'number_of_transactions' => :'Integer',
        :'message' => :'String',
        :'timestamp' => :'String',
        :'native_data' => :'Object'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::Block` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::Block`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'block_id')
        self.block_id = attributes[:'block_id']
      end

      if attributes.key?(:'number')
        self.number = attributes[:'number']
      end

      if attributes.key?(:'transaction_ids')
        if (value = attributes[:'transaction_ids']).is_a?(Array)
          self.transaction_ids = value
        end
      end

      if attributes.key?(:'size')
        if (value = attributes[:'size']).is_a?(Array)
          self.size = value
        end
      end

      if attributes.key?(:'hashes')
        if (value = attributes[:'hashes']).is_a?(Array)
          self.hashes = value
        end
      end

      if attributes.key?(:'linked_blocks')
        self.linked_blocks = attributes[:'linked_blocks']
      end

      if attributes.key?(:'number_of_transactions')
        self.number_of_transactions = attributes[:'number_of_transactions']
      end

      if attributes.key?(:'message')
        self.message = attributes[:'message']
      end

      if attributes.key?(:'timestamp')
        self.timestamp = attributes[:'timestamp']
      end

      if attributes.key?(:'native_data')
        self.native_data = attributes[:'native_data']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
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

      if !@transaction_ids.nil? && @transaction_ids.length > 10000
        invalid_properties.push('invalid value for "transaction_ids", number of items must be less than or equal to 10000.')
      end

      if !@transaction_ids.nil? && @transaction_ids.length < 0
        invalid_properties.push('invalid value for "transaction_ids", number of items must be greater than or equal to 0.')
      end

      if !@size.nil? && @size.length > 10
        invalid_properties.push('invalid value for "size", number of items must be less than or equal to 10.')
      end

      if !@size.nil? && @size.length < 0
        invalid_properties.push('invalid value for "size", number of items must be greater than or equal to 0.')
      end

      if !@hashes.nil? && @hashes.length > 10
        invalid_properties.push('invalid value for "hashes", number of items must be less than or equal to 10.')
      end

      if !@hashes.nil? && @hashes.length < 0
        invalid_properties.push('invalid value for "hashes", number of items must be greater than or equal to 0.')
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

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if !@block_id.nil? && @block_id.to_s.length > 150
      return false if !@block_id.nil? && @block_id.to_s.length < 0
      return false if !@block_id.nil? && @block_id !~ Regexp.new(/^[a-zA-Z0-9]{1,150}$/)
      return false if !@transaction_ids.nil? && @transaction_ids.length > 10000
      return false if !@transaction_ids.nil? && @transaction_ids.length < 0
      return false if !@size.nil? && @size.length > 10
      return false if !@size.nil? && @size.length < 0
      return false if !@hashes.nil? && @hashes.length > 10
      return false if !@hashes.nil? && @hashes.length < 0
      return false if !@message.nil? && @message.to_s.length > 150
      return false if !@message.nil? && @message.to_s.length < 0
      return false if !@message.nil? && @message !~ Regexp.new(/^[\S\s]{1,150}$/)
      true
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
    # @param [Object] transaction_ids Value to be assigned
    def transaction_ids=(transaction_ids)
      if !transaction_ids.nil? && transaction_ids.length > 10000
        fail ArgumentError, 'invalid value for "transaction_ids", number of items must be less than or equal to 10000.'
      end

      if !transaction_ids.nil? && transaction_ids.length < 0
        fail ArgumentError, 'invalid value for "transaction_ids", number of items must be greater than or equal to 0.'
      end

      @transaction_ids = transaction_ids
    end

    # Custom attribute writer method with validation
    # @param [Object] size Value to be assigned
    def size=(size)
      if !size.nil? && size.length > 10
        fail ArgumentError, 'invalid value for "size", number of items must be less than or equal to 10.'
      end

      if !size.nil? && size.length < 0
        fail ArgumentError, 'invalid value for "size", number of items must be greater than or equal to 0.'
      end

      @size = size
    end

    # Custom attribute writer method with validation
    # @param [Object] hashes Value to be assigned
    def hashes=(hashes)
      if !hashes.nil? && hashes.length > 10
        fail ArgumentError, 'invalid value for "hashes", number of items must be less than or equal to 10.'
      end

      if !hashes.nil? && hashes.length < 0
        fail ArgumentError, 'invalid value for "hashes", number of items must be greater than or equal to 0.'
      end

      @hashes = hashes
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

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          block_id == o.block_id &&
          number == o.number &&
          transaction_ids == o.transaction_ids &&
          size == o.size &&
          hashes == o.hashes &&
          linked_blocks == o.linked_blocks &&
          number_of_transactions == o.number_of_transactions &&
          message == o.message &&
          timestamp == o.timestamp &&
          native_data == o.native_data
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [block_id, number, transaction_ids, size, hashes, linked_blocks, number_of_transactions, message, timestamp, native_data].hash
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
