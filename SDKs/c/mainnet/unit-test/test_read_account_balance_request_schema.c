#ifndef read_account_balance_request_schema_TEST
#define read_account_balance_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define read_account_balance_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/read_account_balance_request_schema.h"
read_account_balance_request_schema_t* instantiate_read_account_balance_request_schema(int include_optional);

#include "test_location.c"


read_account_balance_request_schema_t* instantiate_read_account_balance_request_schema(int include_optional) {
  read_account_balance_request_schema_t* read_account_balance_request_schema = NULL;
  if (include_optional) {
    read_account_balance_request_schema = read_account_balance_request_schema_create(
      0,
       // false, not to have infinite recursion
      instantiate_location(0)
    );
  } else {
    read_account_balance_request_schema = read_account_balance_request_schema_create(
      0,
      NULL
    );
  }

  return read_account_balance_request_schema;
}


#ifdef read_account_balance_request_schema_MAIN

void test_read_account_balance_request_schema(int include_optional) {
    read_account_balance_request_schema_t* read_account_balance_request_schema_1 = instantiate_read_account_balance_request_schema(include_optional);

	cJSON* jsonread_account_balance_request_schema_1 = read_account_balance_request_schema_convertToJSON(read_account_balance_request_schema_1);
	printf("read_account_balance_request_schema :\n%s\n", cJSON_Print(jsonread_account_balance_request_schema_1));
	read_account_balance_request_schema_t* read_account_balance_request_schema_2 = read_account_balance_request_schema_parseFromJSON(jsonread_account_balance_request_schema_1);
	cJSON* jsonread_account_balance_request_schema_2 = read_account_balance_request_schema_convertToJSON(read_account_balance_request_schema_2);
	printf("repeating read_account_balance_request_schema:\n%s\n", cJSON_Print(jsonread_account_balance_request_schema_2));
}

int main() {
  test_read_account_balance_request_schema(1);
  test_read_account_balance_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // read_account_balance_request_schema_MAIN
#endif // read_account_balance_request_schema_TEST
