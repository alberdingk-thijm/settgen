/*
 * Representation of infrastructure in a settlement.
 */

enum condition {
    NEW,
    FINE,
    OLD,
    DERELICT,
    RUINED
};

enum technical {
    LIBRARY,
    SCHOOL,
    UNIVERSITY,
    MUSEUM,
    THEATRE
};

enum trade {
    MINT,
    MARKET,
    FAIR,
    CARAVANSARY,
    CUSTOMS_HOUSE,
    HARBOUR,
    LIGHTHOUSE,
    WAREHOUSE,
    INN
};

enum industry {
    MANUFACTORY,
    WORKSHOP,
    FOUNDRY,
    FORGE,
    MILL,
    GUILD_HALL
};

enum religion {
    SHRINE,
    TEMPLE,
    GRAND_TEMPLE,
    MONASTERY
};

enum military {
    WALLS,
    FORT,
    BARRACKS,
    ARMOURY
};

enum administration {
    MONUMENT,
    COURTHOUSE,
    PRISON,
    ASSEMBLY,
    EMBASSY
};

enum agriculture {
    STABLE,
    BAKERY,
    BREWERY,
    WINERY,
    GARDEN
}

enum health {
    WELL,
    HOSPITAL,
    QUARANTINE,
    LEPER_COLONY,
};
