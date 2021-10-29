=begin comment

Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::CreateTransactionApi;

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
# execute_prepared_request_native_transaction
#
# Execute a native transaction on the DLT
#
# @param string $authorization  (required)
# @param ExecuteTransactionRequest $execute_transaction_request  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'execute_transaction_request' => {
        data_type => 'ExecuteTransactionRequest',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'execute_prepared_request_native_transaction' } = {
        summary => 'Execute a native transaction on the DLT',
        params => $params,
        returns => 'ExecuteTransactionResponse',
        };
}
# @return ExecuteTransactionResponse
#
sub execute_prepared_request_native_transaction {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling execute_prepared_request_native_transaction");
    }

    # verify the required parameter 'execute_transaction_request' is set
    unless (exists $args{'execute_transaction_request'}) {
      croak("Missing the required parameter 'execute_transaction_request' when calling execute_prepared_request_native_transaction");
    }

    # parse inputs
    my $_resource_path = '/v2/execution/nativetransaction';

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

    my $_body_data;
    # body params
    if ( exists $args{'execute_transaction_request'}) {
        $_body_data = $args{'execute_transaction_request'};
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
    my $_response_object = $self->{api_client}->deserialize('ExecuteTransactionResponse', $response);
    return $_response_object;
}

#
# execute_prepared_request_transaction
#
# Execute a transaction on the DLT
#
# @param string $authorization  (required)
# @param ExecuteTransactionRequest $execute_transaction_request  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'execute_transaction_request' => {
        data_type => 'ExecuteTransactionRequest',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'execute_prepared_request_transaction' } = {
        summary => 'Execute a transaction on the DLT',
        params => $params,
        returns => 'ExecuteTransactionResponse',
        };
}
# @return ExecuteTransactionResponse
#
sub execute_prepared_request_transaction {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling execute_prepared_request_transaction");
    }

    # verify the required parameter 'execute_transaction_request' is set
    unless (exists $args{'execute_transaction_request'}) {
      croak("Missing the required parameter 'execute_transaction_request' when calling execute_prepared_request_transaction");
    }

    # parse inputs
    my $_resource_path = '/v2/execution/transaction';

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

    my $_body_data;
    # body params
    if ( exists $args{'execute_transaction_request'}) {
        $_body_data = $args{'execute_transaction_request'};
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
    my $_response_object = $self->{api_client}->deserialize('ExecuteTransactionResponse', $response);
    return $_response_object;
}

#
# prepare_native_transaction
#
# Prepare a DLT native transaction
#
# @param string $authorization  (required)
# @param PrepareNativeTransactionRequestSchema $prepare_native_transaction_request_schema  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'prepare_native_transaction_request_schema' => {
        data_type => 'PrepareNativeTransactionRequestSchema',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'prepare_native_transaction' } = {
        summary => 'Prepare a DLT native transaction',
        params => $params,
        returns => 'PrepareSearchResponseSchema',
        };
}
# @return PrepareSearchResponseSchema
#
sub prepare_native_transaction {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling prepare_native_transaction");
    }

    # verify the required parameter 'prepare_native_transaction_request_schema' is set
    unless (exists $args{'prepare_native_transaction_request_schema'}) {
      croak("Missing the required parameter 'prepare_native_transaction_request_schema' when calling prepare_native_transaction");
    }

    # parse inputs
    my $_resource_path = '/v2/preparation/nativetransaction';

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

    my $_body_data;
    # body params
    if ( exists $args{'prepare_native_transaction_request_schema'}) {
        $_body_data = $args{'prepare_native_transaction_request_schema'};
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

#
# prepare_transaction_request
#
# Prepare a DLT transaction for signing
#
# @param string $authorization  (required)
# @param UNKNOWN_BASE_TYPE $unknown_base_type  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'unknown_base_type' => {
        data_type => 'UNKNOWN_BASE_TYPE',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'prepare_transaction_request' } = {
        summary => 'Prepare a DLT transaction for signing',
        params => $params,
        returns => 'PrepareTransactionResponse',
        };
}
# @return PrepareTransactionResponse
#
sub prepare_transaction_request {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling prepare_transaction_request");
    }

    # parse inputs
    my $_resource_path = '/v2/preparation/transaction';

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

    my $_body_data;
    # body params
    if ( exists $args{'unknown_base_type'}) {
        $_body_data = $args{'unknown_base_type'};
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
    my $_response_object = $self->{api_client}->deserialize('PrepareTransactionResponse', $response);
    return $_response_object;
}

1;
