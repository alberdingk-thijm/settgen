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

/*
 * rare[B]ook event
 * name: rare book
 * effect: a rare book is kept in i->name
 * popmod: 1
 *
 */
static int event_rarebook(infra* i, float chance) {
    return 0;
}
