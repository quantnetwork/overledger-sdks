#ifndef block_hash_TEST
#define block_hash_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define block_hash_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/block_hash.h"
block_hash_t* instantiate_block_hash(int include_optional);



block_hash_t* instantiate_block_hash(int include_optional) {
  block_hash_t* block_hash = NULL;
  if (include_optional) {
    block_hash = block_hash_create(
      "a",
      "a"
    );
  } else {
    block_hash = block_hash_create(
      "a",
      "a"
    );
  }

  return block_hash;
}


#ifdef block_hash_MAIN

void test_block_hash(int include_optional) {
    block_hash_t* block_hash_1 = instantiate_block_hash(include_optional);

	cJSON* jsonblock_hash_1 = block_hash_convertToJSON(block_hash_1);
	printf("block_hash :\n%s\n", cJSON_Print(jsonblock_hash_1));
	block_hash_t* block_hash_2 = block_hash_parseFromJSON(jsonblock_hash_1);
	cJSON* jsonblock_hash_2 = block_hash_convertToJSON(block_hash_2);
	printf("repeating block_hash:\n%s\n", cJSON_Print(jsonblock_hash_2));
}

int main() {
  test_block_hash(1);
  test_block_hash(0);

  printf("Hello world \n");
  return 0;
}

#endif // block_hash_MAIN
#endif // block_hash_TEST
