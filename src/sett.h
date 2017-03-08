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
 *  - districts
 */
typedef struct sett {
    int pop;
    int age;
    int growth; // growth rate of the settlement's population
    region* sett_reg;
    district* districts;
    notable* notables;
} sett;

typedef struct region {
    char[] name;
    float growth;
}

typedef struct district {
    int pop;
    int age;
    race r;
    enum type t;
    struct infrastructure* buildings;
} district;

typedef struct infrastructure {
    char* name;
    struct district* home;  // location in sett
    enum condition;  // infrastructure condition
    enum type t;  // infrastructure type
    struct event* ev;  // associated events
} infra;

static sett* init_sett(region r);
static void execute_timestep(sett* s);
static void destroy_sett(sett* s);

