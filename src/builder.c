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
/*************************************************************************
 * builder
 * adds quarters and history to the settlement
 *
 *************************************************************************
 */

#include <stdlib.h>
#include "infra.h"

// linked list of infra's available to choose
struct infra_choice* choices;
// the settlement
extern struct sett* settlement;

/* Return a new quarter object with starting_pop people and no buildings.
 *
 */
static struct quarter build_quarter(int starting_pop = 2) {
 
    struct quarter* new = { .pop = starting_pop,
                            .age = 0,
                            .next = NULL
                            .buildings = NULL };

    // add quarter to the settlement
 
    return &quarter;
}

/* Begin construction of infrastructure in quarter q.
 * Check if infrastructure is available from the list
 * of infrastructure available.
 */
static bool construct(struct quarter* q, struct infra* i);
