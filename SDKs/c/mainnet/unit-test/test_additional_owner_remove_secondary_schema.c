#ifndef additional_owner_remove_secondary_schema_TEST
#define additional_owner_remove_secondary_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_owner_remove_secondary_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_owner_remove_secondary_schema.h"
additional_owner_remove_secondary_schema_t* instantiate_additional_owner_remove_secondary_schema(int include_optional);



additional_owner_remove_secondary_schema_t* instantiate_additional_owner_remove_secondary_schema(int include_optional) {
  additional_owner_remove_secondary_schema_t* additional_owner_remove_secondary_schema = NULL;
  if (include_optional) {
    additional_owner_remove_secondary_schema = additional_owner_remove_secondary_schema_create(
      "a"
    );
  } else {
    additional_owner_remove_secondary_schema = additional_owner_remove_secondary_schema_create(
      "a"
    );
  }

  return additional_owner_remove_secondary_schema;
}


#ifdef additional_owner_remove_secondary_schema_MAIN

void test_additional_owner_remove_secondary_schema(int include_optional) {
    additional_owner_remove_secondary_schema_t* additional_owner_remove_secondary_schema_1 = instantiate_additional_owner_remove_secondary_schema(include_optional);

	cJSON* jsonadditional_owner_remove_secondary_schema_1 = additional_owner_remove_secondary_schema_convertToJSON(additional_owner_remove_secondary_schema_1);
	printf("additional_owner_remove_secondary_schema :\n%s\n", cJSON_Print(jsonadditional_owner_remove_secondary_schema_1));
	additional_owner_remove_secondary_schema_t* additional_owner_remove_secondary_schema_2 = additional_owner_remove_secondary_schema_parseFromJSON(jsonadditional_owner_remove_secondary_schema_1);
	cJSON* jsonadditional_owner_remove_secondary_schema_2 = additional_owner_remove_secondary_schema_convertToJSON(additional_owner_remove_secondary_schema_2);
	printf("repeating additional_owner_remove_secondary_schema:\n%s\n", cJSON_Print(jsonadditional_owner_remove_secondary_schema_2));
}

int main() {
  test_additional_owner_remove_secondary_schema(1);
  test_additional_owner_remove_secondary_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_owner_remove_secondary_schema_MAIN
#endif // additional_owner_remove_secondary_schema_TEST
