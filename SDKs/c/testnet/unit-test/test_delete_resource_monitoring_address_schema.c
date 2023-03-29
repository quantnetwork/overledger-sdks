#ifndef delete_resource_monitoring_address_schema_TEST
#define delete_resource_monitoring_address_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delete_resource_monitoring_address_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delete_resource_monitoring_address_schema.h"
delete_resource_monitoring_address_schema_t* instantiate_delete_resource_monitoring_address_schema(int include_optional);

#include "test_resource_monitoring_address_details.c"
#include "test_resource_monitoring_details.c"


delete_resource_monitoring_address_schema_t* instantiate_delete_resource_monitoring_address_schema(int include_optional) {
  delete_resource_monitoring_address_schema_t* delete_resource_monitoring_address_schema = NULL;
  if (include_optional) {
    delete_resource_monitoring_address_schema = delete_resource_monitoring_address_schema_create(
       // false, not to have infinite recursion
      instantiate_resource_monitoring_address_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_details(0)
    );
  } else {
    delete_resource_monitoring_address_schema = delete_resource_monitoring_address_schema_create(
      NULL,
      NULL
    );
  }

  return delete_resource_monitoring_address_schema;
}


#ifdef delete_resource_monitoring_address_schema_MAIN

void test_delete_resource_monitoring_address_schema(int include_optional) {
    delete_resource_monitoring_address_schema_t* delete_resource_monitoring_address_schema_1 = instantiate_delete_resource_monitoring_address_schema(include_optional);

	cJSON* jsondelete_resource_monitoring_address_schema_1 = delete_resource_monitoring_address_schema_convertToJSON(delete_resource_monitoring_address_schema_1);
	printf("delete_resource_monitoring_address_schema :\n%s\n", cJSON_Print(jsondelete_resource_monitoring_address_schema_1));
	delete_resource_monitoring_address_schema_t* delete_resource_monitoring_address_schema_2 = delete_resource_monitoring_address_schema_parseFromJSON(jsondelete_resource_monitoring_address_schema_1);
	cJSON* jsondelete_resource_monitoring_address_schema_2 = delete_resource_monitoring_address_schema_convertToJSON(delete_resource_monitoring_address_schema_2);
	printf("repeating delete_resource_monitoring_address_schema:\n%s\n", cJSON_Print(jsondelete_resource_monitoring_address_schema_2));
}

int main() {
  test_delete_resource_monitoring_address_schema(1);
  test_delete_resource_monitoring_address_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // delete_resource_monitoring_address_schema_MAIN
#endif // delete_resource_monitoring_address_schema_TEST
