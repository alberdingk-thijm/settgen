
typedef struct event {
    char* name;
    char* effect;
    int pop_mod;
    int (* eventf)();
} event;

static int event_fire();
static int event_plague();
static int event_trial();
static int event_comet();
static int event_festival();
static int event_triumph();
static int event_fair();
