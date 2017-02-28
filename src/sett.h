#include <stdlib.h>
#include "infra.h"
#include "events.h"

/*
 * Struct representing a settlement.
 * Highest-level storage of state.
 * Relevant info:
 *  - population
 *  - age
 *  - region type
 *  - districts
 */
typedef struct sett {
    int pop;
    int age;
    enum region sett_reg;
    struct district* districts;
} sett;

enum race {
    HUMAN,
    ELF,
    DWARF,
    GNOME,
    HALFELF,
    HALFORC,
    HALFLING
};

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
    int age;
    enum race r;
    enum type t;
    struct infrastructure* buildings;
} district;

typedef struct infrastructure {
    char* name;
    enum condition;  // infrastructure condition
    enum type t;  // infrastructure type
    struct* event ev;  // associated events
} infra;

static void execute_timestep(sett* s);

