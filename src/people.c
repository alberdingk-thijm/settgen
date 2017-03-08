
#include "errno.h"
#include "people.h"

/* Destroy a notable, removing them and their bonuses from the settlement.
 * Called if notable.age >= notable.maxage by notable_execute_ts.
 * \param tokill -  pointer to the notable to destroy
 * \returnval - 0 if success, error otherwise
 */
static int notable_kill(notable* tokill) {
    return 0;
}

/* Create a new notable, adding them to the specified district.
 * Called if an event requests a new notable.
 * \param d - pointer to a district where the notable will be added (assigned to notable.home)
 * \param name - string to be assigned to notable.name
 * \param lvl - integer to be assigned to notable.level
 * \param r - race enum to be assigned to notable.r
 * \param c - class enum to be assigned to notable.c
 * \returnval - 0 if success, error otherwise
 */
int notable_create(district* d, char* name, int lvl, race r, cls c) {
    return 0;
}

/* Execute a timestep for the given notable. Incrementing age by 1 and perform
 * any actions specified by flags.
 * \param n - pointer to the notable
 * \returnval - 0 if success, error otherwise
 */
int notable_execute_ts(notable* n) {
    // increment age by 1
    // if n.age >= n.maxage, set NOTABLE_DEAD
    // check flags
    // NOTABLE_HEALTHY: give a small bonus to growth and build speed; chance of NOTABLE_ADVENTURING
    // NOTABLE_ADVENTURING: chance of getting NOTABLE_TREASURE, NOTABLE_SICK or NOTABLE_DEAD
    // NOTABLE_TREASURE: generate an item for the district
    // NOTABLE_SICK: chance of NOTABLE_DEAD or NOTABLE_HEALTHY
    // NOTABLE_DEAD: run notable_kill(n)
}

/* Pass a small increment to n->home->growth and n->home->build based on n->level.
 * Roll possible addition of NOTABLE_ADVENTURING flag.
 * \param n - pointer to the notable
 * \returnval - 0 if success, error otherwise
 */
static int notable_contribute(notable* n) {
    return 0;
}

/* Roll to check for NOTABLE_TREASURE, NOTABLE_SICK or NOTABLE_DEAD.
 * \param n - pointer to the notable
 * \returnval - 0 if success, error otherwise
 */
static int notable_adventure(notable* n) {
    return 0;
}

/* Generate an item for the district (n->home) and set flag to NOTABLE_HEALTHY.
 * \param n - pointer to the notable
 * \returnval - 0 if success, error otherwise
 */
static int notable_find_treasure(notable* n) {
    return 0;
}

/* Roll to check for NOTABLE_DEAD or NOTABLE_HEALTHY.
 * \param n - pointer to the notable
 * \returnval - 0 if success, error otherwise
 */
static int notable_rest(notable* n) {
    return 0;
}
