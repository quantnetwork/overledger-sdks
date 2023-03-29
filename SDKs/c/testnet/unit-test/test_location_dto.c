#ifndef location_dto_TEST
#define location_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_dto.h"
location_dto_t* instantiate_location_dto(int include_optional);



location_dto_t* instantiate_location_dto(int include_optional) {
  location_dto_t* location_dto = NULL;
  if (include_optional) {
    location_dto = location_dto_create(
      "0",
      "0"
    );
  } else {
    location_dto = location_dto_create(
      "0",
      "0"
    );
  }

  return location_dto;
}


#ifdef location_dto_MAIN

void test_location_dto(int include_optional) {
    location_dto_t* location_dto_1 = instantiate_location_dto(include_optional);

	cJSON* jsonlocation_dto_1 = location_dto_convertToJSON(location_dto_1);
	printf("location_dto :\n%s\n", cJSON_Print(jsonlocation_dto_1));
	location_dto_t* location_dto_2 = location_dto_parseFromJSON(jsonlocation_dto_1);
	cJSON* jsonlocation_dto_2 = location_dto_convertToJSON(location_dto_2);
	printf("repeating location_dto:\n%s\n", cJSON_Print(jsonlocation_dto_2));
}

int main() {
  test_location_dto(1);
  test_location_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_dto_MAIN
#endif // location_dto_TEST
