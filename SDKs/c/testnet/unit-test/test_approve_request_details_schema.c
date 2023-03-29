#ifndef approve_request_details_schema_TEST
#define approve_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define approve_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/approve_request_details_schema.h"
approve_request_details_schema_t* instantiate_approve_request_details_schema(int include_optional);



approve_request_details_schema_t* instantiate_approve_request_details_schema(int include_optional) {
  approve_request_details_schema_t* approve_request_details_schema = NULL;
  if (include_optional) {
    approve_request_details_schema = approve_request_details_schema_create(
      list_create(),
      list_create(),
      "a"
    );
  } else {
    approve_request_details_schema = approve_request_details_schema_create(
      list_create(),
      list_create(),
      "a"
    );
  }

  return approve_request_details_schema;
}


#ifdef approve_request_details_schema_MAIN

void test_approve_request_details_schema(int include_optional) {
    approve_request_details_schema_t* approve_request_details_schema_1 = instantiate_approve_request_details_schema(include_optional);

	cJSON* jsonapprove_request_details_schema_1 = approve_request_details_schema_convertToJSON(approve_request_details_schema_1);
	printf("approve_request_details_schema :\n%s\n", cJSON_Print(jsonapprove_request_details_schema_1));
	approve_request_details_schema_t* approve_request_details_schema_2 = approve_request_details_schema_parseFromJSON(jsonapprove_request_details_schema_1);
	cJSON* jsonapprove_request_details_schema_2 = approve_request_details_schema_convertToJSON(approve_request_details_schema_2);
	printf("repeating approve_request_details_schema:\n%s\n", cJSON_Print(jsonapprove_request_details_schema_2));
}

int main() {
  test_approve_request_details_schema(1);
  test_approve_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // approve_request_details_schema_MAIN
#endif // approve_request_details_schema_TEST
