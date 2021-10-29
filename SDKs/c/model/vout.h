/*
 * vout.h
 *
 * 
 */

#ifndef _vout_H_
#define _vout_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vout_t vout_t;

#include "script_pub_key.h"



typedef struct vout_t {
    struct script_pub_key_t *script_pub_key; //model
    double value; //numeric
    double n; //numeric

} vout_t;

vout_t *vout_create(
    script_pub_key_t *script_pub_key,
    double value,
    double n
);

void vout_free(vout_t *vout);

vout_t *vout_parseFromJSON(cJSON *voutJSON);

cJSON *vout_convertToJSON(vout_t *vout);

#endif /* _vout_H_ */

