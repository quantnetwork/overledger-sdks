#ifndef parameter_TEST
#define parameter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define parameter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/parameter.h"
parameter_t* instantiate_parameter(int include_optional);



parameter_t* instantiate_parameter(int include_optional) {
  parameter_t* parameter = NULL;
  if (include_optional) {
    parameter = parameter_create(
      "a",
      0,
      "a"
    );
  } else {
    parameter = parameter_create(
      "a",
      0,
      "a"
    );
  }

  return parameter;
}


#ifdef parameter_MAIN

void test_parameter(int include_optional) {
    parameter_t* parameter_1 = instantiate_parameter(include_optional);

	cJSON* jsonparameter_1 = parameter_convertToJSON(parameter_1);
	printf("parameter :\n%s\n", cJSON_Print(jsonparameter_1));
	parameter_t* parameter_2 = parameter_parseFromJSON(jsonparameter_1);
	cJSON* jsonparameter_2 = parameter_convertToJSON(parameter_2);
	printf("repeating parameter:\n%s\n", cJSON_Print(jsonparameter_2));
}

int main() {
  test_parameter(1);
  test_parameter(0);

  printf("Hello world \n");
  return 0;
}

#endif // parameter_MAIN
#endif // parameter_TEST
