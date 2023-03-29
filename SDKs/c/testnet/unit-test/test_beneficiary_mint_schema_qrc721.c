#ifndef beneficiary_mint_schema_qrc721_TEST
#define beneficiary_mint_schema_qrc721_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define beneficiary_mint_schema_qrc721_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/beneficiary_mint_schema_qrc721.h"
beneficiary_mint_schema_qrc721_t* instantiate_beneficiary_mint_schema_qrc721(int include_optional);

#include "test_mint_schema_qrc721.c"


beneficiary_mint_schema_qrc721_t* instantiate_beneficiary_mint_schema_qrc721(int include_optional) {
  beneficiary_mint_schema_qrc721_t* beneficiary_mint_schema_qrc721 = NULL;
  if (include_optional) {
    beneficiary_mint_schema_qrc721 = beneficiary_mint_schema_qrc721_create(
      "a",
       // false, not to have infinite recursion
      instantiate_mint_schema_qrc721(0)
    );
  } else {
    beneficiary_mint_schema_qrc721 = beneficiary_mint_schema_qrc721_create(
      "a",
      NULL
    );
  }

  return beneficiary_mint_schema_qrc721;
}


#ifdef beneficiary_mint_schema_qrc721_MAIN

void test_beneficiary_mint_schema_qrc721(int include_optional) {
    beneficiary_mint_schema_qrc721_t* beneficiary_mint_schema_qrc721_1 = instantiate_beneficiary_mint_schema_qrc721(include_optional);

	cJSON* jsonbeneficiary_mint_schema_qrc721_1 = beneficiary_mint_schema_qrc721_convertToJSON(beneficiary_mint_schema_qrc721_1);
	printf("beneficiary_mint_schema_qrc721 :\n%s\n", cJSON_Print(jsonbeneficiary_mint_schema_qrc721_1));
	beneficiary_mint_schema_qrc721_t* beneficiary_mint_schema_qrc721_2 = beneficiary_mint_schema_qrc721_parseFromJSON(jsonbeneficiary_mint_schema_qrc721_1);
	cJSON* jsonbeneficiary_mint_schema_qrc721_2 = beneficiary_mint_schema_qrc721_convertToJSON(beneficiary_mint_schema_qrc721_2);
	printf("repeating beneficiary_mint_schema_qrc721:\n%s\n", cJSON_Print(jsonbeneficiary_mint_schema_qrc721_2));
}

int main() {
  test_beneficiary_mint_schema_qrc721(1);
  test_beneficiary_mint_schema_qrc721(0);

  printf("Hello world \n");
  return 0;
}

#endif // beneficiary_mint_schema_qrc721_MAIN
#endif // beneficiary_mint_schema_qrc721_TEST
