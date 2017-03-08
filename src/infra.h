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

typedef struct infrastructure {
    char* name;
    struct quarter* home;  // location in sett
    int preq_flags; // flags showing if prerequisites are met
    enum condition cond;  // infrastructure condition
    enum type t;  // infrastructure type
    struct event* ev;  // associated events
} infra;

static void load_buildings(char* fpath);

