#ifndef update_subscription_request_schema_TEST
#define update_subscription_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_subscription_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_subscription_request_schema.h"
update_subscription_request_schema_t* instantiate_update_subscription_request_schema(int include_optional);

#include "test_status_update_schema.c"


update_subscription_request_schema_t* instantiate_update_subscription_request_schema(int include_optional) {
  update_subscription_request_schema_t* update_subscription_request_schema = NULL;
  if (include_optional) {
    update_subscription_request_schema = update_subscription_request_schema_create(
       // false, not to have infinite recursion
      instantiate_status_update_schema(0),
      "a"
    );
  } else {
    update_subscription_request_schema = update_subscription_request_schema_create(
      NULL,
      "a"
    );
  }

  return update_subscription_request_schema;
}


#ifdef update_subscription_request_schema_MAIN

void test_update_subscription_request_schema(int include_optional) {
    update_subscription_request_schema_t* update_subscription_request_schema_1 = instantiate_update_subscription_request_schema(include_optional);

	cJSON* jsonupdate_subscription_request_schema_1 = update_subscription_request_schema_convertToJSON(update_subscription_request_schema_1);
	printf("update_subscription_request_schema :\n%s\n", cJSON_Print(jsonupdate_subscription_request_schema_1));
	update_subscription_request_schema_t* update_subscription_request_schema_2 = update_subscription_request_schema_parseFromJSON(jsonupdate_subscription_request_schema_1);
	cJSON* jsonupdate_subscription_request_schema_2 = update_subscription_request_schema_convertToJSON(update_subscription_request_schema_2);
	printf("repeating update_subscription_request_schema:\n%s\n", cJSON_Print(jsonupdate_subscription_request_schema_2));
}

int main() {
  test_update_subscription_request_schema(1);
  test_update_subscription_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_subscription_request_schema_MAIN
#endif // update_subscription_request_schema_TEST
