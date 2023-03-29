#ifndef mint_request_details_schema_qrc721_TEST
#define mint_request_details_schema_qrc721_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mint_request_details_schema_qrc721_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mint_request_details_schema_qrc721.h"
mint_request_details_schema_qrc721_t* instantiate_mint_request_details_schema_qrc721(int include_optional);

#include "test_beneficiary_mint_schema_qrc721.c"
#include "test_creator_mint_schema.c"


mint_request_details_schema_qrc721_t* instantiate_mint_request_details_schema_qrc721(int include_optional) {
  mint_request_details_schema_qrc721_t* mint_request_details_schema_qrc721 = NULL;
  if (include_optional) {
    mint_request_details_schema_qrc721 = mint_request_details_schema_qrc721_create(
       // false, not to have infinite recursion
      instantiate_beneficiary_mint_schema_qrc721(0),
       // false, not to have infinite recursion
      instantiate_creator_mint_schema(0),
      "a"
    );
  } else {
    mint_request_details_schema_qrc721 = mint_request_details_schema_qrc721_create(
      NULL,
      NULL,
      "a"
    );
  }

  return mint_request_details_schema_qrc721;
}


#ifdef mint_request_details_schema_qrc721_MAIN

void test_mint_request_details_schema_qrc721(int include_optional) {
    mint_request_details_schema_qrc721_t* mint_request_details_schema_qrc721_1 = instantiate_mint_request_details_schema_qrc721(include_optional);

	cJSON* jsonmint_request_details_schema_qrc721_1 = mint_request_details_schema_qrc721_convertToJSON(mint_request_details_schema_qrc721_1);
	printf("mint_request_details_schema_qrc721 :\n%s\n", cJSON_Print(jsonmint_request_details_schema_qrc721_1));
	mint_request_details_schema_qrc721_t* mint_request_details_schema_qrc721_2 = mint_request_details_schema_qrc721_parseFromJSON(jsonmint_request_details_schema_qrc721_1);
	cJSON* jsonmint_request_details_schema_qrc721_2 = mint_request_details_schema_qrc721_convertToJSON(mint_request_details_schema_qrc721_2);
	printf("repeating mint_request_details_schema_qrc721:\n%s\n", cJSON_Print(jsonmint_request_details_schema_qrc721_2));
}

int main() {
  test_mint_request_details_schema_qrc721(1);
  test_mint_request_details_schema_qrc721(0);

  printf("Hello world \n");
  return 0;
}

#endif // mint_request_details_schema_qrc721_MAIN
#endif // mint_request_details_schema_qrc721_TEST
