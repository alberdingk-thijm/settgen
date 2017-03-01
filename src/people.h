// Headers for general people and notables

typedef struct notable {
    char* name;
    int level;
    enum cls c;
    int age;
    enum race r;
    // flags?
} notable;

enum cls {
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
}

enum race {
    HUMAN,
    ELF,
    DWARF,
    GNOME,
    HALFELF,
    HALFORC,
    HALFLING
};

