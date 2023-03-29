#ifndef creator_mint_schema_TEST
#define creator_mint_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creator_mint_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creator_mint_schema.h"
creator_mint_schema_t* instantiate_creator_mint_schema(int include_optional);



creator_mint_schema_t* instantiate_creator_mint_schema(int include_optional) {
  creator_mint_schema_t* creator_mint_schema = NULL;
  if (include_optional) {
    creator_mint_schema = creator_mint_schema_create(
      "a"
    );
  } else {
    creator_mint_schema = creator_mint_schema_create(
      "a"
    );
  }

  return creator_mint_schema;
}


#ifdef creator_mint_schema_MAIN

void test_creator_mint_schema(int include_optional) {
    creator_mint_schema_t* creator_mint_schema_1 = instantiate_creator_mint_schema(include_optional);

	cJSON* jsoncreator_mint_schema_1 = creator_mint_schema_convertToJSON(creator_mint_schema_1);
	printf("creator_mint_schema :\n%s\n", cJSON_Print(jsoncreator_mint_schema_1));
	creator_mint_schema_t* creator_mint_schema_2 = creator_mint_schema_parseFromJSON(jsoncreator_mint_schema_1);
	cJSON* jsoncreator_mint_schema_2 = creator_mint_schema_convertToJSON(creator_mint_schema_2);
	printf("repeating creator_mint_schema:\n%s\n", cJSON_Print(jsoncreator_mint_schema_2));
}

int main() {
  test_creator_mint_schema(1);
  test_creator_mint_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // creator_mint_schema_MAIN
#endif // creator_mint_schema_TEST
