#ifndef function_dto_TEST
#define function_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define function_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/function_dto.h"
function_dto_t* instantiate_function_dto(int include_optional);



function_dto_t* instantiate_function_dto(int include_optional) {
  function_dto_t* function_dto = NULL;
  if (include_optional) {
    function_dto = function_dto_create(
      "0",
      "0"
    );
  } else {
    function_dto = function_dto_create(
      "0",
      "0"
    );
  }

  return function_dto;
}


#ifdef function_dto_MAIN

void test_function_dto(int include_optional) {
    function_dto_t* function_dto_1 = instantiate_function_dto(include_optional);

	cJSON* jsonfunction_dto_1 = function_dto_convertToJSON(function_dto_1);
	printf("function_dto :\n%s\n", cJSON_Print(jsonfunction_dto_1));
	function_dto_t* function_dto_2 = function_dto_parseFromJSON(jsonfunction_dto_1);
	cJSON* jsonfunction_dto_2 = function_dto_convertToJSON(function_dto_2);
	printf("repeating function_dto:\n%s\n", cJSON_Print(jsonfunction_dto_2));
}

int main() {
  test_function_dto(1);
  test_function_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // function_dto_MAIN
#endif // function_dto_TEST
