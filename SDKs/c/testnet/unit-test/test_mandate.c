#ifndef mandate_TEST
#define mandate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mandate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mandate.h"
mandate_t* instantiate_mandate(int include_optional);

#include "test_payment.c"


mandate_t* instantiate_mandate(int include_optional) {
  mandate_t* mandate = NULL;
  if (include_optional) {
    mandate = mandate_create(
       // false, not to have infinite recursion
      instantiate_payment(0),
      "0"
    );
  } else {
    mandate = mandate_create(
      NULL,
      "0"
    );
  }

  return mandate;
}


#ifdef mandate_MAIN

void test_mandate(int include_optional) {
    mandate_t* mandate_1 = instantiate_mandate(include_optional);

	cJSON* jsonmandate_1 = mandate_convertToJSON(mandate_1);
	printf("mandate :\n%s\n", cJSON_Print(jsonmandate_1));
	mandate_t* mandate_2 = mandate_parseFromJSON(jsonmandate_1);
	cJSON* jsonmandate_2 = mandate_convertToJSON(mandate_2);
	printf("repeating mandate:\n%s\n", cJSON_Print(jsonmandate_2));
}

int main() {
  test_mandate(1);
  test_mandate(0);

  printf("Hello world \n");
  return 0;
}

#endif // mandate_MAIN
#endif // mandate_TEST
