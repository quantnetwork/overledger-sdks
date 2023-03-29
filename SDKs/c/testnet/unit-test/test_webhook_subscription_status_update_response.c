#ifndef webhook_subscription_status_update_response_TEST
#define webhook_subscription_status_update_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_subscription_status_update_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_subscription_status_update_response.h"
webhook_subscription_status_update_response_t* instantiate_webhook_subscription_status_update_response(int include_optional);

#include "test_webhook_subscription_details.c"


webhook_subscription_status_update_response_t* instantiate_webhook_subscription_status_update_response(int include_optional) {
  webhook_subscription_status_update_response_t* webhook_subscription_status_update_response = NULL;
  if (include_optional) {
    webhook_subscription_status_update_response = webhook_subscription_status_update_response_create(
       // false, not to have infinite recursion
      instantiate_webhook_subscription_details(0),
      "a",
      "a",
      "a"
    );
  } else {
    webhook_subscription_status_update_response = webhook_subscription_status_update_response_create(
      NULL,
      "a",
      "a",
      "a"
    );
  }

  return webhook_subscription_status_update_response;
}


#ifdef webhook_subscription_status_update_response_MAIN

void test_webhook_subscription_status_update_response(int include_optional) {
    webhook_subscription_status_update_response_t* webhook_subscription_status_update_response_1 = instantiate_webhook_subscription_status_update_response(include_optional);

	cJSON* jsonwebhook_subscription_status_update_response_1 = webhook_subscription_status_update_response_convertToJSON(webhook_subscription_status_update_response_1);
	printf("webhook_subscription_status_update_response :\n%s\n", cJSON_Print(jsonwebhook_subscription_status_update_response_1));
	webhook_subscription_status_update_response_t* webhook_subscription_status_update_response_2 = webhook_subscription_status_update_response_parseFromJSON(jsonwebhook_subscription_status_update_response_1);
	cJSON* jsonwebhook_subscription_status_update_response_2 = webhook_subscription_status_update_response_convertToJSON(webhook_subscription_status_update_response_2);
	printf("repeating webhook_subscription_status_update_response:\n%s\n", cJSON_Print(jsonwebhook_subscription_status_update_response_2));
}

int main() {
  test_webhook_subscription_status_update_response(1);
  test_webhook_subscription_status_update_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_subscription_status_update_response_MAIN
#endif // webhook_subscription_status_update_response_TEST
