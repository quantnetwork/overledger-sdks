#ifndef webhook_status_update_schema_TEST
#define webhook_status_update_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_status_update_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_status_update_schema.h"
webhook_status_update_schema_t* instantiate_webhook_status_update_schema(int include_optional);



webhook_status_update_schema_t* instantiate_webhook_status_update_schema(int include_optional) {
  webhook_status_update_schema_t* webhook_status_update_schema = NULL;
  if (include_optional) {
    webhook_status_update_schema = webhook_status_update_schema_create(
      "a"
    );
  } else {
    webhook_status_update_schema = webhook_status_update_schema_create(
      "a"
    );
  }

  return webhook_status_update_schema;
}


#ifdef webhook_status_update_schema_MAIN

void test_webhook_status_update_schema(int include_optional) {
    webhook_status_update_schema_t* webhook_status_update_schema_1 = instantiate_webhook_status_update_schema(include_optional);

	cJSON* jsonwebhook_status_update_schema_1 = webhook_status_update_schema_convertToJSON(webhook_status_update_schema_1);
	printf("webhook_status_update_schema :\n%s\n", cJSON_Print(jsonwebhook_status_update_schema_1));
	webhook_status_update_schema_t* webhook_status_update_schema_2 = webhook_status_update_schema_parseFromJSON(jsonwebhook_status_update_schema_1);
	cJSON* jsonwebhook_status_update_schema_2 = webhook_status_update_schema_convertToJSON(webhook_status_update_schema_2);
	printf("repeating webhook_status_update_schema:\n%s\n", cJSON_Print(jsonwebhook_status_update_schema_2));
}

int main() {
  test_webhook_status_update_schema(1);
  test_webhook_status_update_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_status_update_schema_MAIN
#endif // webhook_status_update_schema_TEST
