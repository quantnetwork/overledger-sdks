=begin comment

Quant Overledger API

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::MDappTransactionQueryApi;

require 5.6.0;
use strict;
use warnings;
use utf8;
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::OpenAPIClient::ApiClient;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class = shift;
    my $api_client;

    if ($_[0] && ref $_[0] && ref $_[0] eq 'WWW::OpenAPIClient::ApiClient' ) {
        $api_client = $_[0];
    } else {
        $api_client = WWW::OpenAPIClient::ApiClient->new(@_);
    }

    bless { api_client => $api_client }, $class;

}


#
# get_ovl_transaction_by_tx_id
#
# Retrieve information about a specific transaction created by your application in Overledger
#
# @param string $authorization  (required)
# @param string $overledgertransactionid  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'overledgertransactionid' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_ovl_transaction_by_tx_id' } = {
        summary => 'Retrieve information about a specific transaction created by your application in Overledger',
        params => $params,
        returns => 'OverledgerTransactionResponseSchema',
        };
}
# @return OverledgerTransactionResponseSchema
#
sub get_ovl_transaction_by_tx_id {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling get_ovl_transaction_by_tx_id");
    }

    # verify the required parameter 'overledgertransactionid' is set
    unless (exists $args{'overledgertransactionid'}) {
      croak("Missing the required parameter 'overledgertransactionid' when calling get_ovl_transaction_by_tx_id");
    }

    # parse inputs
    my $_resource_path = '/v2/mdapptransaction/{overledgertransactionid}';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
    }

    # path params
    if ( exists $args{'overledgertransactionid'}) {
        my $_base_variable = "{" . "overledgertransactionid" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'overledgertransactionid'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(OAuth2_Security_Scheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('OverledgerTransactionResponseSchema', $response);
    return $_response_object;
}

#
# get_ovl_transactions_by_client_id
#
# Retrieve a list of transactions created by your application in Overledger
#
# @param string $authorization  (required)
# @param int $offset  (optional, default to 0)
# @param int $length  (optional, default to 25)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'offset' => {
        data_type => 'int',
        description => '',
        required => '0',
    },
    'length' => {
        data_type => 'int',
        description => '',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_ovl_transactions_by_client_id' } = {
        summary => 'Retrieve a list of transactions created by your application in Overledger',
        params => $params,
        returns => 'ARRAY[OverledgerTransactionResponseSchema]',
        };
}
# @return ARRAY[OverledgerTransactionResponseSchema]
#
sub get_ovl_transactions_by_client_id {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling get_ovl_transactions_by_client_id");
    }

    # parse inputs
    my $_resource_path = '/v2/mdapptransactions';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'offset'}) {
        $query_params->{'offset'} = $self->{api_client}->to_query_value($args{'offset'});
    }

    # query params
    if ( exists $args{'length'}) {
        $query_params->{'length'} = $self->{api_client}->to_query_value($args{'length'});
    }

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(OAuth2_Security_Scheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('ARRAY[OverledgerTransactionResponseSchema]', $response);
    return $_response_object;
}

1;
