=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'date'
require 'time'

module OpenapiClient
  class TransferRequestDetailsSchema
    attr_accessor :overledger_signing_type

    attr_accessor :origin

    attr_accessor :destination

    attr_accessor :message

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'overledger_signing_type' => :'overledgerSigningType',
        :'origin' => :'origin',
        :'destination' => :'destination',
        :'message' => :'message'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'overledger_signing_type' => :'String',
        :'origin' => :'Array<OriginTransferSchema>',
        :'destination' => :'Array<DestinationTransferSchema>',
        :'message' => :'String'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::TransferRequestDetailsSchema` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::TransferRequestDetailsSchema`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'overledger_signing_type')
        self.overledger_signing_type = attributes[:'overledger_signing_type']
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

      if attributes.key?(:'message')
        self.message = attributes[:'message']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
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

      if !@origin.nil? && @origin.length > 1
        invalid_properties.push('invalid value for "origin", number of items must be less than or equal to 1.')
      end

      if !@origin.nil? && @origin.length < 0
        invalid_properties.push('invalid value for "origin", number of items must be greater than or equal to 0.')
      end

      if !@destination.nil? && @destination.length > 1
        invalid_properties.push('invalid value for "destination", number of items must be less than or equal to 1.')
      end

      if !@destination.nil? && @destination.length < 0
        invalid_properties.push('invalid value for "destination", number of items must be greater than or equal to 0.')
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
      return false if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length > 30
      return false if !@overledger_signing_type.nil? && @overledger_signing_type.to_s.length < 0
      return false if !@overledger_signing_type.nil? && @overledger_signing_type !~ Regexp.new(/^[A-Za-z- ]{1,30}/)
      return false if !@origin.nil? && @origin.length > 1
      return false if !@origin.nil? && @origin.length < 0
      return false if !@destination.nil? && @destination.length > 1
      return false if !@destination.nil? && @destination.length < 0
      return false if !@message.nil? && @message.to_s.length > 150
      return false if !@message.nil? && @message.to_s.length < 0
      return false if !@message.nil? && @message !~ Regexp.new(/^[\S\s]{1,150}$/)
      true
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

    # Custom attribute writer method with validation
    # @param [Object] origin Value to be assigned
    def origin=(origin)
      if !origin.nil? && origin.length > 1
        fail ArgumentError, 'invalid value for "origin", number of items must be less than or equal to 1.'
      end

      if !origin.nil? && origin.length < 0
        fail ArgumentError, 'invalid value for "origin", number of items must be greater than or equal to 0.'
      end

      @origin = origin
    end

    # Custom attribute writer method with validation
    # @param [Object] destination Value to be assigned
    def destination=(destination)
      if !destination.nil? && destination.length > 1
        fail ArgumentError, 'invalid value for "destination", number of items must be less than or equal to 1.'
      end

      if !destination.nil? && destination.length < 0
        fail ArgumentError, 'invalid value for "destination", number of items must be greater than or equal to 0.'
      end

      @destination = destination
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
          overledger_signing_type == o.overledger_signing_type &&
          origin == o.origin &&
          destination == o.destination &&
          message == o.message
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [overledger_signing_type, origin, destination, message].hash
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
