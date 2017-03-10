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
 * Representation of infrastructure in a settlement.
 */

enum condition {
    IN_PROGRESS = -1,
    NEW = 0,
    FINE = 1,
    OLD = 2,
    DERELICT = 3,
    RUINED = 4
};

enum type {
    RESIDENTIAL,
    INDUSTRIAL,
    PORT,
    ACADEMIC,
    ADMINISTRATIVE
};

struct infra {
    char* name;
    struct quarter* home;  // location in sett
    int preq_flags; // flags showing if prerequisites are met
    enum condition cond;  // infrastructure condition
    enum type t;  // infrastructure type
    struct event* ev;  // associated events
};

static void load_buildings(char* fpath);

