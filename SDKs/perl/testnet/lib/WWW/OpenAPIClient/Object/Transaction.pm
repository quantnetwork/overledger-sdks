=begin comment

Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::Transaction;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::Destination;
use WWW::OpenAPIClient::Object::Fee;
use WWW::OpenAPIClient::Object::Origin;
use WWW::OpenAPIClient::Object::Payment;

use base ("Class::Accessor", "Class::Data::Inheritable");

#
#Smallest unit of a work process related to interactions with distributed ledgers
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {});
__PACKAGE__->mk_classdata('class_documentation' => {});

# new plain object
sub new {
    my ($class, %args) = @_;

    my $self = bless {}, $class;

    $self->init(%args);

    return $self;
}

# initialize the object
sub init
{
    my ($self, %args) = @_;

    foreach my $attribute (keys %{$self->attribute_map}) {
        my $args_key = $self->attribute_map->{$attribute};
        $self->$attribute( $args{ $args_key } );
    }
}

# return perl hash
sub to_hash {
    my $self = shift;
    my $_hash = decode_json(JSON->new->convert_blessed->encode($self));

    return $_hash;
}

# used by JSON for serialization
sub TO_JSON {
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }

    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
        my $_json_attribute = $self->attribute_map->{$_key};
        if ($_type =~ /^array\[(.+)\]$/i) { # array
            my $_subclass = $1;
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif ($_type =~ /^hash\[string,(.+)\]$/i) { # hash
            my $_subclass = $1;
            my %_hash = ();
            while (my($_key, $_element) = each %{$hash->{$_json_attribute}}) {
                $_hash{$_key} = $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \%_hash;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
            $log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }

    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);

    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}


__PACKAGE__->class_documentation({description => 'Smallest unit of a work process related to interactions with distributed ledgers',
                                  class => 'Transaction',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'signature' => {
        datatype => 'ARRAY[string]',
        base_name => 'signature',
        description => 'The signatures of this transaction',
        format => '',
        read_only => '',
            },
    'origin' => {
        datatype => 'ARRAY[Origin]',
        base_name => 'origin',
        description => '',
        format => '',
        read_only => '',
            },
    'fee' => {
        datatype => 'Fee',
        base_name => 'fee',
        description => '',
        format => '',
        read_only => '',
            },
    'destination' => {
        datatype => 'ARRAY[Destination]',
        base_name => 'destination',
        description => '',
        format => '',
        read_only => '',
            },
    'signed' => {
        datatype => 'string',
        base_name => 'signed',
        description => '',
        format => '',
        read_only => '',
            },
    'total_payment_amount' => {
        datatype => 'ARRAY[Payment]',
        base_name => 'totalPaymentAmount',
        description => '',
        format => '',
        read_only => '',
            },
    'message' => {
        datatype => 'string',
        base_name => 'message',
        description => 'Any text-based element of the data payload',
        format => '',
        read_only => '',
            },
    'transaction_id' => {
        datatype => 'string',
        base_name => 'transactionId',
        description => 'The unique identifier of the transaction on this DLN',
        format => '',
        read_only => '',
            },
    'encoded' => {
        datatype => 'ARRAY[string]',
        base_name => 'encoded',
        description => '',
        format => '',
        read_only => '',
            },
    'extra_fields' => {
        datatype => 'object',
        base_name => 'extraFields',
        description => '',
        format => '',
        read_only => '',
            },
    'native_data' => {
        datatype => 'object',
        base_name => 'nativeData',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'signature' => 'ARRAY[string]',
    'origin' => 'ARRAY[Origin]',
    'fee' => 'Fee',
    'destination' => 'ARRAY[Destination]',
    'signed' => 'string',
    'total_payment_amount' => 'ARRAY[Payment]',
    'message' => 'string',
    'transaction_id' => 'string',
    'encoded' => 'ARRAY[string]',
    'extra_fields' => 'object',
    'native_data' => 'object'
} );

__PACKAGE__->attribute_map( {
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
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
