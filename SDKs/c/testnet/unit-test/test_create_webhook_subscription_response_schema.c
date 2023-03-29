#ifndef create_webhook_subscription_response_schema_TEST
#define create_webhook_subscription_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_webhook_subscription_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_webhook_subscription_response_schema.h"
create_webhook_subscription_response_schema_t* instantiate_create_webhook_subscription_response_schema(int include_optional);

#include "test_webhook_subscription_details_schema.c"


create_webhook_subscription_response_schema_t* instantiate_create_webhook_subscription_response_schema(int include_optional) {
  create_webhook_subscription_response_schema_t* create_webhook_subscription_response_schema = NULL;
  if (include_optional) {
    create_webhook_subscription_response_schema = create_webhook_subscription_response_schema_create(
      "a",
       // false, not to have infinite recursion
      instantiate_webhook_subscription_details_schema(0)
    );
  } else {
    create_webhook_subscription_response_schema = create_webhook_subscription_response_schema_create(
      "a",
      NULL
    );
  }

  return create_webhook_subscription_response_schema;
}


#ifdef create_webhook_subscription_response_schema_MAIN

void test_create_webhook_subscription_response_schema(int include_optional) {
    create_webhook_subscription_response_schema_t* create_webhook_subscription_response_schema_1 = instantiate_create_webhook_subscription_response_schema(include_optional);

	cJSON* jsoncreate_webhook_subscription_response_schema_1 = create_webhook_subscription_response_schema_convertToJSON(create_webhook_subscription_response_schema_1);
	printf("create_webhook_subscription_response_schema :\n%s\n", cJSON_Print(jsoncreate_webhook_subscription_response_schema_1));
	create_webhook_subscription_response_schema_t* create_webhook_subscription_response_schema_2 = create_webhook_subscription_response_schema_parseFromJSON(jsoncreate_webhook_subscription_response_schema_1);
	cJSON* jsoncreate_webhook_subscription_response_schema_2 = create_webhook_subscription_response_schema_convertToJSON(create_webhook_subscription_response_schema_2);
	printf("repeating create_webhook_subscription_response_schema:\n%s\n", cJSON_Print(jsoncreate_webhook_subscription_response_schema_2));
}

int main() {
  test_create_webhook_subscription_response_schema(1);
  test_create_webhook_subscription_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_webhook_subscription_response_schema_MAIN
#endif // create_webhook_subscription_response_schema_TEST
