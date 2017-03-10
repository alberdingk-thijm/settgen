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
/*
 * events.c
 * Define events referenced by settlement and its infrastructure
 */

#include "events.h"

struct event* ev_list;

/*
 * Return the appropriate event function pointer for the given string name.
 */
static eventf parse_event(char eventc) {
    eventf f = NULL;

    switch (eventc) {
        case 'a':
            f = event_accident;
            break;
        case 'A':
            f = event_artifact;
            break;
        case 'b':
            f = event_breakthrough;
            break;
        case 'B':
            f = event_rarebook;
            break;
        case 'M':
            f = event_merchant;
            break;
        default:
            break;
    }

    return f;
}

/* KILL1 event effect
 * Kill a # of people associated with the provided infrastructure,
 * based on the provided roll.
 * \param i - pointer to an infra struct
 * \param roll - an integer representing the roll of one or more dice
 * \returnval - 0 if successful, otherwise error code
 */
int event_kill1(struct infra* i, int roll) {
    struct quarter* q = i->home;
    // kill #roll people
    return kill_pop(q, roll);
}

/* KILL2 event effect
 * Kill a % of people associated with the provided infrastructure,
 * based on the provided roll.
 * \param i - pointer to an infra struct
 * \param roll - an integer representing the roll of one or more dice
 * \returnval - 0 if successful, otherwise error code
 */
int event_kill2(struct infra* i, int roll) {
    struct quarter* q = i->home;
    int total_killed;

    switch (roll) {
        // case rollover:
        //  generate a new roll and choose the next quarter
        //  repeat
        default:
            total_killed = ( roll / (float) 100.0 ) * q->pop;
            return kill_pop(q, total_killed);

    }
}

/* DAM1 event effect
 * Damage the provided infrastructure based on the provided roll.
 * \param i - pointer to an infra struct
 * \param roll - an integer representing the roll of one or more dice
 * \returnval - 0 if successful, otherwise error code
 */
int event_dam1(struct infra* i, int roll) {
    if (i->cond <= IN_PROGRESS) {
        // TODO: determine negative minimum for progress
        // reset progress
        i->cond = -100;
    } else if (i->cond < RUINED) {
       // building is not already ruined
        i->cond += roll;
    }

    return 0;
}

/* DAM2 event effect
 * Damage the provided infrastructure and area based on the provided roll.
 * \param i - pointer to an infra struct
 * \param roll - an integer representing the roll of one or more dice
 * \returnval - 0 if successful, otherwise error code
 */
int event_dam2(struct infra* i, int roll) {
    struct quarter* q = i->home;
    struct infra* curr;

    for ( curr = q->buildings; curr != NULL; curr = curr->next ) {
        if (curr->cond == IN_PROGRESS) {
            // TODO: determine negative minimum for progress
            // reset progress
            curr->cond = -100;
        } else if (curr->cond < RUINED) {
           // building is not already ruined
            curr->cond += roll;
        }
    }

    return 0;
}
