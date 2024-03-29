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
package WWW::OpenAPIClient::TransactionSearchApi;

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
# auto_execute_search_transaction_request
#
# Prepare and automatically execute a search for a transaction on a DLT.
#
# @param string $authorization  (required)
# @param string $transaction_id The transactionId to search for (required)
# @param PrepareSearchSchema $prepare_search_schema  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'transaction_id' => {
        data_type => 'string',
        description => 'The transactionId to search for',
        required => '1',
    },
    'prepare_search_schema' => {
        data_type => 'PrepareSearchSchema',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'auto_execute_search_transaction_request' } = {
        summary => 'Prepare and automatically execute a search for a transaction on a DLT.',
        params => $params,
        returns => 'PrepareAndExecuteTransactionResponse',
        };
}
# @return PrepareAndExecuteTransactionResponse
#
sub auto_execute_search_transaction_request {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling auto_execute_search_transaction_request");
    }

    # verify the required parameter 'transaction_id' is set
    unless (exists $args{'transaction_id'}) {
      croak("Missing the required parameter 'transaction_id' when calling auto_execute_search_transaction_request");
    }

    # verify the required parameter 'prepare_search_schema' is set
    unless (exists $args{'prepare_search_schema'}) {
      croak("Missing the required parameter 'prepare_search_schema' when calling auto_execute_search_transaction_request");
    }

    # parse inputs
    my $_resource_path = '/v2/autoexecution/search/transaction';

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

    # query params
    if ( exists $args{'transaction_id'}) {
        $query_params->{'transactionId'} = $self->{api_client}->to_query_value($args{'transaction_id'});
    }

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
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
    my $_response_object = $self->{api_client}->deserialize('PrepareAndExecuteTransactionResponse', $response);
    return $_response_object;
}

#
# execute_prepared_search_request_transaction
#
# Execute a search for a transaction on a DLT
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
    __PACKAGE__->method_documentation->{ 'execute_prepared_search_request_transaction' } = {
        summary => 'Execute a search for a transaction on a DLT',
        params => $params,
        returns => 'ExecuteSearchTransactionResponse',
        };
}
# @return ExecuteSearchTransactionResponse
#
sub execute_prepared_search_request_transaction {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling execute_prepared_search_request_transaction");
    }

    # verify the required parameter 'request_id' is set
    unless (exists $args{'request_id'}) {
      croak("Missing the required parameter 'request_id' when calling execute_prepared_search_request_transaction");
    }

    # parse inputs
    my $_resource_path = '/v2/execution/search/transaction';

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
    my $_response_object = $self->{api_client}->deserialize('ExecuteSearchTransactionResponse', $response);
    return $_response_object;
}

#
# prepare_search_request
#
# Prepare a search for a transaction on a DLT
#
# @param string $authorization  (required)
# @param string $transaction_id The transactionId to search for (required)
# @param PrepareSearchSchema $prepare_search_schema  (required)
{
    my $params = {
    'authorization' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    'transaction_id' => {
        data_type => 'string',
        description => 'The transactionId to search for',
        required => '1',
    },
    'prepare_search_schema' => {
        data_type => 'PrepareSearchSchema',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'prepare_search_request' } = {
        summary => 'Prepare a search for a transaction on a DLT',
        params => $params,
        returns => 'PrepareSearchResponseSchema',
        };
}
# @return PrepareSearchResponseSchema
#
sub prepare_search_request {
    my ($self, %args) = @_;

    # verify the required parameter 'authorization' is set
    unless (exists $args{'authorization'}) {
      croak("Missing the required parameter 'authorization' when calling prepare_search_request");
    }

    # verify the required parameter 'transaction_id' is set
    unless (exists $args{'transaction_id'}) {
      croak("Missing the required parameter 'transaction_id' when calling prepare_search_request");
    }

    # verify the required parameter 'prepare_search_schema' is set
    unless (exists $args{'prepare_search_schema'}) {
      croak("Missing the required parameter 'prepare_search_schema' when calling prepare_search_request");
    }

    # parse inputs
    my $_resource_path = '/v2/preparation/search/transaction';

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

    # query params
    if ( exists $args{'transaction_id'}) {
        $query_params->{'transactionId'} = $self->{api_client}->to_query_value($args{'transaction_id'});
    }

    # header params
    if ( exists $args{'authorization'}) {
        $header_params->{'Authorization'} = $self->{api_client}->to_header_value($args{'authorization'});
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
