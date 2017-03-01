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
