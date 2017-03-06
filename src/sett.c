
#include "sett.h"

/* Return a pointer to a new sett struct in the specified region.
 * The sett has an age of 0 and a starting population X, with one
 * administrative district.
 * The starting region can offer bonuses: see region.txt for details.
 */
static sett* init_sett(region r) {

}

/* Perform one "timestep" for the given sett s, increasing its age by 1.
 * This triggers a number of effects:
 *  - the settlement will grow based on its growth rate (s->growth)
 *  - for each district in the settlement, any infrastructure with
 *    an IN_PROGRESS condition will progress (as long as progress is not
 *    disrupted by a RIOT effect) by its building speed (i->buildr)
 *  - All notables in the settlement will age one corresponding timestep;
 *    if any notable reaches their maximum age (n->maxage), they will die
 *  - Event rolls are made for the buildings of each district of the settlement.
 *    If a building's event roll succeeds, the event's effects are counted
 *    on the following timestep.
 */
static void execute_timestep(sett* s) {
    // increase age
    // grow settlement
    // build infrastructure
    // age notables
    // roll events
}
