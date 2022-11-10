#include "duckdb/web/extensions/variant_extension.h"

#include "variant-extension.hpp"

extern "C" void duckdb_web_variant_init(duckdb::DuckDB* db) { db->LoadExtension<duckdb::VariantExtension>(); }
