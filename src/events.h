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

// eventf: a function that returns an integer and accepts three
// parameters: a pointer to the calling infrastructure and the
// a pointer to the event effect to use
typedef int (*eventf)(struct infra*, int roll);

struct event {
    char[16] name;
    char[64] desc;
    float chance;
    eventf[4] f;  // array of possible event functions to call
    struct event* next;
};

static eventf parse_event(char* eventname);

// kill % of population
static int event_kill1(struct infra* i, int roll);
static int event_kill2(struct infra* i, int roll);
// damage building (reduce condition)
static int event_dam1(struct infra* i, int roll);
static int event_dam2(struct infra* i, int roll);
// halt building and growth
static int event_riot1(struct infra* i, int roll);
static int event_riot2(struct infra* i, int roll);
static int event_riot3(struct infra* i, int roll);
// increase growth speed by %
static int event_grow1(struct infra* i, int roll);
static int event_grow2(struct infra* i, int roll);
// increase build speed by %
static int event_bld1(struct infra* i, int roll);
static int event_bld2(struct infra* i, int roll);
// add notable
static int event_hero_mage(struct infra* i, int roll);
static int event_hero_bard(struct infra* i, int roll);
static int event_hero_merch(struct infra* i, int roll);
static int event_hero_crime(struct infra* i, int roll);
static int event_hero_rlg(struct infra* i, int roll);
static int event_hero_war(struct infra* i, int roll);
// add item
static int event_item1(struct infra* i, int roll);
static int event_item2(struct infra* i, int roll);
static int event_item3(struct infra* i, int roll);
// add flavour
static int event_lore(struct infra* i, int roll);
