#ifndef burn_request_details_schema_qrc721_TEST
#define burn_request_details_schema_qrc721_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define burn_request_details_schema_qrc721_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/burn_request_details_schema_qrc721.h"
burn_request_details_schema_qrc721_t* instantiate_burn_request_details_schema_qrc721(int include_optional);

#include "test_owner_burn_schema.c"


burn_request_details_schema_qrc721_t* instantiate_burn_request_details_schema_qrc721(int include_optional) {
  burn_request_details_schema_qrc721_t* burn_request_details_schema_qrc721 = NULL;
  if (include_optional) {
    burn_request_details_schema_qrc721 = burn_request_details_schema_qrc721_create(
       // false, not to have infinite recursion
      instantiate_owner_burn_schema(0),
      "a"
    );
  } else {
    burn_request_details_schema_qrc721 = burn_request_details_schema_qrc721_create(
      NULL,
      "a"
    );
  }

  return burn_request_details_schema_qrc721;
}


#ifdef burn_request_details_schema_qrc721_MAIN

void test_burn_request_details_schema_qrc721(int include_optional) {
    burn_request_details_schema_qrc721_t* burn_request_details_schema_qrc721_1 = instantiate_burn_request_details_schema_qrc721(include_optional);

	cJSON* jsonburn_request_details_schema_qrc721_1 = burn_request_details_schema_qrc721_convertToJSON(burn_request_details_schema_qrc721_1);
	printf("burn_request_details_schema_qrc721 :\n%s\n", cJSON_Print(jsonburn_request_details_schema_qrc721_1));
	burn_request_details_schema_qrc721_t* burn_request_details_schema_qrc721_2 = burn_request_details_schema_qrc721_parseFromJSON(jsonburn_request_details_schema_qrc721_1);
	cJSON* jsonburn_request_details_schema_qrc721_2 = burn_request_details_schema_qrc721_convertToJSON(burn_request_details_schema_qrc721_2);
	printf("repeating burn_request_details_schema_qrc721:\n%s\n", cJSON_Print(jsonburn_request_details_schema_qrc721_2));
}

int main() {
  test_burn_request_details_schema_qrc721(1);
  test_burn_request_details_schema_qrc721(0);

  printf("Hello world \n");
  return 0;
}

#endif // burn_request_details_schema_qrc721_MAIN
#endif // burn_request_details_schema_qrc721_TEST
