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
// Headers for general people and notables

#include "builder.h"

typedef struct notable {
    quarter* home;
    char* name;
    int level;
    cls c;
    int age;
    int maxage;
    race r;
    int flags;
    // flags?
    struct notable* next;
} notable;

enum people_flags {
    NOTABLE_HEALTHY = 0,
    NOTABLE_ADVENTURING = 1,
    NOTABLE_TREASURE = 2,
    NOTABLE_SICK = 4,
    NOTABLE_DEAD = 8
};

typedef enum cls {
    CLERIC,
    DRUID,
    FIGHTER,
    PALADIN,
    RANGER,
    ASSASSIN,
    THIEF,
    MAGE,
    ILLUSIONIST,
    MONK,
    BARD
} cls;

typedef enum race {
    HUMAN,
    ELF,
    DWARF,
    GNOME,
    HALFELF,
    HALFORC,
    HALFLING
} race;

static int notable_kill(notable* tokill);
int notable_create(quarter* q, char* name, int lvl, race r, cls c);
int notable_execute_ts(notable* n);
static int notable_adventure(notable* n);
static int notable_find_treasure(notable* n);
