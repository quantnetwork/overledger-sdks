#ifndef beneficiary_mint_schema_qrc20_TEST
#define beneficiary_mint_schema_qrc20_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define beneficiary_mint_schema_qrc20_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/beneficiary_mint_schema_qrc20.h"
beneficiary_mint_schema_qrc20_t* instantiate_beneficiary_mint_schema_qrc20(int include_optional);

#include "test_mint_schema_qrc20.c"


beneficiary_mint_schema_qrc20_t* instantiate_beneficiary_mint_schema_qrc20(int include_optional) {
  beneficiary_mint_schema_qrc20_t* beneficiary_mint_schema_qrc20 = NULL;
  if (include_optional) {
    beneficiary_mint_schema_qrc20 = beneficiary_mint_schema_qrc20_create(
      "a",
       // false, not to have infinite recursion
      instantiate_mint_schema_qrc20(0)
    );
  } else {
    beneficiary_mint_schema_qrc20 = beneficiary_mint_schema_qrc20_create(
      "a",
      NULL
    );
  }

  return beneficiary_mint_schema_qrc20;
}


#ifdef beneficiary_mint_schema_qrc20_MAIN

void test_beneficiary_mint_schema_qrc20(int include_optional) {
    beneficiary_mint_schema_qrc20_t* beneficiary_mint_schema_qrc20_1 = instantiate_beneficiary_mint_schema_qrc20(include_optional);

	cJSON* jsonbeneficiary_mint_schema_qrc20_1 = beneficiary_mint_schema_qrc20_convertToJSON(beneficiary_mint_schema_qrc20_1);
	printf("beneficiary_mint_schema_qrc20 :\n%s\n", cJSON_Print(jsonbeneficiary_mint_schema_qrc20_1));
	beneficiary_mint_schema_qrc20_t* beneficiary_mint_schema_qrc20_2 = beneficiary_mint_schema_qrc20_parseFromJSON(jsonbeneficiary_mint_schema_qrc20_1);
	cJSON* jsonbeneficiary_mint_schema_qrc20_2 = beneficiary_mint_schema_qrc20_convertToJSON(beneficiary_mint_schema_qrc20_2);
	printf("repeating beneficiary_mint_schema_qrc20:\n%s\n", cJSON_Print(jsonbeneficiary_mint_schema_qrc20_2));
}

int main() {
  test_beneficiary_mint_schema_qrc20(1);
  test_beneficiary_mint_schema_qrc20(0);

  printf("Hello world \n");
  return 0;
}

#endif // beneficiary_mint_schema_qrc20_MAIN
#endif // beneficiary_mint_schema_qrc20_TEST
