/*
 * utxo_native_data.h
 *
 * 
 */

#ifndef _utxo_native_data_H_
#define _utxo_native_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct utxo_native_data_t utxo_native_data_t;

#include "vout.h"



typedef struct utxo_native_data_t {
    list_t *vout; //nonprimitive container

} utxo_native_data_t;

utxo_native_data_t *utxo_native_data_create(
    list_t *vout
);

void utxo_native_data_free(utxo_native_data_t *utxo_native_data);

utxo_native_data_t *utxo_native_data_parseFromJSON(cJSON *utxo_native_dataJSON);

cJSON *utxo_native_data_convertToJSON(utxo_native_data_t *utxo_native_data);

#endif /* _utxo_native_data_H_ */

