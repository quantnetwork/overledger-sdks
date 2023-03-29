#ifndef owner_burn_schema_TEST
#define owner_burn_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define owner_burn_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/owner_burn_schema.h"
owner_burn_schema_t* instantiate_owner_burn_schema(int include_optional);

#include "test_burn_schema.c"


owner_burn_schema_t* instantiate_owner_burn_schema(int include_optional) {
  owner_burn_schema_t* owner_burn_schema = NULL;
  if (include_optional) {
    owner_burn_schema = owner_burn_schema_create(
      "a",
       // false, not to have infinite recursion
      instantiate_burn_schema(0)
    );
  } else {
    owner_burn_schema = owner_burn_schema_create(
      "a",
      NULL
    );
  }

  return owner_burn_schema;
}


#ifdef owner_burn_schema_MAIN

void test_owner_burn_schema(int include_optional) {
    owner_burn_schema_t* owner_burn_schema_1 = instantiate_owner_burn_schema(include_optional);

	cJSON* jsonowner_burn_schema_1 = owner_burn_schema_convertToJSON(owner_burn_schema_1);
	printf("owner_burn_schema :\n%s\n", cJSON_Print(jsonowner_burn_schema_1));
	owner_burn_schema_t* owner_burn_schema_2 = owner_burn_schema_parseFromJSON(jsonowner_burn_schema_1);
	cJSON* jsonowner_burn_schema_2 = owner_burn_schema_convertToJSON(owner_burn_schema_2);
	printf("repeating owner_burn_schema:\n%s\n", cJSON_Print(jsonowner_burn_schema_2));
}

int main() {
  test_owner_burn_schema(1);
  test_owner_burn_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // owner_burn_schema_MAIN
#endif // owner_burn_schema_TEST
