#ifndef fungible_token_response_dto_TEST
#define fungible_token_response_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fungible_token_response_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fungible_token_response_dto.h"
fungible_token_response_dto_t* instantiate_fungible_token_response_dto(int include_optional);

#include "test_location_dto.c"


fungible_token_response_dto_t* instantiate_fungible_token_response_dto(int include_optional) {
  fungible_token_response_dto_t* fungible_token_response_dto = NULL;
  if (include_optional) {
    fungible_token_response_dto = fungible_token_response_dto_create(
      "0",
      "0",
      56,
      list_create(),
      quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_ERC20,
       // false, not to have infinite recursion
      instantiate_location_dto(0),
      "0"
    );
  } else {
    fungible_token_response_dto = fungible_token_response_dto_create(
      "0",
      "0",
      56,
      list_create(),
      quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_ERC20,
      NULL,
      "0"
    );
  }

  return fungible_token_response_dto;
}


#ifdef fungible_token_response_dto_MAIN

void test_fungible_token_response_dto(int include_optional) {
    fungible_token_response_dto_t* fungible_token_response_dto_1 = instantiate_fungible_token_response_dto(include_optional);

	cJSON* jsonfungible_token_response_dto_1 = fungible_token_response_dto_convertToJSON(fungible_token_response_dto_1);
	printf("fungible_token_response_dto :\n%s\n", cJSON_Print(jsonfungible_token_response_dto_1));
	fungible_token_response_dto_t* fungible_token_response_dto_2 = fungible_token_response_dto_parseFromJSON(jsonfungible_token_response_dto_1);
	cJSON* jsonfungible_token_response_dto_2 = fungible_token_response_dto_convertToJSON(fungible_token_response_dto_2);
	printf("repeating fungible_token_response_dto:\n%s\n", cJSON_Print(jsonfungible_token_response_dto_2));
}

int main() {
  test_fungible_token_response_dto(1);
  test_fungible_token_response_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // fungible_token_response_dto_MAIN
#endif // fungible_token_response_dto_TEST
