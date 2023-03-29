#ifndef monitor_smart_contract_request_schema_TEST
#define monitor_smart_contract_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define monitor_smart_contract_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/monitor_smart_contract_request_schema.h"
monitor_smart_contract_request_schema_t* instantiate_monitor_smart_contract_request_schema(int include_optional);

#include "test_location.c"


monitor_smart_contract_request_schema_t* instantiate_monitor_smart_contract_request_schema(int include_optional) {
  monitor_smart_contract_request_schema_t* monitor_smart_contract_request_schema = NULL;
  if (include_optional) {
    monitor_smart_contract_request_schema = monitor_smart_contract_request_schema_create(
      list_create(),
      "a",
       // false, not to have infinite recursion
      instantiate_location(0),
      "a",
      "a"
    );
  } else {
    monitor_smart_contract_request_schema = monitor_smart_contract_request_schema_create(
      list_create(),
      "a",
      NULL,
      "a",
      "a"
    );
  }

  return monitor_smart_contract_request_schema;
}


#ifdef monitor_smart_contract_request_schema_MAIN

void test_monitor_smart_contract_request_schema(int include_optional) {
    monitor_smart_contract_request_schema_t* monitor_smart_contract_request_schema_1 = instantiate_monitor_smart_contract_request_schema(include_optional);

	cJSON* jsonmonitor_smart_contract_request_schema_1 = monitor_smart_contract_request_schema_convertToJSON(monitor_smart_contract_request_schema_1);
	printf("monitor_smart_contract_request_schema :\n%s\n", cJSON_Print(jsonmonitor_smart_contract_request_schema_1));
	monitor_smart_contract_request_schema_t* monitor_smart_contract_request_schema_2 = monitor_smart_contract_request_schema_parseFromJSON(jsonmonitor_smart_contract_request_schema_1);
	cJSON* jsonmonitor_smart_contract_request_schema_2 = monitor_smart_contract_request_schema_convertToJSON(monitor_smart_contract_request_schema_2);
	printf("repeating monitor_smart_contract_request_schema:\n%s\n", cJSON_Print(jsonmonitor_smart_contract_request_schema_2));
}

int main() {
  test_monitor_smart_contract_request_schema(1);
  test_monitor_smart_contract_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // monitor_smart_contract_request_schema_MAIN
#endif // monitor_smart_contract_request_schema_TEST
