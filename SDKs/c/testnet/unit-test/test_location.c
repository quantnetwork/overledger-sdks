#ifndef location_TEST
#define location_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location.h"
location_t* instantiate_location(int include_optional);



location_t* instantiate_location(int include_optional) {
  location_t* location = NULL;
  if (include_optional) {
    location = location_create(
      "a",
      "a"
    );
  } else {
    location = location_create(
      "a",
      "a"
    );
  }

  return location;
}


#ifdef location_MAIN

void test_location(int include_optional) {
    location_t* location_1 = instantiate_location(include_optional);

	cJSON* jsonlocation_1 = location_convertToJSON(location_1);
	printf("location :\n%s\n", cJSON_Print(jsonlocation_1));
	location_t* location_2 = location_parseFromJSON(jsonlocation_1);
	cJSON* jsonlocation_2 = location_convertToJSON(location_2);
	printf("repeating location:\n%s\n", cJSON_Print(jsonlocation_2));
}

int main() {
  test_location(1);
  test_location(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_MAIN
#endif // location_TEST
