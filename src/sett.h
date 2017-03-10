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
struct sett {
    int pop;
    int age;
    int growth; // growth rate of the settlement's population
    bool is_capital;  // boolean for palace building
    struct region* sett_reg;
    struct quarter* quarters;
    struct notable* notables;
};

struct region {
    char[32] name;
    char[256] desc;
    float growth;
    int offset;
}

struct quarter {
    int pop;
    int age;
    enum race r;
    enum type t;
    struct quarter* next;
    struct infra* buildings;
};

static sett* init_sett(struct region* r);
static void execute_timestep(struct sett* s);
static void destroy_sett(struct sett* s);

