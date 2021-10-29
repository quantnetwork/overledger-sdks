#ifndef script_pub_key_TEST
#define script_pub_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define script_pub_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/script_pub_key.h"
script_pub_key_t* instantiate_script_pub_key(int include_optional);



script_pub_key_t* instantiate_script_pub_key(int include_optional) {
  script_pub_key_t* script_pub_key = NULL;
  if (include_optional) {
    script_pub_key = script_pub_key_create(
      list_create(),
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    script_pub_key = script_pub_key_create(
      list_create(),
      "0",
      "0",
      "0",
      "0"
    );
  }

  return script_pub_key;
}


#ifdef script_pub_key_MAIN

void test_script_pub_key(int include_optional) {
    script_pub_key_t* script_pub_key_1 = instantiate_script_pub_key(include_optional);

	cJSON* jsonscript_pub_key_1 = script_pub_key_convertToJSON(script_pub_key_1);
	printf("script_pub_key :\n%s\n", cJSON_Print(jsonscript_pub_key_1));
	script_pub_key_t* script_pub_key_2 = script_pub_key_parseFromJSON(jsonscript_pub_key_1);
	cJSON* jsonscript_pub_key_2 = script_pub_key_convertToJSON(script_pub_key_2);
	printf("repeating script_pub_key:\n%s\n", cJSON_Print(jsonscript_pub_key_2));
}

int main() {
  test_script_pub_key(1);
  test_script_pub_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // script_pub_key_MAIN
#endif // script_pub_key_TEST
