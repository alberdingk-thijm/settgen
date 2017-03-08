#include "infra.h"
#include "events.h"
#include "people.h"

/*
 * Struct representing a settlement.
 * Highest-level storage of state.
 * Relevant info:
 *  - population
 *  - age
 *  - region type
 *  - quarters
 */
typedef struct sett {
    int pop;
    int age;
    int growth; // growth rate of the settlement's population
    region* sett_reg;
    quarter* quarters;
    notable* notables;
} sett;

typedef struct region {
    char[] name;
    float growth;
}

typedef struct quarter {
    int pop;
    int age;
    race r;
    enum type t;
    struct infra* buildings;
} quarter;

static sett* init_sett(region r);
static void execute_timestep(sett* s);
static void destroy_sett(sett* s);

