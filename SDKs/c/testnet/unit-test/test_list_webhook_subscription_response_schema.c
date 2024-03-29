#ifndef list_webhook_subscription_response_schema_TEST
#define list_webhook_subscription_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define list_webhook_subscription_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/list_webhook_subscription_response_schema.h"
list_webhook_subscription_response_schema_t* instantiate_list_webhook_subscription_response_schema(int include_optional);

#include "test_webhook_subscription_details_schema.c"


list_webhook_subscription_response_schema_t* instantiate_list_webhook_subscription_response_schema(int include_optional) {
  list_webhook_subscription_response_schema_t* list_webhook_subscription_response_schema = NULL;
  if (include_optional) {
    list_webhook_subscription_response_schema = list_webhook_subscription_response_schema_create(
       // false, not to have infinite recursion
      instantiate_webhook_subscription_details_schema(0),
      "2013-10-20T19:20:30+01:00",
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    list_webhook_subscription_response_schema = list_webhook_subscription_response_schema_create(
      NULL,
      "2013-10-20T19:20:30+01:00",
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return list_webhook_subscription_response_schema;
}


#ifdef list_webhook_subscription_response_schema_MAIN

void test_list_webhook_subscription_response_schema(int include_optional) {
    list_webhook_subscription_response_schema_t* list_webhook_subscription_response_schema_1 = instantiate_list_webhook_subscription_response_schema(include_optional);

	cJSON* jsonlist_webhook_subscription_response_schema_1 = list_webhook_subscription_response_schema_convertToJSON(list_webhook_subscription_response_schema_1);
	printf("list_webhook_subscription_response_schema :\n%s\n", cJSON_Print(jsonlist_webhook_subscription_response_schema_1));
	list_webhook_subscription_response_schema_t* list_webhook_subscription_response_schema_2 = list_webhook_subscription_response_schema_parseFromJSON(jsonlist_webhook_subscription_response_schema_1);
	cJSON* jsonlist_webhook_subscription_response_schema_2 = list_webhook_subscription_response_schema_convertToJSON(list_webhook_subscription_response_schema_2);
	printf("repeating list_webhook_subscription_response_schema:\n%s\n", cJSON_Print(jsonlist_webhook_subscription_response_schema_2));
}

int main() {
  test_list_webhook_subscription_response_schema(1);
  test_list_webhook_subscription_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // list_webhook_subscription_response_schema_MAIN
#endif // list_webhook_subscription_response_schema_TEST
