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
package WWW::OpenAPIClient::UTXOStatusSearchApi;

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
# auto_execute_search_utxo_request
#
# Prepare and automatically execute a search for a UTXO on a DLT.
#
# @param string $authorization  (required)
# @param string $utxo_id  (required)
# @param PrepareSearchSchema $prepare_search_schema  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'utxo_id' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'prepare_search_schema' => {
        data_type => 'PrepareSearchSchema',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'auto_execute_search_utxo_request' } = {
        summary => 'Prepare and automatically execute a search for a UTXO on a DLT.',
        params => $params,
        returns => 'AutoExecuteSearchUTXOResponseSchema',
        };
}
# @return AutoExecuteSearchUTXOResponseSchema
#
sub auto_execute_search_utxo_request {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling auto_execute_search_utxo_request");
    }

    # verify the required parameter 'utxo_id' is set
    unless (exists $args{'utxo_id'}) {
      croak("Missing the required parameter 'utxo_id' when calling auto_execute_search_utxo_request");
    }

    # verify the required parameter 'prepare_search_schema' is set
    unless (exists $args{'prepare_search_schema'}) {
      croak("Missing the required parameter 'prepare_search_schema' when calling auto_execute_search_utxo_request");
    }

    # parse inputs
    my $_resource_path = '/v2/autoexecution/search/utxo/{utxoId}';

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type('application/json');

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
    }

    # path params
    if ( exists $args{'utxo_id'}) {
        my $_base_variable = "{" . "utxoId" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'utxo_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # body params
    if ( exists $args{'prepare_search_schema'}) {
        $_body_data = $args{'prepare_search_schema'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(OAuth2_Security_Scheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('AutoExecuteSearchUTXOResponseSchema', $response);
    return $_response_object;
}

#
# execute_utxo_prepared_search_request
#
# Execute a search for UTXO state on a DLT
#
# @param string $authorization  (required)
# @param string $request_id  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'request_id' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'execute_utxo_prepared_search_request' } = {
        summary => 'Execute a search for UTXO state on a DLT',
        params => $params,
        returns => 'ExecuteSearchUTXOResponseSchema',
        };
}
# @return ExecuteSearchUTXOResponseSchema
#
sub execute_utxo_prepared_search_request {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling execute_utxo_prepared_search_request");
    }

    # verify the required parameter 'request_id' is set
    unless (exists $args{'request_id'}) {
      croak("Missing the required parameter 'request_id' when calling execute_utxo_prepared_search_request");
    }

    # parse inputs
    my $_resource_path = '/v2/execution/search/utxo';

    my $_method = 'POST';
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
    if ( exists $args{'request_id'}) {
        $query_params->{'requestId'} = $self->{api_client}->to_query_value($args{'request_id'});
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
    my $_response_object = $self->{api_client}->deserialize('ExecuteSearchUTXOResponseSchema', $response);
    return $_response_object;
}

#
# prepare_search_utxo_state
#
# Prepare Search for a UTXO State.
#
# @param string $authorization  (required)
# @param string $utxo_id  (required)
# @param PrepareSearchSchema $prepare_search_schema  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'utxo_id' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'prepare_search_schema' => {
        data_type => 'PrepareSearchSchema',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'prepare_search_utxo_state' } = {
        summary => 'Prepare Search for a UTXO State.',
        params => $params,
        returns => 'PrepareSearchResponseSchema',
        };
}
# @return PrepareSearchResponseSchema
#
sub prepare_search_utxo_state {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling prepare_search_utxo_state");
    }

    # verify the required parameter 'utxo_id' is set
    unless (exists $args{'utxo_id'}) {
      croak("Missing the required parameter 'utxo_id' when calling prepare_search_utxo_state");
    }

    # verify the required parameter 'prepare_search_schema' is set
    unless (exists $args{'prepare_search_schema'}) {
      croak("Missing the required parameter 'prepare_search_schema' when calling prepare_search_utxo_state");
    }

    # parse inputs
    my $_resource_path = '/v2/preparation/search/utxo/{utxoId}';

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type('application/json');

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
    }

    # path params
    if ( exists $args{'utxo_id'}) {
        my $_base_variable = "{" . "utxoId" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'utxo_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # body params
    if ( exists $args{'prepare_search_schema'}) {
        $_body_data = $args{'prepare_search_schema'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(OAuth2_Security_Scheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('PrepareSearchResponseSchema', $response);
    return $_response_object;
}

1;
