#ifndef secondary_account_owner_schema_TEST
#define secondary_account_owner_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secondary_account_owner_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secondary_account_owner_schema.h"
secondary_account_owner_schema_t* instantiate_secondary_account_owner_schema(int include_optional);



secondary_account_owner_schema_t* instantiate_secondary_account_owner_schema(int include_optional) {
  secondary_account_owner_schema_t* secondary_account_owner_schema = NULL;
  if (include_optional) {
    secondary_account_owner_schema = secondary_account_owner_schema_create(
      "a",
      "0"
    );
  } else {
    secondary_account_owner_schema = secondary_account_owner_schema_create(
      "a",
      "0"
    );
  }

  return secondary_account_owner_schema;
}


#ifdef secondary_account_owner_schema_MAIN

void test_secondary_account_owner_schema(int include_optional) {
    secondary_account_owner_schema_t* secondary_account_owner_schema_1 = instantiate_secondary_account_owner_schema(include_optional);

	cJSON* jsonsecondary_account_owner_schema_1 = secondary_account_owner_schema_convertToJSON(secondary_account_owner_schema_1);
	printf("secondary_account_owner_schema :\n%s\n", cJSON_Print(jsonsecondary_account_owner_schema_1));
	secondary_account_owner_schema_t* secondary_account_owner_schema_2 = secondary_account_owner_schema_parseFromJSON(jsonsecondary_account_owner_schema_1);
	cJSON* jsonsecondary_account_owner_schema_2 = secondary_account_owner_schema_convertToJSON(secondary_account_owner_schema_2);
	printf("repeating secondary_account_owner_schema:\n%s\n", cJSON_Print(jsonsecondary_account_owner_schema_2));
}

int main() {
  test_secondary_account_owner_schema(1);
  test_secondary_account_owner_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // secondary_account_owner_schema_MAIN
#endif // secondary_account_owner_schema_TEST
