typedef int (*eventf)(infra*, float);

typedef struct event {
    char* name;
    char* effect;
    int pop_mod;
    float chance;
    eventf f;
} event;

static eventf parse_event(char* eventname);

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
