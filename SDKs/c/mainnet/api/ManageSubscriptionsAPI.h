#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/list_webhook_subscription_response_schema.h"
#include "../model/update_webhook_subscription_request_schema.h"
#include "../model/webhook_subscription_status_update_response.h"


// Remove a subscription created by your application
//
// Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
//
webhook_subscription_status_update_response_t*
ManageSubscriptionsAPI_deleteSubscription(apiClient_t *apiClient, char * Authorization , char * subscriptionId );


// Retrieve a list of subscriptions created by your application
//
// Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
//
list_t*
ManageSubscriptionsAPI_listSubscriptions(apiClient_t *apiClient, char * Authorization );


// Update a specific subscription created by your application
//
// Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
//
webhook_subscription_status_update_response_t*
ManageSubscriptionsAPI_updateSubscription(apiClient_t *apiClient, char * Authorization , char * subscriptionId , update_webhook_subscription_request_schema_t * update_webhook_subscription_request_schema );


