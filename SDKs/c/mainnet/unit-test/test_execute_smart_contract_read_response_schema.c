#ifndef execute_smart_contract_read_response_schema_TEST
#define execute_smart_contract_read_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execute_smart_contract_read_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execute_smart_contract_read_response_schema.h"
execute_smart_contract_read_response_schema_t* instantiate_execute_smart_contract_read_response_schema(int include_optional);

#include "test_smart_contract_read_schema.c"
#include "test_location.c"


execute_smart_contract_read_response_schema_t* instantiate_execute_smart_contract_read_response_schema(int include_optional) {
  execute_smart_contract_read_response_schema_t* execute_smart_contract_read_response_schema = NULL;
  if (include_optional) {
    execute_smart_contract_read_response_schema = execute_smart_contract_read_response_schema_create(
       // false, not to have infinite recursion
      instantiate_smart_contract_read_schema(0),
       // false, not to have infinite recursion
      instantiate_location(0)
    );
  } else {
    execute_smart_contract_read_response_schema = execute_smart_contract_read_response_schema_create(
      NULL,
      NULL
    );
  }

  return execute_smart_contract_read_response_schema;
}


#ifdef execute_smart_contract_read_response_schema_MAIN

void test_execute_smart_contract_read_response_schema(int include_optional) {
    execute_smart_contract_read_response_schema_t* execute_smart_contract_read_response_schema_1 = instantiate_execute_smart_contract_read_response_schema(include_optional);

	cJSON* jsonexecute_smart_contract_read_response_schema_1 = execute_smart_contract_read_response_schema_convertToJSON(execute_smart_contract_read_response_schema_1);
	printf("execute_smart_contract_read_response_schema :\n%s\n", cJSON_Print(jsonexecute_smart_contract_read_response_schema_1));
	execute_smart_contract_read_response_schema_t* execute_smart_contract_read_response_schema_2 = execute_smart_contract_read_response_schema_parseFromJSON(jsonexecute_smart_contract_read_response_schema_1);
	cJSON* jsonexecute_smart_contract_read_response_schema_2 = execute_smart_contract_read_response_schema_convertToJSON(execute_smart_contract_read_response_schema_2);
	printf("repeating execute_smart_contract_read_response_schema:\n%s\n", cJSON_Print(jsonexecute_smart_contract_read_response_schema_2));
}

int main() {
  test_execute_smart_contract_read_response_schema(1);
  test_execute_smart_contract_read_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // execute_smart_contract_read_response_schema_MAIN
#endif // execute_smart_contract_read_response_schema_TEST
