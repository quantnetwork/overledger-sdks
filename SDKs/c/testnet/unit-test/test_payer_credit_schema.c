#ifndef payer_credit_schema_TEST
#define payer_credit_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payer_credit_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payer_credit_schema.h"
payer_credit_schema_t* instantiate_payer_credit_schema(int include_optional);



payer_credit_schema_t* instantiate_payer_credit_schema(int include_optional) {
  payer_credit_schema_t* payer_credit_schema = NULL;
  if (include_optional) {
    payer_credit_schema = payer_credit_schema_create(
      "a"
    );
  } else {
    payer_credit_schema = payer_credit_schema_create(
      "a"
    );
  }

  return payer_credit_schema;
}


#ifdef payer_credit_schema_MAIN

void test_payer_credit_schema(int include_optional) {
    payer_credit_schema_t* payer_credit_schema_1 = instantiate_payer_credit_schema(include_optional);

	cJSON* jsonpayer_credit_schema_1 = payer_credit_schema_convertToJSON(payer_credit_schema_1);
	printf("payer_credit_schema :\n%s\n", cJSON_Print(jsonpayer_credit_schema_1));
	payer_credit_schema_t* payer_credit_schema_2 = payer_credit_schema_parseFromJSON(jsonpayer_credit_schema_1);
	cJSON* jsonpayer_credit_schema_2 = payer_credit_schema_convertToJSON(payer_credit_schema_2);
	printf("repeating payer_credit_schema:\n%s\n", cJSON_Print(jsonpayer_credit_schema_2));
}

int main() {
  test_payer_credit_schema(1);
  test_payer_credit_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // payer_credit_schema_MAIN
#endif // payer_credit_schema_TEST
