#include <stdlib.h>

/*
 * Struct representing a settlement.
 * Highest-level storage of state.
 * Relevant info:
 *  - population
 *  - region type
 *  - elements in market
 *  - infrastructure
 */

int SETTLEMENT_AGE;

typedef struct sett {
    int pop;
    char[] region;
    market mrkt;
    infras infras;
} sett;

typedef struct market {
    
} market;

typedef struct infrastructures {

} infras;
