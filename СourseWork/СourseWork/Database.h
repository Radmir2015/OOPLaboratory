#pragma once

#include "Tenant.h"

#include <fstream>

#include "json.hpp"
using json = nlohmann::json;

class Database {
	public:
		Database(std::string filename);
		Tenant getUser(std::string login, std::string password);
	private:
		json j;
};