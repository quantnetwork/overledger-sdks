#ifndef read_balance_request_details_schema_TEST
#define read_balance_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define read_balance_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/read_balance_request_details_schema.h"
read_balance_request_details_schema_t* instantiate_read_balance_request_details_schema(int include_optional);



read_balance_request_details_schema_t* instantiate_read_balance_request_details_schema(int include_optional) {
  read_balance_request_details_schema_t* read_balance_request_details_schema = NULL;
  if (include_optional) {
    read_balance_request_details_schema = read_balance_request_details_schema_create(
      "a",
      "a"
    );
  } else {
    read_balance_request_details_schema = read_balance_request_details_schema_create(
      "a",
      "a"
    );
  }

  return read_balance_request_details_schema;
}


#ifdef read_balance_request_details_schema_MAIN

void test_read_balance_request_details_schema(int include_optional) {
    read_balance_request_details_schema_t* read_balance_request_details_schema_1 = instantiate_read_balance_request_details_schema(include_optional);

	cJSON* jsonread_balance_request_details_schema_1 = read_balance_request_details_schema_convertToJSON(read_balance_request_details_schema_1);
	printf("read_balance_request_details_schema :\n%s\n", cJSON_Print(jsonread_balance_request_details_schema_1));
	read_balance_request_details_schema_t* read_balance_request_details_schema_2 = read_balance_request_details_schema_parseFromJSON(jsonread_balance_request_details_schema_1);
	cJSON* jsonread_balance_request_details_schema_2 = read_balance_request_details_schema_convertToJSON(read_balance_request_details_schema_2);
	printf("repeating read_balance_request_details_schema:\n%s\n", cJSON_Print(jsonread_balance_request_details_schema_2));
}

int main() {
  test_read_balance_request_details_schema(1);
  test_read_balance_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // read_balance_request_details_schema_MAIN
#endif // read_balance_request_details_schema_TEST
