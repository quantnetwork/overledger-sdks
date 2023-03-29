#ifndef auto_exec_search_address_sequence_response_schema_TEST
#define auto_exec_search_address_sequence_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auto_exec_search_address_sequence_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auto_exec_search_address_sequence_response_schema.h"
auto_exec_search_address_sequence_response_schema_t* instantiate_auto_exec_search_address_sequence_response_schema(int include_optional);

#include "test_prepare_and_execute_overledger_error_response.c"
#include "test_execute_search_sequence_response.c"
#include "test_prepare_search_response_schema.c"


auto_exec_search_address_sequence_response_schema_t* instantiate_auto_exec_search_address_sequence_response_schema(int include_optional) {
  auto_exec_search_address_sequence_response_schema_t* auto_exec_search_address_sequence_response_schema = NULL;
  if (include_optional) {
    auto_exec_search_address_sequence_response_schema = auto_exec_search_address_sequence_response_schema_create(
       // false, not to have infinite recursion
      instantiate_prepare_and_execute_overledger_error_response(0),
       // false, not to have infinite recursion
      instantiate_execute_search_sequence_response(0),
       // false, not to have infinite recursion
      instantiate_prepare_search_response_schema(0)
    );
  } else {
    auto_exec_search_address_sequence_response_schema = auto_exec_search_address_sequence_response_schema_create(
      NULL,
      NULL,
      NULL
    );
  }

  return auto_exec_search_address_sequence_response_schema;
}


#ifdef auto_exec_search_address_sequence_response_schema_MAIN

void test_auto_exec_search_address_sequence_response_schema(int include_optional) {
    auto_exec_search_address_sequence_response_schema_t* auto_exec_search_address_sequence_response_schema_1 = instantiate_auto_exec_search_address_sequence_response_schema(include_optional);

	cJSON* jsonauto_exec_search_address_sequence_response_schema_1 = auto_exec_search_address_sequence_response_schema_convertToJSON(auto_exec_search_address_sequence_response_schema_1);
	printf("auto_exec_search_address_sequence_response_schema :\n%s\n", cJSON_Print(jsonauto_exec_search_address_sequence_response_schema_1));
	auto_exec_search_address_sequence_response_schema_t* auto_exec_search_address_sequence_response_schema_2 = auto_exec_search_address_sequence_response_schema_parseFromJSON(jsonauto_exec_search_address_sequence_response_schema_1);
	cJSON* jsonauto_exec_search_address_sequence_response_schema_2 = auto_exec_search_address_sequence_response_schema_convertToJSON(auto_exec_search_address_sequence_response_schema_2);
	printf("repeating auto_exec_search_address_sequence_response_schema:\n%s\n", cJSON_Print(jsonauto_exec_search_address_sequence_response_schema_2));
}

int main() {
  test_auto_exec_search_address_sequence_response_schema(1);
  test_auto_exec_search_address_sequence_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // auto_exec_search_address_sequence_response_schema_MAIN
#endif // auto_exec_search_address_sequence_response_schema_TEST
