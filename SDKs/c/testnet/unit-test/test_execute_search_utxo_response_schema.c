#ifndef execute_search_utxo_response_schema_TEST
#define execute_search_utxo_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execute_search_utxo_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execute_search_utxo_response_schema.h"
execute_search_utxo_response_schema_t* instantiate_execute_search_utxo_response_schema(int include_optional);

#include "test_location.c"
#include "test_status.c"
#include "test_utxo_native_data.c"


execute_search_utxo_response_schema_t* instantiate_execute_search_utxo_response_schema(int include_optional) {
  execute_search_utxo_response_schema_t* execute_search_utxo_response_schema = NULL;
  if (include_optional) {
    execute_search_utxo_response_schema = execute_search_utxo_response_schema_create(
      "0",
      list_create(),
       // false, not to have infinite recursion
      instantiate_location(0),
      "0",
       // false, not to have infinite recursion
      instantiate_status(0),
       // false, not to have infinite recursion
      instantiate_utxo_native_data(0)
    );
  } else {
    execute_search_utxo_response_schema = execute_search_utxo_response_schema_create(
      "0",
      list_create(),
      NULL,
      "0",
      NULL,
      NULL
    );
  }

  return execute_search_utxo_response_schema;
}


#ifdef execute_search_utxo_response_schema_MAIN

void test_execute_search_utxo_response_schema(int include_optional) {
    execute_search_utxo_response_schema_t* execute_search_utxo_response_schema_1 = instantiate_execute_search_utxo_response_schema(include_optional);

	cJSON* jsonexecute_search_utxo_response_schema_1 = execute_search_utxo_response_schema_convertToJSON(execute_search_utxo_response_schema_1);
	printf("execute_search_utxo_response_schema :\n%s\n", cJSON_Print(jsonexecute_search_utxo_response_schema_1));
	execute_search_utxo_response_schema_t* execute_search_utxo_response_schema_2 = execute_search_utxo_response_schema_parseFromJSON(jsonexecute_search_utxo_response_schema_1);
	cJSON* jsonexecute_search_utxo_response_schema_2 = execute_search_utxo_response_schema_convertToJSON(execute_search_utxo_response_schema_2);
	printf("repeating execute_search_utxo_response_schema:\n%s\n", cJSON_Print(jsonexecute_search_utxo_response_schema_2));
}

int main() {
  test_execute_search_utxo_response_schema(1);
  test_execute_search_utxo_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // execute_search_utxo_response_schema_MAIN
#endif // execute_search_utxo_response_schema_TEST
