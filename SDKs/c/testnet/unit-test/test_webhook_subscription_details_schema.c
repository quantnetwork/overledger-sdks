#ifndef webhook_subscription_details_schema_TEST
#define webhook_subscription_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_subscription_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_subscription_details_schema.h"
webhook_subscription_details_schema_t* instantiate_webhook_subscription_details_schema(int include_optional);

#include "test_status.c"


webhook_subscription_details_schema_t* instantiate_webhook_subscription_details_schema(int include_optional) {
  webhook_subscription_details_schema_t* webhook_subscription_details_schema = NULL;
  if (include_optional) {
    webhook_subscription_details_schema = webhook_subscription_details_schema_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_status(0)
    );
  } else {
    webhook_subscription_details_schema = webhook_subscription_details_schema_create(
      list_create(),
      NULL
    );
  }

  return webhook_subscription_details_schema;
}


#ifdef webhook_subscription_details_schema_MAIN

void test_webhook_subscription_details_schema(int include_optional) {
    webhook_subscription_details_schema_t* webhook_subscription_details_schema_1 = instantiate_webhook_subscription_details_schema(include_optional);

	cJSON* jsonwebhook_subscription_details_schema_1 = webhook_subscription_details_schema_convertToJSON(webhook_subscription_details_schema_1);
	printf("webhook_subscription_details_schema :\n%s\n", cJSON_Print(jsonwebhook_subscription_details_schema_1));
	webhook_subscription_details_schema_t* webhook_subscription_details_schema_2 = webhook_subscription_details_schema_parseFromJSON(jsonwebhook_subscription_details_schema_1);
	cJSON* jsonwebhook_subscription_details_schema_2 = webhook_subscription_details_schema_convertToJSON(webhook_subscription_details_schema_2);
	printf("repeating webhook_subscription_details_schema:\n%s\n", cJSON_Print(jsonwebhook_subscription_details_schema_2));
}

int main() {
  test_webhook_subscription_details_schema(1);
  test_webhook_subscription_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_subscription_details_schema_MAIN
#endif // webhook_subscription_details_schema_TEST
