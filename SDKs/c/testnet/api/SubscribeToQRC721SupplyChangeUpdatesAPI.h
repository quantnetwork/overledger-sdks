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


// Receive updates each time a supply changes for a QRC721 or QRC20 token
//
// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.
//
event_subscription_response_t*
SubscribeToQRC721SupplyChangeUpdatesAPI_subscribeSupplyEvent(apiClient_t *apiClient, char * Authorization , char * flowtype , object_t * body );


