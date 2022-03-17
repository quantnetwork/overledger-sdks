#ifndef function_TEST
#define function_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define function_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/function.h"
function_t* instantiate_function(int include_optional);



function_t* instantiate_function(int include_optional) {
  function_t* function = NULL;
  if (include_optional) {
    function = function_create(
      "a",
      "a",
      "0",
      list_create(),
      list_create()
    );
  } else {
    function = function_create(
      "a",
      "a",
      "0",
      list_create(),
      list_create()
    );
  }

  return function;
}


#ifdef function_MAIN

void test_function(int include_optional) {
    function_t* function_1 = instantiate_function(include_optional);

	cJSON* jsonfunction_1 = function_convertToJSON(function_1);
	printf("function :\n%s\n", cJSON_Print(jsonfunction_1));
	function_t* function_2 = function_parseFromJSON(jsonfunction_1);
	cJSON* jsonfunction_2 = function_convertToJSON(function_2);
	printf("repeating function:\n%s\n", cJSON_Print(jsonfunction_2));
}

int main() {
  test_function(1);
  test_function(0);

  printf("Hello world \n");
  return 0;
}

#endif // function_MAIN
#endif // function_TEST
