#ifndef erc20_dto_TEST
#define erc20_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define erc20_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/erc20_dto.h"
erc20_dto_t* instantiate_erc20_dto(int include_optional);

#include "test_location_dto.c"


erc20_dto_t* instantiate_erc20_dto(int include_optional) {
  erc20_dto_t* erc20_dto = NULL;
  if (include_optional) {
    erc20_dto = erc20_dto_create(
      1,
      "0",
      56,
      list_create(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_location_dto(0),
      "0",
      "0",
      "2013-10-20"
    );
  } else {
    erc20_dto = erc20_dto_create(
      1,
      "0",
      56,
      list_create(),
      "0",
      "0",
      NULL,
      "0",
      "0",
      "2013-10-20"
    );
  }

  return erc20_dto;
}


#ifdef erc20_dto_MAIN

void test_erc20_dto(int include_optional) {
    erc20_dto_t* erc20_dto_1 = instantiate_erc20_dto(include_optional);

	cJSON* jsonerc20_dto_1 = erc20_dto_convertToJSON(erc20_dto_1);
	printf("erc20_dto :\n%s\n", cJSON_Print(jsonerc20_dto_1));
	erc20_dto_t* erc20_dto_2 = erc20_dto_parseFromJSON(jsonerc20_dto_1);
	cJSON* jsonerc20_dto_2 = erc20_dto_convertToJSON(erc20_dto_2);
	printf("repeating erc20_dto:\n%s\n", cJSON_Print(jsonerc20_dto_2));
}

int main() {
  test_erc20_dto(1);
  test_erc20_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // erc20_dto_MAIN
#endif // erc20_dto_TEST
