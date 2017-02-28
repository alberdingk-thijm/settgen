
typedef struct event {
    char* name;
    char* effect;
    int pop_mod;
    int (* eventf)(infra*);
} event;

/*
 * General events
 */
static int event_fire(infra* i);
static int event_accident(infra* i);
static int event_breakthrough(infra* i);
static int event_investment(infra* i);


/*
 * Technical events
 */
static int event_comet(infra* i);
static int event_strike(infra* i);

/*
 * Commercial events
 */
static int event_fair(infra* i);

/*
 * Nautical events
 */
static int event_piracy(infra* i);

/*
 * Industrial events
 */

/*
 * Religious events
 */
static int event_heresy(infra* i);
static int event_festival(infra* i);
static int event_holiday(infra* i);

/*
 * Military events
 */
static int event_skirmish(infra* i);
static int event_triumph(infra* i);

/*
 * Administrative events
 */
static int event_trial(infra* i);
static int event_prisonbreak(infra* i);
static int event_diplomatvisit(infra* i);

/*
 * Other events
 */
static int event_plague(infra* i);
