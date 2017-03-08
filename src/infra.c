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
 * infra.c
 * Define infrastructure and load in data structure storing buildings
 */

#include "infra.h"
#include "events.h"
#include "sett.h"

struct infra* buildings = NULL;

/* Load buildings array with the information
 * at the given file located at fpath.
 * Parse text of each building and store it.
 */
static void load_buildings(char* fpath) {
    char* data;
    char** bldata;
    // open file

    // read to char array
    // break up by blank lines
}
