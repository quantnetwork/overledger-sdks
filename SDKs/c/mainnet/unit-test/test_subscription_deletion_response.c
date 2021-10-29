#ifndef subscription_deletion_response_TEST
#define subscription_deletion_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_deletion_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_deletion_response.h"
subscription_deletion_response_t* instantiate_subscription_deletion_response(int include_optional);

#include "test_subscription_details.c"


subscription_deletion_response_t* instantiate_subscription_deletion_response(int include_optional) {
  subscription_deletion_response_t* subscription_deletion_response = NULL;
  if (include_optional) {
    subscription_deletion_response = subscription_deletion_response_create(
       // false, not to have infinite recursion
      instantiate_subscription_details(0),
      "a",
      "a",
      "a"
    );
  } else {
    subscription_deletion_response = subscription_deletion_response_create(
      NULL,
      "a",
      "a",
      "a"
    );
  }

  return subscription_deletion_response;
}


#ifdef subscription_deletion_response_MAIN

void test_subscription_deletion_response(int include_optional) {
    subscription_deletion_response_t* subscription_deletion_response_1 = instantiate_subscription_deletion_response(include_optional);

	cJSON* jsonsubscription_deletion_response_1 = subscription_deletion_response_convertToJSON(subscription_deletion_response_1);
	printf("subscription_deletion_response :\n%s\n", cJSON_Print(jsonsubscription_deletion_response_1));
	subscription_deletion_response_t* subscription_deletion_response_2 = subscription_deletion_response_parseFromJSON(jsonsubscription_deletion_response_1);
	cJSON* jsonsubscription_deletion_response_2 = subscription_deletion_response_convertToJSON(subscription_deletion_response_2);
	printf("repeating subscription_deletion_response:\n%s\n", cJSON_Print(jsonsubscription_deletion_response_2));
}

int main() {
  test_subscription_deletion_response(1);
  test_subscription_deletion_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_deletion_response_MAIN
#endif // subscription_deletion_response_TEST
