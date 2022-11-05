#include "duckdb/web/extensions/geo_extension.h"

#include "geo-extension.hpp"

extern "C" void duckdb_web_geo_init(duckdb::DuckDB* db) { db->LoadExtension<duckdb::GeoExtension>(); }
