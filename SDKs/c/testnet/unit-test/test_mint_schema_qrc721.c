#ifndef mint_schema_qrc721_TEST
#define mint_schema_qrc721_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mint_schema_qrc721_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mint_schema_qrc721.h"
mint_schema_qrc721_t* instantiate_mint_schema_qrc721(int include_optional);



mint_schema_qrc721_t* instantiate_mint_schema_qrc721(int include_optional) {
  mint_schema_qrc721_t* mint_schema_qrc721 = NULL;
  if (include_optional) {
    mint_schema_qrc721 = mint_schema_qrc721_create(
      "a",
      "a",
      "a"
    );
  } else {
    mint_schema_qrc721 = mint_schema_qrc721_create(
      "a",
      "a",
      "a"
    );
  }

  return mint_schema_qrc721;
}


#ifdef mint_schema_qrc721_MAIN

void test_mint_schema_qrc721(int include_optional) {
    mint_schema_qrc721_t* mint_schema_qrc721_1 = instantiate_mint_schema_qrc721(include_optional);

	cJSON* jsonmint_schema_qrc721_1 = mint_schema_qrc721_convertToJSON(mint_schema_qrc721_1);
	printf("mint_schema_qrc721 :\n%s\n", cJSON_Print(jsonmint_schema_qrc721_1));
	mint_schema_qrc721_t* mint_schema_qrc721_2 = mint_schema_qrc721_parseFromJSON(jsonmint_schema_qrc721_1);
	cJSON* jsonmint_schema_qrc721_2 = mint_schema_qrc721_convertToJSON(mint_schema_qrc721_2);
	printf("repeating mint_schema_qrc721:\n%s\n", cJSON_Print(jsonmint_schema_qrc721_2));
}

int main() {
  test_mint_schema_qrc721(1);
  test_mint_schema_qrc721(0);

  printf("Hello world \n");
  return 0;
}

#endif // mint_schema_qrc721_MAIN
#endif // mint_schema_qrc721_TEST
