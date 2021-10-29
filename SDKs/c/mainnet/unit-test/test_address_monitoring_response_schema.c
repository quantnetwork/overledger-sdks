#ifndef address_monitoring_response_schema_TEST
#define address_monitoring_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_monitoring_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_monitoring_response_schema.h"
address_monitoring_response_schema_t* instantiate_address_monitoring_response_schema(int include_optional);

#include "test_resource_monitoring_subscription_details.c"
#include "test_resource_monitoring_details.c"
#include "test_resource_monitoring_subscription.c"


address_monitoring_response_schema_t* instantiate_address_monitoring_response_schema(int include_optional) {
  address_monitoring_response_schema_t* address_monitoring_response_schema = NULL;
  if (include_optional) {
    address_monitoring_response_schema = address_monitoring_response_schema_create(
       // false, not to have infinite recursion
      instantiate_resource_monitoring_subscription_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_subscription(0)
    );
  } else {
    address_monitoring_response_schema = address_monitoring_response_schema_create(
      NULL,
      NULL,
      NULL
    );
  }

  return address_monitoring_response_schema;
}


#ifdef address_monitoring_response_schema_MAIN

void test_address_monitoring_response_schema(int include_optional) {
    address_monitoring_response_schema_t* address_monitoring_response_schema_1 = instantiate_address_monitoring_response_schema(include_optional);

	cJSON* jsonaddress_monitoring_response_schema_1 = address_monitoring_response_schema_convertToJSON(address_monitoring_response_schema_1);
	printf("address_monitoring_response_schema :\n%s\n", cJSON_Print(jsonaddress_monitoring_response_schema_1));
	address_monitoring_response_schema_t* address_monitoring_response_schema_2 = address_monitoring_response_schema_parseFromJSON(jsonaddress_monitoring_response_schema_1);
	cJSON* jsonaddress_monitoring_response_schema_2 = address_monitoring_response_schema_convertToJSON(address_monitoring_response_schema_2);
	printf("repeating address_monitoring_response_schema:\n%s\n", cJSON_Print(jsonaddress_monitoring_response_schema_2));
}

int main() {
  test_address_monitoring_response_schema(1);
  test_address_monitoring_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_monitoring_response_schema_MAIN
#endif // address_monitoring_response_schema_TEST
