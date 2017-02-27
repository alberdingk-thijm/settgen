#include <stdlib.h>
#include "infra.h"

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
    enum region sett_reg;
    struct district* districts;
} sett;

enum region {
    ICECAP,
    TUNDRA,
    BOREAL,
    HEMIBOREAL,
    COAST,
    SWAMP,
    JUNGLE,
    STEPPE,
    DESERT
};

typedef struct district {
    int pop;
    struct infrastructure* buildings;
} district;

typedef struct infrastructure {
    enum condition;
} infra;

typedef struct commodity {
    int num;
    enum resource_t name;
}

enum resource_t {
    IRON,
    SILVER,
    CATTLE,
    FISH,
    LUMBER,
    PAINT,
    MARBLE,
    TEA,
    BEER,
    WINE
};
