#ifndef mint_TEST
#define mint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mint.h"
mint_t* instantiate_mint(int include_optional);



mint_t* instantiate_mint(int include_optional) {
  mint_t* mint = NULL;
  if (include_optional) {
    mint = mint_create(
      "a",
      "a",
      "0",
      "a",
      "a"
    );
  } else {
    mint = mint_create(
      "a",
      "a",
      "0",
      "a",
      "a"
    );
  }

  return mint;
}


#ifdef mint_MAIN

void test_mint(int include_optional) {
    mint_t* mint_1 = instantiate_mint(include_optional);

	cJSON* jsonmint_1 = mint_convertToJSON(mint_1);
	printf("mint :\n%s\n", cJSON_Print(jsonmint_1));
	mint_t* mint_2 = mint_parseFromJSON(jsonmint_1);
	cJSON* jsonmint_2 = mint_convertToJSON(mint_2);
	printf("repeating mint:\n%s\n", cJSON_Print(jsonmint_2));
}

int main() {
  test_mint(1);
  test_mint(0);

  printf("Hello world \n");
  return 0;
}

#endif // mint_MAIN
#endif // mint_TEST
