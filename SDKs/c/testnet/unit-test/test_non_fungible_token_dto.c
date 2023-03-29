#ifndef non_fungible_token_dto_TEST
#define non_fungible_token_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_fungible_token_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_fungible_token_dto.h"
non_fungible_token_dto_t* instantiate_non_fungible_token_dto(int include_optional);

#include "test_location_dto.c"


non_fungible_token_dto_t* instantiate_non_fungible_token_dto(int include_optional) {
  non_fungible_token_dto_t* non_fungible_token_dto = NULL;
  if (include_optional) {
    non_fungible_token_dto = non_fungible_token_dto_create(
      list_create(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_location_dto(0),
      "0",
      "0",
      "0"
    );
  } else {
    non_fungible_token_dto = non_fungible_token_dto_create(
      list_create(),
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0"
    );
  }

  return non_fungible_token_dto;
}


#ifdef non_fungible_token_dto_MAIN

void test_non_fungible_token_dto(int include_optional) {
    non_fungible_token_dto_t* non_fungible_token_dto_1 = instantiate_non_fungible_token_dto(include_optional);

	cJSON* jsonnon_fungible_token_dto_1 = non_fungible_token_dto_convertToJSON(non_fungible_token_dto_1);
	printf("non_fungible_token_dto :\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_1));
	non_fungible_token_dto_t* non_fungible_token_dto_2 = non_fungible_token_dto_parseFromJSON(jsonnon_fungible_token_dto_1);
	cJSON* jsonnon_fungible_token_dto_2 = non_fungible_token_dto_convertToJSON(non_fungible_token_dto_2);
	printf("repeating non_fungible_token_dto:\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_2));
}

int main() {
  test_non_fungible_token_dto(1);
  test_non_fungible_token_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_fungible_token_dto_MAIN
#endif // non_fungible_token_dto_TEST
