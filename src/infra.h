/*
 * Representation of infrastructure in a settlement.
 */

enum condition {
    IN_PROGRESS,
    NEW,
    FINE,
    OLD,
    DERELICT,
    RUINED
};

enum district_type {
    TECHNICAL,
    COMMERCIAL,
    INDUSTRIAL,
    RELIGIOUS,
    MILITARY,
    ADMINISTATIVE
}

enum technical {
    LIBRARY,
    SCHOOL,
    UNIVERSITY,
    MUSEUM,
    THEATRE
};

enum commercial {
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

enum industrial {
    MANUFACTORY,
    WORKSHOP,
    FOUNDRY,
    FORGE,
    MILL,
    BREWERY,
    STABLE,
    GUILD_HALL
};

enum religious {
    SHRINE,
    TEMPLE,
    GRAND_TEMPLE,
    GARDEN
};

enum military {
    WALLS,
    FORTRESS,
    BARRACKS,
    ARMOURY
};

enum administrative {
    MONUMENT,
    COURTHOUSE,
    PRISON,
    ASSEMBLY,
    EMBASSY
};

enum health {
    WELL,
    AQUEDUCT,
    APOTHECARY,
    SEWERAGE,
    HOSPITAL,
    QUARANTINE
};
