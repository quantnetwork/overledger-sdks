#ifndef add_secondary_account_request_details_schema_TEST
#define add_secondary_account_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define add_secondary_account_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/add_secondary_account_request_details_schema.h"
add_secondary_account_request_details_schema_t* instantiate_add_secondary_account_request_details_schema(int include_optional);

#include "test_secondary_account_owner_schema.c"
#include "test_secondary_account_additional_owner_schema.c"


add_secondary_account_request_details_schema_t* instantiate_add_secondary_account_request_details_schema(int include_optional) {
  add_secondary_account_request_details_schema_t* add_secondary_account_request_details_schema = NULL;
  if (include_optional) {
    add_secondary_account_request_details_schema = add_secondary_account_request_details_schema_create(
       // false, not to have infinite recursion
      instantiate_secondary_account_owner_schema(0),
       // false, not to have infinite recursion
      instantiate_secondary_account_additional_owner_schema(0)
    );
  } else {
    add_secondary_account_request_details_schema = add_secondary_account_request_details_schema_create(
      NULL,
      NULL
    );
  }

  return add_secondary_account_request_details_schema;
}


#ifdef add_secondary_account_request_details_schema_MAIN

void test_add_secondary_account_request_details_schema(int include_optional) {
    add_secondary_account_request_details_schema_t* add_secondary_account_request_details_schema_1 = instantiate_add_secondary_account_request_details_schema(include_optional);

	cJSON* jsonadd_secondary_account_request_details_schema_1 = add_secondary_account_request_details_schema_convertToJSON(add_secondary_account_request_details_schema_1);
	printf("add_secondary_account_request_details_schema :\n%s\n", cJSON_Print(jsonadd_secondary_account_request_details_schema_1));
	add_secondary_account_request_details_schema_t* add_secondary_account_request_details_schema_2 = add_secondary_account_request_details_schema_parseFromJSON(jsonadd_secondary_account_request_details_schema_1);
	cJSON* jsonadd_secondary_account_request_details_schema_2 = add_secondary_account_request_details_schema_convertToJSON(add_secondary_account_request_details_schema_2);
	printf("repeating add_secondary_account_request_details_schema:\n%s\n", cJSON_Print(jsonadd_secondary_account_request_details_schema_2));
}

int main() {
  test_add_secondary_account_request_details_schema(1);
  test_add_secondary_account_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // add_secondary_account_request_details_schema_MAIN
#endif // add_secondary_account_request_details_schema_TEST
