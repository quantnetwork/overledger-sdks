#ifndef resource_monitoring_address_schema_TEST
#define resource_monitoring_address_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_monitoring_address_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_monitoring_address_schema.h"
resource_monitoring_address_schema_t* instantiate_resource_monitoring_address_schema(int include_optional);

#include "test_resource_monitoring_address_details.c"
#include "test_resource_monitoring_details.c"


resource_monitoring_address_schema_t* instantiate_resource_monitoring_address_schema(int include_optional) {
  resource_monitoring_address_schema_t* resource_monitoring_address_schema = NULL;
  if (include_optional) {
    resource_monitoring_address_schema = resource_monitoring_address_schema_create(
       // false, not to have infinite recursion
      instantiate_resource_monitoring_address_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_details(0)
    );
  } else {
    resource_monitoring_address_schema = resource_monitoring_address_schema_create(
      NULL,
      NULL
    );
  }

  return resource_monitoring_address_schema;
}


#ifdef resource_monitoring_address_schema_MAIN

void test_resource_monitoring_address_schema(int include_optional) {
    resource_monitoring_address_schema_t* resource_monitoring_address_schema_1 = instantiate_resource_monitoring_address_schema(include_optional);

	cJSON* jsonresource_monitoring_address_schema_1 = resource_monitoring_address_schema_convertToJSON(resource_monitoring_address_schema_1);
	printf("resource_monitoring_address_schema :\n%s\n", cJSON_Print(jsonresource_monitoring_address_schema_1));
	resource_monitoring_address_schema_t* resource_monitoring_address_schema_2 = resource_monitoring_address_schema_parseFromJSON(jsonresource_monitoring_address_schema_1);
	cJSON* jsonresource_monitoring_address_schema_2 = resource_monitoring_address_schema_convertToJSON(resource_monitoring_address_schema_2);
	printf("repeating resource_monitoring_address_schema:\n%s\n", cJSON_Print(jsonresource_monitoring_address_schema_2));
}

int main() {
  test_resource_monitoring_address_schema(1);
  test_resource_monitoring_address_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_monitoring_address_schema_MAIN
#endif // resource_monitoring_address_schema_TEST
