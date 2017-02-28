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

enum type {
    TECHNICAL,
    COMMERCIAL,
    NAUTICAL,
    INDUSTRIAL,
    RELIGIOUS,
    MILITARY,
    ADMINISTRATIVE
}

enum technical {
    LIBRARY,
    THEATRE,
    SCHOOL,
    UNIVERSITY,
    MUSEUM
};

enum commercial {
    MARKET,
    INN,
    CARAVANSARY,
    MINT,
    CUSTOMS_HOUSE
};

enum nautical {
    LIGHTHOUSE,
    HARBOUR,
    WAREHOUSE,
    SHIPYARD
};

enum industrial {
    MILL,
    STABLE,
    FORGE,
    WORKSHOP,
    MANUFACTORY,
    GUILD_HALL
};

enum religious {
    SHRINE,
    TEMPLE,
    GARDEN,
    GRAND_TEMPLE
};

enum military {
    WALLS,
    BARRACKS,
    ARMOURY,
    FORTRESS
};

enum administrative {
    MONUMENT,
    ASSEMBLY,
    PRISON,
    EMBASSY,
    COURTHOUSE
};

enum health {
    WELL,
    APOTHECARY,
    AQUEDUCT,
    SEWERAGE,
    QUARANTINE,
    HOSPITAL
};
