#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/error_response_message.h"
#include "../model/event_subscription_response.h"
#include "../model/internal_server_error_schema.h"


// Receive updates for a shared account
//
// Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.
//
event_subscription_response_t*
SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent(apiClient_t *apiClient, char * Authorization , object_t * body );


