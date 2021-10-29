#ifndef block_size_TEST
#define block_size_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define block_size_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/block_size.h"
block_size_t* instantiate_block_size(int include_optional);



block_size_t* instantiate_block_size(int include_optional) {
  block_size_t* block_size = NULL;
  if (include_optional) {
    block_size = block_size_create(
      "a",
      "a",
      "a"
    );
  } else {
    block_size = block_size_create(
      "a",
      "a",
      "a"
    );
  }

  return block_size;
}


#ifdef block_size_MAIN

void test_block_size(int include_optional) {
    block_size_t* block_size_1 = instantiate_block_size(include_optional);

	cJSON* jsonblock_size_1 = block_size_convertToJSON(block_size_1);
	printf("block_size :\n%s\n", cJSON_Print(jsonblock_size_1));
	block_size_t* block_size_2 = block_size_parseFromJSON(jsonblock_size_1);
	cJSON* jsonblock_size_2 = block_size_convertToJSON(block_size_2);
	printf("repeating block_size:\n%s\n", cJSON_Print(jsonblock_size_2));
}

int main() {
  test_block_size(1);
  test_block_size(0);

  printf("Hello world \n");
  return 0;
}

#endif // block_size_MAIN
#endif // block_size_TEST
