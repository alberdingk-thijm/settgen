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
