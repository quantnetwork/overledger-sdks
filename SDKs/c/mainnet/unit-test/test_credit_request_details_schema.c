#ifndef credit_request_details_schema_TEST
#define credit_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define credit_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/credit_request_details_schema.h"
credit_request_details_schema_t* instantiate_credit_request_details_schema(int include_optional);



credit_request_details_schema_t* instantiate_credit_request_details_schema(int include_optional) {
  credit_request_details_schema_t* credit_request_details_schema = NULL;
  if (include_optional) {
    credit_request_details_schema = credit_request_details_schema_create(
      list_create(),
      "a",
      list_create(),
      "a"
    );
  } else {
    credit_request_details_schema = credit_request_details_schema_create(
      list_create(),
      "a",
      list_create(),
      "a"
    );
  }

  return credit_request_details_schema;
}


#ifdef credit_request_details_schema_MAIN

void test_credit_request_details_schema(int include_optional) {
    credit_request_details_schema_t* credit_request_details_schema_1 = instantiate_credit_request_details_schema(include_optional);

	cJSON* jsoncredit_request_details_schema_1 = credit_request_details_schema_convertToJSON(credit_request_details_schema_1);
	printf("credit_request_details_schema :\n%s\n", cJSON_Print(jsoncredit_request_details_schema_1));
	credit_request_details_schema_t* credit_request_details_schema_2 = credit_request_details_schema_parseFromJSON(jsoncredit_request_details_schema_1);
	cJSON* jsoncredit_request_details_schema_2 = credit_request_details_schema_convertToJSON(credit_request_details_schema_2);
	printf("repeating credit_request_details_schema:\n%s\n", cJSON_Print(jsoncredit_request_details_schema_2));
}

int main() {
  test_credit_request_details_schema(1);
  test_credit_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // credit_request_details_schema_MAIN
#endif // credit_request_details_schema_TEST
