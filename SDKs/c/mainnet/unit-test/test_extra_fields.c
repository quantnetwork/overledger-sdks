#ifndef extra_fields_TEST
#define extra_fields_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extra_fields_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extra_fields.h"
extra_fields_t* instantiate_extra_fields(int include_optional);



extra_fields_t* instantiate_extra_fields(int include_optional) {
  extra_fields_t* extra_fields = NULL;
  if (include_optional) {
    extra_fields = extra_fields_create(
      1.337
    );
  } else {
    extra_fields = extra_fields_create(
      1.337
    );
  }

  return extra_fields;
}


#ifdef extra_fields_MAIN

void test_extra_fields(int include_optional) {
    extra_fields_t* extra_fields_1 = instantiate_extra_fields(include_optional);

	cJSON* jsonextra_fields_1 = extra_fields_convertToJSON(extra_fields_1);
	printf("extra_fields :\n%s\n", cJSON_Print(jsonextra_fields_1));
	extra_fields_t* extra_fields_2 = extra_fields_parseFromJSON(jsonextra_fields_1);
	cJSON* jsonextra_fields_2 = extra_fields_convertToJSON(extra_fields_2);
	printf("repeating extra_fields:\n%s\n", cJSON_Print(jsonextra_fields_2));
}

int main() {
  test_extra_fields(1);
  test_extra_fields(0);

  printf("Hello world \n");
  return 0;
}

#endif // extra_fields_MAIN
#endif // extra_fields_TEST
