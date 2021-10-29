#ifndef execute_search_transaction_response_TEST
#define execute_search_transaction_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execute_search_transaction_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execute_search_transaction_response.h"
execute_search_transaction_response_t* instantiate_execute_search_transaction_response(int include_optional);

#include "test_location.c"
#include "test_transaction.c"
#include "test_status.c"


execute_search_transaction_response_t* instantiate_execute_search_transaction_response(int include_optional) {
  execute_search_transaction_response_t* execute_search_transaction_response = NULL;
  if (include_optional) {
    execute_search_transaction_response = execute_search_transaction_response_create(
       // false, not to have infinite recursion
      instantiate_location(0),
      "a",
       // false, not to have infinite recursion
      instantiate_transaction(0),
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_status(0),
      0
    );
  } else {
    execute_search_transaction_response = execute_search_transaction_response_create(
      NULL,
      "a",
      NULL,
      "2013-10-20T19:20:30+01:00",
      NULL,
      0
    );
  }

  return execute_search_transaction_response;
}


#ifdef execute_search_transaction_response_MAIN

void test_execute_search_transaction_response(int include_optional) {
    execute_search_transaction_response_t* execute_search_transaction_response_1 = instantiate_execute_search_transaction_response(include_optional);

	cJSON* jsonexecute_search_transaction_response_1 = execute_search_transaction_response_convertToJSON(execute_search_transaction_response_1);
	printf("execute_search_transaction_response :\n%s\n", cJSON_Print(jsonexecute_search_transaction_response_1));
	execute_search_transaction_response_t* execute_search_transaction_response_2 = execute_search_transaction_response_parseFromJSON(jsonexecute_search_transaction_response_1);
	cJSON* jsonexecute_search_transaction_response_2 = execute_search_transaction_response_convertToJSON(execute_search_transaction_response_2);
	printf("repeating execute_search_transaction_response:\n%s\n", cJSON_Print(jsonexecute_search_transaction_response_2));
}

int main() {
  test_execute_search_transaction_response(1);
  test_execute_search_transaction_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // execute_search_transaction_response_MAIN
#endif // execute_search_transaction_response_TEST
