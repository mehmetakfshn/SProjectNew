CREATE TABLE IF NOT EXISTS UnitTypes (
    Type TEXT PRIMARY KEY,
    DisplayName TEXT NOT NULL,
    Description TEXT,
    CombatStrength INTEGER,
    RangedStrength INTEGER,
    Movement INTEGER,
    Cost INTEGER,
    RequiredTech TEXT,
    RequiredResource TEXT,
    MeshPath TEXT,
    IconPath TEXT
);

-- CORE UNITS
INSERT INTO UnitTypes VALUES
('UNIT_WARRIOR', 'Warrior', 'Basic melee infantry.', 6, NULL, 2, 40, NULL, NULL, '', ''),
('UNIT_SCOUT', 'Scout', 'Fast recon unit.', 4, NULL, 3, 30, NULL, NULL, '', '');

-- MODDED UNITS
INSERT INTO UnitTypes VALUES
('UNIT_T90S', 'T-90S', 'Modern Main Battle Tank.', 80, NULL, 5, 360, 'TECH_ADVANCED_BALLISTICS', 'RESOURCE_CURT', '/Game/Units/T90S/T90S.uasset', '/Game/UI/Icons/T90S.png');

INSERT INTO UnitTypes VALUES
('UNIT_F22', 'F-22 Raptor', 'Stealth air superiority fighter.', 0, 120, 12, 600, 'TECH_STEALTH', NULL, '/Game/Units/F22/F22.uasset', '/Game/UI/Icons/F22.png');

INSERT INTO UnitTypes VALUES
('UNIT_MEDIC', 'Medic', 'Provides battlefield healing.', 5, NULL, 3, 80, 'TECH_BRONZE_WORKING', NULL, '/Game/Units/Medic/Medic.uasset', '/Game/UI/Icons/Medic.png');
