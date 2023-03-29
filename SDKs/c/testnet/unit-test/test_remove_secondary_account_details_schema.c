#ifndef remove_secondary_account_details_schema_TEST
#define remove_secondary_account_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define remove_secondary_account_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/remove_secondary_account_details_schema.h"
remove_secondary_account_details_schema_t* instantiate_remove_secondary_account_details_schema(int include_optional);

#include "test_owner_remove_secondary_schema.c"
#include "test_additional_owner_remove_secondary_schema.c"


remove_secondary_account_details_schema_t* instantiate_remove_secondary_account_details_schema(int include_optional) {
  remove_secondary_account_details_schema_t* remove_secondary_account_details_schema = NULL;
  if (include_optional) {
    remove_secondary_account_details_schema = remove_secondary_account_details_schema_create(
       // false, not to have infinite recursion
      instantiate_owner_remove_secondary_schema(0),
       // false, not to have infinite recursion
      instantiate_additional_owner_remove_secondary_schema(0),
      "a",
      "a"
    );
  } else {
    remove_secondary_account_details_schema = remove_secondary_account_details_schema_create(
      NULL,
      NULL,
      "a",
      "a"
    );
  }

  return remove_secondary_account_details_schema;
}


#ifdef remove_secondary_account_details_schema_MAIN

void test_remove_secondary_account_details_schema(int include_optional) {
    remove_secondary_account_details_schema_t* remove_secondary_account_details_schema_1 = instantiate_remove_secondary_account_details_schema(include_optional);

	cJSON* jsonremove_secondary_account_details_schema_1 = remove_secondary_account_details_schema_convertToJSON(remove_secondary_account_details_schema_1);
	printf("remove_secondary_account_details_schema :\n%s\n", cJSON_Print(jsonremove_secondary_account_details_schema_1));
	remove_secondary_account_details_schema_t* remove_secondary_account_details_schema_2 = remove_secondary_account_details_schema_parseFromJSON(jsonremove_secondary_account_details_schema_1);
	cJSON* jsonremove_secondary_account_details_schema_2 = remove_secondary_account_details_schema_convertToJSON(remove_secondary_account_details_schema_2);
	printf("repeating remove_secondary_account_details_schema:\n%s\n", cJSON_Print(jsonremove_secondary_account_details_schema_2));
}

int main() {
  test_remove_secondary_account_details_schema(1);
  test_remove_secondary_account_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // remove_secondary_account_details_schema_MAIN
#endif // remove_secondary_account_details_schema_TEST
