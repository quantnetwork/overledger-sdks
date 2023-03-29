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
package WWW::OpenAPIClient::Object::PrepareRequestDetails;

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

use WWW::OpenAPIClient::Object::AccountDetails;
use WWW::OpenAPIClient::Object::AdditionalOwner;
use WWW::OpenAPIClient::Object::AliasDetails;
use WWW::OpenAPIClient::Object::Beneficiary;
use WWW::OpenAPIClient::Object::Collector;
use WWW::OpenAPIClient::Object::Creator;
use WWW::OpenAPIClient::Object::Destination;
use WWW::OpenAPIClient::Object::LockDetails;
use WWW::OpenAPIClient::Object::Mandate;
use WWW::OpenAPIClient::Object::Origin;
use WWW::OpenAPIClient::Object::Owner;
use WWW::OpenAPIClient::Object::Pagination;
use WWW::OpenAPIClient::Object::Payee;
use WWW::OpenAPIClient::Object::Payer;
use WWW::OpenAPIClient::Object::Payment;
use WWW::OpenAPIClient::Object::Receiver;
use WWW::OpenAPIClient::Object::Sender;
use WWW::OpenAPIClient::Object::SignerAccount;

use base ("Class::Accessor", "Class::Data::Inheritable");

#
#
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


__PACKAGE__->class_documentation({description => '',
                                  class => 'PrepareRequestDetails',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'mandate' => {
        datatype => 'ARRAY[Mandate]',
        base_name => 'mandate',
        description => '',
        format => '',
        read_only => '',
            },
    'alias_details' => {
        datatype => 'AliasDetails',
        base_name => 'aliasDetails',
        description => '',
        format => '',
        read_only => '',
            },
    'pagination' => {
        datatype => 'Pagination',
        base_name => 'pagination',
        description => '',
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
    'destination' => {
        datatype => 'ARRAY[Destination]',
        base_name => 'destination',
        description => '',
        format => '',
        read_only => '',
            },
    'token_name' => {
        datatype => 'string',
        base_name => 'tokenName',
        description => 'Name of the token',
        format => '',
        read_only => '',
            },
    'block_search_type' => {
        datatype => 'string',
        base_name => 'blockSearchType',
        description => '',
        format => '',
        read_only => '',
            },
    'payer' => {
        datatype => 'ARRAY[Payer]',
        base_name => 'payer',
        description => '',
        format => '',
        read_only => '',
            },
    'collector' => {
        datatype => 'Collector',
        base_name => 'collector',
        description => '',
        format => '',
        read_only => '',
            },
    'payee' => {
        datatype => 'ARRAY[Payee]',
        base_name => 'payee',
        description => '',
        format => '',
        read_only => '',
            },
    'additional_owner' => {
        datatype => 'AdditionalOwner',
        base_name => 'additionalOwner',
        description => '',
        format => '',
        read_only => '',
            },
    'owner' => {
        datatype => 'Owner',
        base_name => 'owner',
        description => '',
        format => '',
        read_only => '',
            },
    'creator' => {
        datatype => 'Creator',
        base_name => 'creator',
        description => '',
        format => '',
        read_only => '',
            },
    'receiver' => {
        datatype => 'ARRAY[Receiver]',
        base_name => 'receiver',
        description => '',
        format => '',
        read_only => '',
            },
    'token_id' => {
        datatype => 'string',
        base_name => 'tokenId',
        description => 'Unique identifier for the specific token',
        format => '',
        read_only => '',
            },
    'message' => {
        datatype => 'string',
        base_name => 'message',
        description => '',
        format => '',
        read_only => '',
            },
    'lock_details' => {
        datatype => 'LockDetails',
        base_name => 'lockDetails',
        description => '',
        format => '',
        read_only => '',
            },
    'block_id' => {
        datatype => 'string',
        base_name => 'blockId',
        description => '',
        format => '',
        read_only => '',
            },
    'account_id' => {
        datatype => 'string',
        base_name => 'accountId',
        description => 'The unique identifiers of the account',
        format => '',
        read_only => '',
            },
    'token_unit' => {
        datatype => 'string',
        base_name => 'tokenUnit',
        description => 'The unit of this token',
        format => '',
        read_only => '',
            },
    'beneficiary' => {
        datatype => 'Beneficiary',
        base_name => 'beneficiary',
        description => '',
        format => '',
        read_only => '',
            },
    'sender' => {
        datatype => 'ARRAY[Sender]',
        base_name => 'sender',
        description => '',
        format => '',
        read_only => '',
            },
    'account_details' => {
        datatype => 'AccountDetails',
        base_name => 'accountDetails',
        description => '',
        format => '',
        read_only => '',
            },
    'overledger_signing_type' => {
        datatype => 'string',
        base_name => 'overledgerSigningType',
        description => '',
        format => '',
        read_only => '',
            },
    'total_payment_amount' => {
        datatype => 'Payment',
        base_name => 'totalPaymentAmount',
        description => '',
        format => '',
        read_only => '',
            },
    'signer_account' => {
        datatype => 'SignerAccount',
        base_name => 'signerAccount',
        description => '',
        format => '',
        read_only => '',
            },
});

__PACKAGE__->openapi_types( {
    'mandate' => 'ARRAY[Mandate]',
    'alias_details' => 'AliasDetails',
    'pagination' => 'Pagination',
    'origin' => 'ARRAY[Origin]',
    'destination' => 'ARRAY[Destination]',
    'token_name' => 'string',
    'block_search_type' => 'string',
    'payer' => 'ARRAY[Payer]',
    'collector' => 'Collector',
    'payee' => 'ARRAY[Payee]',
    'additional_owner' => 'AdditionalOwner',
    'owner' => 'Owner',
    'creator' => 'Creator',
    'receiver' => 'ARRAY[Receiver]',
    'token_id' => 'string',
    'message' => 'string',
    'lock_details' => 'LockDetails',
    'block_id' => 'string',
    'account_id' => 'string',
    'token_unit' => 'string',
    'beneficiary' => 'Beneficiary',
    'sender' => 'ARRAY[Sender]',
    'account_details' => 'AccountDetails',
    'overledger_signing_type' => 'string',
    'total_payment_amount' => 'Payment',
    'signer_account' => 'SignerAccount'
} );

__PACKAGE__->attribute_map( {
    'mandate' => 'mandate',
    'alias_details' => 'aliasDetails',
    'pagination' => 'pagination',
    'origin' => 'origin',
    'destination' => 'destination',
    'token_name' => 'tokenName',
    'block_search_type' => 'blockSearchType',
    'payer' => 'payer',
    'collector' => 'collector',
    'payee' => 'payee',
    'additional_owner' => 'additionalOwner',
    'owner' => 'owner',
    'creator' => 'creator',
    'receiver' => 'receiver',
    'token_id' => 'tokenId',
    'message' => 'message',
    'lock_details' => 'lockDetails',
    'block_id' => 'blockId',
    'account_id' => 'accountId',
    'token_unit' => 'tokenUnit',
    'beneficiary' => 'beneficiary',
    'sender' => 'sender',
    'account_details' => 'accountDetails',
    'overledger_signing_type' => 'overledgerSigningType',
    'total_payment_amount' => 'totalPaymentAmount',
    'signer_account' => 'signerAccount'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;