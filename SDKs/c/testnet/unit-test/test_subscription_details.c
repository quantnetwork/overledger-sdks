#ifndef subscription_details_TEST
#define subscription_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_details.h"
subscription_details_t* instantiate_subscription_details(int include_optional);

#include "test_status.c"


subscription_details_t* instantiate_subscription_details(int include_optional) {
  subscription_details_t* subscription_details = NULL;
  if (include_optional) {
    subscription_details = subscription_details_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_status(0)
    );
  } else {
    subscription_details = subscription_details_create(
      list_create(),
      NULL
    );
  }

  return subscription_details;
}


#ifdef subscription_details_MAIN

void test_subscription_details(int include_optional) {
    subscription_details_t* subscription_details_1 = instantiate_subscription_details(include_optional);

	cJSON* jsonsubscription_details_1 = subscription_details_convertToJSON(subscription_details_1);
	printf("subscription_details :\n%s\n", cJSON_Print(jsonsubscription_details_1));
	subscription_details_t* subscription_details_2 = subscription_details_parseFromJSON(jsonsubscription_details_1);
	cJSON* jsonsubscription_details_2 = subscription_details_convertToJSON(subscription_details_2);
	printf("repeating subscription_details:\n%s\n", cJSON_Print(jsonsubscription_details_2));
}

int main() {
  test_subscription_details(1);
  test_subscription_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_details_MAIN
#endif // subscription_details_TEST
