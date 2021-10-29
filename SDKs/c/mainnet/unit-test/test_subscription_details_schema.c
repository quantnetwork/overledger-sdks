#ifndef subscription_details_schema_TEST
#define subscription_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_details_schema.h"
subscription_details_schema_t* instantiate_subscription_details_schema(int include_optional);

#include "test_status.c"


subscription_details_schema_t* instantiate_subscription_details_schema(int include_optional) {
  subscription_details_schema_t* subscription_details_schema = NULL;
  if (include_optional) {
    subscription_details_schema = subscription_details_schema_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_status(0)
    );
  } else {
    subscription_details_schema = subscription_details_schema_create(
      list_create(),
      NULL
    );
  }

  return subscription_details_schema;
}


#ifdef subscription_details_schema_MAIN

void test_subscription_details_schema(int include_optional) {
    subscription_details_schema_t* subscription_details_schema_1 = instantiate_subscription_details_schema(include_optional);

	cJSON* jsonsubscription_details_schema_1 = subscription_details_schema_convertToJSON(subscription_details_schema_1);
	printf("subscription_details_schema :\n%s\n", cJSON_Print(jsonsubscription_details_schema_1));
	subscription_details_schema_t* subscription_details_schema_2 = subscription_details_schema_parseFromJSON(jsonsubscription_details_schema_1);
	cJSON* jsonsubscription_details_schema_2 = subscription_details_schema_convertToJSON(subscription_details_schema_2);
	printf("repeating subscription_details_schema:\n%s\n", cJSON_Print(jsonsubscription_details_schema_2));
}

int main() {
  test_subscription_details_schema(1);
  test_subscription_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_details_schema_MAIN
#endif // subscription_details_schema_TEST
