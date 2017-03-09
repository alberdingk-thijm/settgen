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
typedef int (*eventf)(infra*, float);

typedef struct event {
    char* name;
    char* effect;
    int pop_mod;
    float chance;
    eventf f;
    struct event* next;
} event;

static eventf parse_event(char* eventname);

// kill % of population
static int event_kill(infra* i, float chance);
// damage building (reduce condition)
static int event_damage(infra* i, float chance);
// halt building and growth
static int event_anger(infra* i, float chance);
// increase build speed by %
static int event_build(infra* i, float chance);
// increase growth speed by %
static int event_grow(infra* i, float chance);
// add notable
static int event_notable(infra* i, float chance);
// add item
static int event_item(infra* i, float chance);
// add flavour
static int event_lore(infra* i, float chance);

/*
 * General events
 */
static int event_fire(infra* i, float chance);
static int event_accident(infra* i, float chance);
static int event_breakthrough(infra* i, float chance);
static int event_investment(infra* i, float chance);
static int event_visitor(infra* i, float chance);


/*
 * Technical events
 */
static int event_rarebook(infra* i, float chance);
static int event_celestialevent(infra* i, float chance);
static int event_strike(infra* i, float chance);
static int event_lecture(infra* i, float chance);
static int event_wizard(infra* i, float chance);

/*
 * Commercial events
 */
static int event_fair(infra* i, float chance);
static int event_merchant(infra* i, float chance);

/*
 * Nautical events
 */
static int event_piracy(infra* i, float chance);

/*
 * Industrial events
 */

/*
 * Religious events
 */
static int event_heresy(infra* i, float chance);
static int event_festival(infra* i, float chance);
static int event_observance(infra* i, float chance);

/*
 * Military events
 */
static int event_skirmish(infra* i, float chance);
static int event_triumph(infra* i, float chance);

/*
 * Administrative events
 */
static int event_trial(infra* i, float chance);
static int event_prisonbreak(infra* i, float chance);
static int event_diplomatvisit(infra* i, float chance);

/*
 * Other events
 */
static int event_plague(infra* i, float chance);
static int event_performance(infra* i, float chance);
static int event_artifact(infra* i, float chance);
static int event_masterwork(infra* i, float chance);
