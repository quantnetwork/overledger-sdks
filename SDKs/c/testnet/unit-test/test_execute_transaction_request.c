#ifndef execute_transaction_request_TEST
#define execute_transaction_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execute_transaction_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execute_transaction_request.h"
execute_transaction_request_t* instantiate_execute_transaction_request(int include_optional);



execute_transaction_request_t* instantiate_execute_transaction_request(int include_optional) {
  execute_transaction_request_t* execute_transaction_request = NULL;
  if (include_optional) {
    execute_transaction_request = execute_transaction_request_create(
      "a",
      "a"
    );
  } else {
    execute_transaction_request = execute_transaction_request_create(
      "a",
      "a"
    );
  }

  return execute_transaction_request;
}


#ifdef execute_transaction_request_MAIN

void test_execute_transaction_request(int include_optional) {
    execute_transaction_request_t* execute_transaction_request_1 = instantiate_execute_transaction_request(include_optional);

	cJSON* jsonexecute_transaction_request_1 = execute_transaction_request_convertToJSON(execute_transaction_request_1);
	printf("execute_transaction_request :\n%s\n", cJSON_Print(jsonexecute_transaction_request_1));
	execute_transaction_request_t* execute_transaction_request_2 = execute_transaction_request_parseFromJSON(jsonexecute_transaction_request_1);
	cJSON* jsonexecute_transaction_request_2 = execute_transaction_request_convertToJSON(execute_transaction_request_2);
	printf("repeating execute_transaction_request:\n%s\n", cJSON_Print(jsonexecute_transaction_request_2));
}

int main() {
  test_execute_transaction_request(1);
  test_execute_transaction_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // execute_transaction_request_MAIN
#endif // execute_transaction_request_TEST
