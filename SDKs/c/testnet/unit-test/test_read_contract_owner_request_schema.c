#ifndef read_contract_owner_request_schema_TEST
#define read_contract_owner_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define read_contract_owner_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/read_contract_owner_request_schema.h"
read_contract_owner_request_schema_t* instantiate_read_contract_owner_request_schema(int include_optional);

#include "test_read_contract_owner_request_details_schema.c"
#include "test_location.c"


read_contract_owner_request_schema_t* instantiate_read_contract_owner_request_schema(int include_optional) {
  read_contract_owner_request_schema_t* read_contract_owner_request_schema = NULL;
  if (include_optional) {
    read_contract_owner_request_schema = read_contract_owner_request_schema_create(
       // false, not to have infinite recursion
      instantiate_read_contract_owner_request_details_schema(0),
       // false, not to have infinite recursion
      instantiate_location(0)
    );
  } else {
    read_contract_owner_request_schema = read_contract_owner_request_schema_create(
      NULL,
      NULL
    );
  }

  return read_contract_owner_request_schema;
}


#ifdef read_contract_owner_request_schema_MAIN

void test_read_contract_owner_request_schema(int include_optional) {
    read_contract_owner_request_schema_t* read_contract_owner_request_schema_1 = instantiate_read_contract_owner_request_schema(include_optional);

	cJSON* jsonread_contract_owner_request_schema_1 = read_contract_owner_request_schema_convertToJSON(read_contract_owner_request_schema_1);
	printf("read_contract_owner_request_schema :\n%s\n", cJSON_Print(jsonread_contract_owner_request_schema_1));
	read_contract_owner_request_schema_t* read_contract_owner_request_schema_2 = read_contract_owner_request_schema_parseFromJSON(jsonread_contract_owner_request_schema_1);
	cJSON* jsonread_contract_owner_request_schema_2 = read_contract_owner_request_schema_convertToJSON(read_contract_owner_request_schema_2);
	printf("repeating read_contract_owner_request_schema:\n%s\n", cJSON_Print(jsonread_contract_owner_request_schema_2));
}

int main() {
  test_read_contract_owner_request_schema(1);
  test_read_contract_owner_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // read_contract_owner_request_schema_MAIN
#endif // read_contract_owner_request_schema_TEST
