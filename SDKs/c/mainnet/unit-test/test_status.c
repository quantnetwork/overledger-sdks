#ifndef status_TEST
#define status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status.h"
status_t* instantiate_status(int include_optional);



status_t* instantiate_status(int include_optional) {
  status_t* status = NULL;
  if (include_optional) {
    status = status_create(
      "a",
      "a",
      "a",
      "a",
      "0"
    );
  } else {
    status = status_create(
      "a",
      "a",
      "a",
      "a",
      "0"
    );
  }

  return status;
}


#ifdef status_MAIN

void test_status(int include_optional) {
    status_t* status_1 = instantiate_status(include_optional);

	cJSON* jsonstatus_1 = status_convertToJSON(status_1);
	printf("status :\n%s\n", cJSON_Print(jsonstatus_1));
	status_t* status_2 = status_parseFromJSON(jsonstatus_1);
	cJSON* jsonstatus_2 = status_convertToJSON(status_2);
	printf("repeating status:\n%s\n", cJSON_Print(jsonstatus_2));
}

int main() {
  test_status(1);
  test_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_MAIN
#endif // status_TEST
