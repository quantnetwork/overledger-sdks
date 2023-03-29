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


// Receive updates each time a QRC721 token is transferred
//
// Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \"Create Transfer\" to receive an update each time a token is transferred to a different owner.
//
event_subscription_response_t*
SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent(apiClient_t *apiClient, char * Authorization , object_t * body );


