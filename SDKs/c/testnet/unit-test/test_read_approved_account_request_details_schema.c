#ifndef read_approved_account_request_details_schema_TEST
#define read_approved_account_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define read_approved_account_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/read_approved_account_request_details_schema.h"
read_approved_account_request_details_schema_t* instantiate_read_approved_account_request_details_schema(int include_optional);



read_approved_account_request_details_schema_t* instantiate_read_approved_account_request_details_schema(int include_optional) {
  read_approved_account_request_details_schema_t* read_approved_account_request_details_schema = NULL;
  if (include_optional) {
    read_approved_account_request_details_schema = read_approved_account_request_details_schema_create(
      "a",
      "a"
    );
  } else {
    read_approved_account_request_details_schema = read_approved_account_request_details_schema_create(
      "a",
      "a"
    );
  }

  return read_approved_account_request_details_schema;
}


#ifdef read_approved_account_request_details_schema_MAIN

void test_read_approved_account_request_details_schema(int include_optional) {
    read_approved_account_request_details_schema_t* read_approved_account_request_details_schema_1 = instantiate_read_approved_account_request_details_schema(include_optional);

	cJSON* jsonread_approved_account_request_details_schema_1 = read_approved_account_request_details_schema_convertToJSON(read_approved_account_request_details_schema_1);
	printf("read_approved_account_request_details_schema :\n%s\n", cJSON_Print(jsonread_approved_account_request_details_schema_1));
	read_approved_account_request_details_schema_t* read_approved_account_request_details_schema_2 = read_approved_account_request_details_schema_parseFromJSON(jsonread_approved_account_request_details_schema_1);
	cJSON* jsonread_approved_account_request_details_schema_2 = read_approved_account_request_details_schema_convertToJSON(read_approved_account_request_details_schema_2);
	printf("repeating read_approved_account_request_details_schema:\n%s\n", cJSON_Print(jsonread_approved_account_request_details_schema_2));
}

int main() {
  test_read_approved_account_request_details_schema(1);
  test_read_approved_account_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // read_approved_account_request_details_schema_MAIN
#endif // read_approved_account_request_details_schema_TEST
