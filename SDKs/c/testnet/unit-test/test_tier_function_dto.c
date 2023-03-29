#ifndef tier_function_dto_TEST
#define tier_function_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tier_function_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tier_function_dto.h"
tier_function_dto_t* instantiate_tier_function_dto(int include_optional);



tier_function_dto_t* instantiate_tier_function_dto(int include_optional) {
  tier_function_dto_t* tier_function_dto = NULL;
  if (include_optional) {
    tier_function_dto = tier_function_dto_create(
      "0",
      "0"
    );
  } else {
    tier_function_dto = tier_function_dto_create(
      "0",
      "0"
    );
  }

  return tier_function_dto;
}


#ifdef tier_function_dto_MAIN

void test_tier_function_dto(int include_optional) {
    tier_function_dto_t* tier_function_dto_1 = instantiate_tier_function_dto(include_optional);

	cJSON* jsontier_function_dto_1 = tier_function_dto_convertToJSON(tier_function_dto_1);
	printf("tier_function_dto :\n%s\n", cJSON_Print(jsontier_function_dto_1));
	tier_function_dto_t* tier_function_dto_2 = tier_function_dto_parseFromJSON(jsontier_function_dto_1);
	cJSON* jsontier_function_dto_2 = tier_function_dto_convertToJSON(tier_function_dto_2);
	printf("repeating tier_function_dto:\n%s\n", cJSON_Print(jsontier_function_dto_2));
}

int main() {
  test_tier_function_dto(1);
  test_tier_function_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tier_function_dto_MAIN
#endif // tier_function_dto_TEST
