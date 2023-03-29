#ifndef payer_TEST
#define payer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payer.h"
payer_t* instantiate_payer(int include_optional);



payer_t* instantiate_payer(int include_optional) {
  payer_t* payer = NULL;
  if (include_optional) {
    payer = payer_create(
      "a"
    );
  } else {
    payer = payer_create(
      "a"
    );
  }

  return payer;
}


#ifdef payer_MAIN

void test_payer(int include_optional) {
    payer_t* payer_1 = instantiate_payer(include_optional);

	cJSON* jsonpayer_1 = payer_convertToJSON(payer_1);
	printf("payer :\n%s\n", cJSON_Print(jsonpayer_1));
	payer_t* payer_2 = payer_parseFromJSON(jsonpayer_1);
	cJSON* jsonpayer_2 = payer_convertToJSON(payer_2);
	printf("repeating payer:\n%s\n", cJSON_Print(jsonpayer_2));
}

int main() {
  test_payer(1);
  test_payer(0);

  printf("Hello world \n");
  return 0;
}

#endif // payer_MAIN
#endif // payer_TEST
