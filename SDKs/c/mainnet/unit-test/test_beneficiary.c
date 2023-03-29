#ifndef beneficiary_TEST
#define beneficiary_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define beneficiary_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/beneficiary.h"
beneficiary_t* instantiate_beneficiary(int include_optional);

#include "test_mint.c"


beneficiary_t* instantiate_beneficiary(int include_optional) {
  beneficiary_t* beneficiary = NULL;
  if (include_optional) {
    beneficiary = beneficiary_create(
      "0",
       // false, not to have infinite recursion
      instantiate_mint(0)
    );
  } else {
    beneficiary = beneficiary_create(
      "0",
      NULL
    );
  }

  return beneficiary;
}


#ifdef beneficiary_MAIN

void test_beneficiary(int include_optional) {
    beneficiary_t* beneficiary_1 = instantiate_beneficiary(include_optional);

	cJSON* jsonbeneficiary_1 = beneficiary_convertToJSON(beneficiary_1);
	printf("beneficiary :\n%s\n", cJSON_Print(jsonbeneficiary_1));
	beneficiary_t* beneficiary_2 = beneficiary_parseFromJSON(jsonbeneficiary_1);
	cJSON* jsonbeneficiary_2 = beneficiary_convertToJSON(beneficiary_2);
	printf("repeating beneficiary:\n%s\n", cJSON_Print(jsonbeneficiary_2));
}

int main() {
  test_beneficiary(1);
  test_beneficiary(0);

  printf("Hello world \n");
  return 0;
}

#endif // beneficiary_MAIN
#endif // beneficiary_TEST
