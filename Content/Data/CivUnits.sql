CREATE TABLE IF NOT EXISTS CivUnits
(
    CivName  TEXT NOT NULL,
    UnitType TEXT NOT NULL
);

-- Örnek kayıtlar
INSERT INTO CivUnits VALUES ('United States of America', 'UNIT_WARRIOR');
INSERT INTO CivUnits VALUES ('United States of America', 'UNIT_SCOUT');
INSERT INTO CivUnits VALUES ('United States of America', 'UNIT_T90S');

INSERT INTO CivUnits VALUES ('Republic of Turkey', 'UNIT_WARRIOR');
INSERT INTO CivUnits VALUES ('Republic of Turkey', 'UNIT_SCOUT');


