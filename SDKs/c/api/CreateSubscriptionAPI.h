#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/create_subscription_request_schema.h"
#include "../model/create_subscription_response_schema.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"


// Create a subscription for a transaction or monitored resource 
//
// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
//
list_t*
CreateSubscriptionAPI_subscription(apiClient_t *apiClient, char * Authorization , create_subscription_request_schema_t * create_subscription_request_schema );


