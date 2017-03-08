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
 * adds districts and history to the settlement
 *
 *************************************************************************
 */

#include <stdlib.h>
#include "infra.h"

/* Return a new district object with starting_pop people and no buildings.
 *
 */
static district build_district(int starting_pop = 2) {
 
    district* new = { .pop = starting_pop, .buildings = NULL };
    
    return &district;
}

/* Begin construction of infrastructure in district d. 
 *
 */
static bool construct(district* d, infra* i);
