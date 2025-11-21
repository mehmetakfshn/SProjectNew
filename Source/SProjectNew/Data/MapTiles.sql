-- ============================================
-- MAP TILES TABLE
-- ============================================

CREATE TABLE IF NOT EXISTS MapTiles (
    MapID INTEGER NOT NULL,
    X INTEGER NOT NULL,
    Y INTEGER NOT NULL,
    TerrainType INTEGER NOT NULL,
    Elevation INTEGER NOT NULL,
    PRIMARY KEY (MapID, X, Y),
    FOREIGN KEY(MapID) REFERENCES Maps(ID)
);
