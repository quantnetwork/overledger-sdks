#ifndef status_update_schema_TEST
#define status_update_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_update_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_update_schema.h"
status_update_schema_t* instantiate_status_update_schema(int include_optional);



status_update_schema_t* instantiate_status_update_schema(int include_optional) {
  status_update_schema_t* status_update_schema = NULL;
  if (include_optional) {
    status_update_schema = status_update_schema_create(
      "a"
    );
  } else {
    status_update_schema = status_update_schema_create(
      "a"
    );
  }

  return status_update_schema;
}


#ifdef status_update_schema_MAIN

void test_status_update_schema(int include_optional) {
    status_update_schema_t* status_update_schema_1 = instantiate_status_update_schema(include_optional);

	cJSON* jsonstatus_update_schema_1 = status_update_schema_convertToJSON(status_update_schema_1);
	printf("status_update_schema :\n%s\n", cJSON_Print(jsonstatus_update_schema_1));
	status_update_schema_t* status_update_schema_2 = status_update_schema_parseFromJSON(jsonstatus_update_schema_1);
	cJSON* jsonstatus_update_schema_2 = status_update_schema_convertToJSON(status_update_schema_2);
	printf("repeating status_update_schema:\n%s\n", cJSON_Print(jsonstatus_update_schema_2));
}

int main() {
  test_status_update_schema(1);
  test_status_update_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_update_schema_MAIN
#endif // status_update_schema_TEST
