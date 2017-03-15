/*
 *  settgen - an RPG settlement generator
 *  Copyright (C) 2017  Tim Alberdingk Thijm
 *  tim.thijm at gmail.com
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 */

#include <stdlib.h>
#include "sett.h"

/* Return a pointer to a new sett struct in the specified region.
 * The sett has an age of 0 and a starting population X, with one
 * administrative quarter.
 * The starting region can offer bonuses: see region.txt for details.
 */
struct sett* init_sett(struct region* r, bool is_cap) {
    // allocate space
    struct sett* s = zmalloc(sizeof(struct sett));
    if (!s) {
        perror("malloc");
        exit(1);
    }
    s->age = 0;
    s->growth = r->growth;
    s->is_capital = is_cap;
    s->reg = r;
    s->quarters = build_quarter();  //TODO: specify race and type
    s->notables = NULL;

    return s;
    
}

/* Perform one "timestep" for the given sett s, increasing its age by 1.
 * This triggers a number of effects:
 *  - the settlement will grow based on its growth rate (s->growth)
 *  - for each quarter in the settlement, any infrastructure with
 *    an IN_PROGRESS condition will progress (as long as progress is not
 *    disrupted by a RIOT effect) by its building speed (i->buildr)
 *  - All notables in the settlement will age one corresponding timestep;
 *    if any notable reaches their maximum age (n->maxage), they will die
 *  - Event rolls are made for the buildings of each quarter of the settlement.
 *    If a building's event roll succeeds, the event's effects are counted
 *    on the following timestep.
 */
void execute_timestep(struct sett* s) {
    // increase age
    s->age++;
    // grow settlement
    s->pop += s->growth;
    // build infrastructure
    struct quarter* curr_q;
    for ( curr_q = s->quarters; curr_q; curr_q = curr_q->next ) {
        // loop through buildings and execute
        // the building code
    }
    // age notables
    struct notable* curr_n;
    for ( curr_n = s->notables; curr_n; curr_n = curr_n->next ) {
        // loop through the notables and age them
        notable_execute_ts(curr_n);
    }
    // roll events
    // TODO
}
