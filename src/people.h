// Headers for general people and notables

typedef struct notable {
    char* name;
    int level;
    cls c;
    int age;
    race r;
    // flags?
    struct notable* next;
} notable;

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
static int notable_create(char* name, int lvl, enum race r, enum cls c);
