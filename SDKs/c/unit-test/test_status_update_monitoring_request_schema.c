#ifndef status_update_monitoring_request_schema_TEST
#define status_update_monitoring_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_update_monitoring_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_update_monitoring_request_schema.h"
status_update_monitoring_request_schema_t* instantiate_status_update_monitoring_request_schema(int include_optional);

#include "test_status_update_schema.c"


status_update_monitoring_request_schema_t* instantiate_status_update_monitoring_request_schema(int include_optional) {
  status_update_monitoring_request_schema_t* status_update_monitoring_request_schema = NULL;
  if (include_optional) {
    status_update_monitoring_request_schema = status_update_monitoring_request_schema_create(
       // false, not to have infinite recursion
      instantiate_status_update_schema(0)
    );
  } else {
    status_update_monitoring_request_schema = status_update_monitoring_request_schema_create(
      NULL
    );
  }

  return status_update_monitoring_request_schema;
}


#ifdef status_update_monitoring_request_schema_MAIN

void test_status_update_monitoring_request_schema(int include_optional) {
    status_update_monitoring_request_schema_t* status_update_monitoring_request_schema_1 = instantiate_status_update_monitoring_request_schema(include_optional);

	cJSON* jsonstatus_update_monitoring_request_schema_1 = status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema_1);
	printf("status_update_monitoring_request_schema :\n%s\n", cJSON_Print(jsonstatus_update_monitoring_request_schema_1));
	status_update_monitoring_request_schema_t* status_update_monitoring_request_schema_2 = status_update_monitoring_request_schema_parseFromJSON(jsonstatus_update_monitoring_request_schema_1);
	cJSON* jsonstatus_update_monitoring_request_schema_2 = status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema_2);
	printf("repeating status_update_monitoring_request_schema:\n%s\n", cJSON_Print(jsonstatus_update_monitoring_request_schema_2));
}

int main() {
  test_status_update_monitoring_request_schema(1);
  test_status_update_monitoring_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_update_monitoring_request_schema_MAIN
#endif // status_update_monitoring_request_schema_TEST
