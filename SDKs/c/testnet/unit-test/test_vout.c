#ifndef vout_TEST
#define vout_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vout_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vout.h"
vout_t* instantiate_vout(int include_optional);

#include "test_script_pub_key.c"


vout_t* instantiate_vout(int include_optional) {
  vout_t* vout = NULL;
  if (include_optional) {
    vout = vout_create(
       // false, not to have infinite recursion
      instantiate_script_pub_key(0),
      1.337,
      1.337
    );
  } else {
    vout = vout_create(
      NULL,
      1.337,
      1.337
    );
  }

  return vout;
}


#ifdef vout_MAIN

void test_vout(int include_optional) {
    vout_t* vout_1 = instantiate_vout(include_optional);

	cJSON* jsonvout_1 = vout_convertToJSON(vout_1);
	printf("vout :\n%s\n", cJSON_Print(jsonvout_1));
	vout_t* vout_2 = vout_parseFromJSON(jsonvout_1);
	cJSON* jsonvout_2 = vout_convertToJSON(vout_2);
	printf("repeating vout:\n%s\n", cJSON_Print(jsonvout_2));
}

int main() {
  test_vout(1);
  test_vout(0);

  printf("Hello world \n");
  return 0;
}

#endif // vout_MAIN
#endif // vout_TEST
