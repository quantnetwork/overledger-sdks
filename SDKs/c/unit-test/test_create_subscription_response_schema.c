#ifndef create_subscription_response_schema_TEST
#define create_subscription_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_subscription_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_subscription_response_schema.h"
create_subscription_response_schema_t* instantiate_create_subscription_response_schema(int include_optional);

#include "test_subscription_details_schema.c"


create_subscription_response_schema_t* instantiate_create_subscription_response_schema(int include_optional) {
  create_subscription_response_schema_t* create_subscription_response_schema = NULL;
  if (include_optional) {
    create_subscription_response_schema = create_subscription_response_schema_create(
       // false, not to have infinite recursion
      instantiate_subscription_details_schema(0),
      "a"
    );
  } else {
    create_subscription_response_schema = create_subscription_response_schema_create(
      NULL,
      "a"
    );
  }

  return create_subscription_response_schema;
}


#ifdef create_subscription_response_schema_MAIN

void test_create_subscription_response_schema(int include_optional) {
    create_subscription_response_schema_t* create_subscription_response_schema_1 = instantiate_create_subscription_response_schema(include_optional);

	cJSON* jsoncreate_subscription_response_schema_1 = create_subscription_response_schema_convertToJSON(create_subscription_response_schema_1);
	printf("create_subscription_response_schema :\n%s\n", cJSON_Print(jsoncreate_subscription_response_schema_1));
	create_subscription_response_schema_t* create_subscription_response_schema_2 = create_subscription_response_schema_parseFromJSON(jsoncreate_subscription_response_schema_1);
	cJSON* jsoncreate_subscription_response_schema_2 = create_subscription_response_schema_convertToJSON(create_subscription_response_schema_2);
	printf("repeating create_subscription_response_schema:\n%s\n", cJSON_Print(jsoncreate_subscription_response_schema_2));
}

int main() {
  test_create_subscription_response_schema(1);
  test_create_subscription_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_subscription_response_schema_MAIN
#endif // create_subscription_response_schema_TEST
