#ifndef update_address_monitoring_schema_TEST
#define update_address_monitoring_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_address_monitoring_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_address_monitoring_schema.h"
update_address_monitoring_schema_t* instantiate_update_address_monitoring_schema(int include_optional);

#include "test_resource_monitoring_address_details.c"
#include "test_resource_monitoring_details.c"


update_address_monitoring_schema_t* instantiate_update_address_monitoring_schema(int include_optional) {
  update_address_monitoring_schema_t* update_address_monitoring_schema = NULL;
  if (include_optional) {
    update_address_monitoring_schema = update_address_monitoring_schema_create(
       // false, not to have infinite recursion
      instantiate_resource_monitoring_address_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_details(0)
    );
  } else {
    update_address_monitoring_schema = update_address_monitoring_schema_create(
      NULL,
      NULL
    );
  }

  return update_address_monitoring_schema;
}


#ifdef update_address_monitoring_schema_MAIN

void test_update_address_monitoring_schema(int include_optional) {
    update_address_monitoring_schema_t* update_address_monitoring_schema_1 = instantiate_update_address_monitoring_schema(include_optional);

	cJSON* jsonupdate_address_monitoring_schema_1 = update_address_monitoring_schema_convertToJSON(update_address_monitoring_schema_1);
	printf("update_address_monitoring_schema :\n%s\n", cJSON_Print(jsonupdate_address_monitoring_schema_1));
	update_address_monitoring_schema_t* update_address_monitoring_schema_2 = update_address_monitoring_schema_parseFromJSON(jsonupdate_address_monitoring_schema_1);
	cJSON* jsonupdate_address_monitoring_schema_2 = update_address_monitoring_schema_convertToJSON(update_address_monitoring_schema_2);
	printf("repeating update_address_monitoring_schema:\n%s\n", cJSON_Print(jsonupdate_address_monitoring_schema_2));
}

int main() {
  test_update_address_monitoring_schema(1);
  test_update_address_monitoring_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_address_monitoring_schema_MAIN
#endif // update_address_monitoring_schema_TEST
