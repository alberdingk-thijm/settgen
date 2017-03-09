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
    bool is_capital;  // boolean for palace building
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

