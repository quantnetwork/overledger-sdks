#ifndef owner_remove_secondary_schema_TEST
#define owner_remove_secondary_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define owner_remove_secondary_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/owner_remove_secondary_schema.h"
owner_remove_secondary_schema_t* instantiate_owner_remove_secondary_schema(int include_optional);



owner_remove_secondary_schema_t* instantiate_owner_remove_secondary_schema(int include_optional) {
  owner_remove_secondary_schema_t* owner_remove_secondary_schema = NULL;
  if (include_optional) {
    owner_remove_secondary_schema = owner_remove_secondary_schema_create(
      "a",
      "a"
    );
  } else {
    owner_remove_secondary_schema = owner_remove_secondary_schema_create(
      "a",
      "a"
    );
  }

  return owner_remove_secondary_schema;
}


#ifdef owner_remove_secondary_schema_MAIN

void test_owner_remove_secondary_schema(int include_optional) {
    owner_remove_secondary_schema_t* owner_remove_secondary_schema_1 = instantiate_owner_remove_secondary_schema(include_optional);

	cJSON* jsonowner_remove_secondary_schema_1 = owner_remove_secondary_schema_convertToJSON(owner_remove_secondary_schema_1);
	printf("owner_remove_secondary_schema :\n%s\n", cJSON_Print(jsonowner_remove_secondary_schema_1));
	owner_remove_secondary_schema_t* owner_remove_secondary_schema_2 = owner_remove_secondary_schema_parseFromJSON(jsonowner_remove_secondary_schema_1);
	cJSON* jsonowner_remove_secondary_schema_2 = owner_remove_secondary_schema_convertToJSON(owner_remove_secondary_schema_2);
	printf("repeating owner_remove_secondary_schema:\n%s\n", cJSON_Print(jsonowner_remove_secondary_schema_2));
}

int main() {
  test_owner_remove_secondary_schema(1);
  test_owner_remove_secondary_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // owner_remove_secondary_schema_MAIN
#endif // owner_remove_secondary_schema_TEST
