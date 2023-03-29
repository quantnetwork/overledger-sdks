#ifndef mint_request_details_schema_qrc20_TEST
#define mint_request_details_schema_qrc20_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mint_request_details_schema_qrc20_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mint_request_details_schema_qrc20.h"
mint_request_details_schema_qrc20_t* instantiate_mint_request_details_schema_qrc20(int include_optional);

#include "test_creator_mint_schema.c"
#include "test_beneficiary_mint_schema_qrc20.c"


mint_request_details_schema_qrc20_t* instantiate_mint_request_details_schema_qrc20(int include_optional) {
  mint_request_details_schema_qrc20_t* mint_request_details_schema_qrc20 = NULL;
  if (include_optional) {
    mint_request_details_schema_qrc20 = mint_request_details_schema_qrc20_create(
       // false, not to have infinite recursion
      instantiate_creator_mint_schema(0),
       // false, not to have infinite recursion
      instantiate_beneficiary_mint_schema_qrc20(0),
      "a",
      "a"
    );
  } else {
    mint_request_details_schema_qrc20 = mint_request_details_schema_qrc20_create(
      NULL,
      NULL,
      "a",
      "a"
    );
  }

  return mint_request_details_schema_qrc20;
}


#ifdef mint_request_details_schema_qrc20_MAIN

void test_mint_request_details_schema_qrc20(int include_optional) {
    mint_request_details_schema_qrc20_t* mint_request_details_schema_qrc20_1 = instantiate_mint_request_details_schema_qrc20(include_optional);

	cJSON* jsonmint_request_details_schema_qrc20_1 = mint_request_details_schema_qrc20_convertToJSON(mint_request_details_schema_qrc20_1);
	printf("mint_request_details_schema_qrc20 :\n%s\n", cJSON_Print(jsonmint_request_details_schema_qrc20_1));
	mint_request_details_schema_qrc20_t* mint_request_details_schema_qrc20_2 = mint_request_details_schema_qrc20_parseFromJSON(jsonmint_request_details_schema_qrc20_1);
	cJSON* jsonmint_request_details_schema_qrc20_2 = mint_request_details_schema_qrc20_convertToJSON(mint_request_details_schema_qrc20_2);
	printf("repeating mint_request_details_schema_qrc20:\n%s\n", cJSON_Print(jsonmint_request_details_schema_qrc20_2));
}

int main() {
  test_mint_request_details_schema_qrc20(1);
  test_mint_request_details_schema_qrc20(0);

  printf("Hello world \n");
  return 0;
}

#endif // mint_request_details_schema_qrc20_MAIN
#endif // mint_request_details_schema_qrc20_TEST
