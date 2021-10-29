#ifndef internal_server_error_schema_TEST
#define internal_server_error_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define internal_server_error_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/internal_server_error_schema.h"
internal_server_error_schema_t* instantiate_internal_server_error_schema(int include_optional);



internal_server_error_schema_t* instantiate_internal_server_error_schema(int include_optional) {
  internal_server_error_schema_t* internal_server_error_schema = NULL;
  if (include_optional) {
    internal_server_error_schema = internal_server_error_schema_create(
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      56
    );
  } else {
    internal_server_error_schema = internal_server_error_schema_create(
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      56
    );
  }

  return internal_server_error_schema;
}


#ifdef internal_server_error_schema_MAIN

void test_internal_server_error_schema(int include_optional) {
    internal_server_error_schema_t* internal_server_error_schema_1 = instantiate_internal_server_error_schema(include_optional);

	cJSON* jsoninternal_server_error_schema_1 = internal_server_error_schema_convertToJSON(internal_server_error_schema_1);
	printf("internal_server_error_schema :\n%s\n", cJSON_Print(jsoninternal_server_error_schema_1));
	internal_server_error_schema_t* internal_server_error_schema_2 = internal_server_error_schema_parseFromJSON(jsoninternal_server_error_schema_1);
	cJSON* jsoninternal_server_error_schema_2 = internal_server_error_schema_convertToJSON(internal_server_error_schema_2);
	printf("repeating internal_server_error_schema:\n%s\n", cJSON_Print(jsoninternal_server_error_schema_2));
}

int main() {
  test_internal_server_error_schema(1);
  test_internal_server_error_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // internal_server_error_schema_MAIN
#endif // internal_server_error_schema_TEST
