/*************************************************************************
 * builder
 * adds districts and history to the settlement
 *
 *************************************************************************
 */

#include <stdlib.h>
#include "infra.h"

/* Return a new district object with starting_pop people and no buildings.
 *
 */
static district build_district(int starting_pop = 2) {
 
    district* new = { .pop = starting_pop, .buildings = NULL };
    
    return &district;
}

/* Begin construction of infrastructure in district d. 
 *
 */
static bool construct(district* d, infra* i);
