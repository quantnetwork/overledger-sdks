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


// Receive updates each time there is a credit payment on your account
//
// Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.
//
event_subscription_response_t*
SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent(apiClient_t *apiClient, char * Authorization , object_t * body );


