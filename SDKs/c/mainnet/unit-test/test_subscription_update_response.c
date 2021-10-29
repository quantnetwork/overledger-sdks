#ifndef subscription_update_response_TEST
#define subscription_update_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_update_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_update_response.h"
subscription_update_response_t* instantiate_subscription_update_response(int include_optional);

#include "test_subscription_details.c"


subscription_update_response_t* instantiate_subscription_update_response(int include_optional) {
  subscription_update_response_t* subscription_update_response = NULL;
  if (include_optional) {
    subscription_update_response = subscription_update_response_create(
       // false, not to have infinite recursion
      instantiate_subscription_details(0),
      "a",
      "a",
      "a"
    );
  } else {
    subscription_update_response = subscription_update_response_create(
      NULL,
      "a",
      "a",
      "a"
    );
  }

  return subscription_update_response;
}


#ifdef subscription_update_response_MAIN

void test_subscription_update_response(int include_optional) {
    subscription_update_response_t* subscription_update_response_1 = instantiate_subscription_update_response(include_optional);

	cJSON* jsonsubscription_update_response_1 = subscription_update_response_convertToJSON(subscription_update_response_1);
	printf("subscription_update_response :\n%s\n", cJSON_Print(jsonsubscription_update_response_1));
	subscription_update_response_t* subscription_update_response_2 = subscription_update_response_parseFromJSON(jsonsubscription_update_response_1);
	cJSON* jsonsubscription_update_response_2 = subscription_update_response_convertToJSON(subscription_update_response_2);
	printf("repeating subscription_update_response:\n%s\n", cJSON_Print(jsonsubscription_update_response_2));
}

int main() {
  test_subscription_update_response(1);
  test_subscription_update_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_update_response_MAIN
#endif // subscription_update_response_TEST
