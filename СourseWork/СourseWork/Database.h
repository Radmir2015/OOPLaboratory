#pragma once

#include "Landlord.h"

#include <fstream>

#include "json.hpp"
using json = nlohmann::json;

class Database {
	public:
		Database();
		Database(std::string filename);
		void save(std::string filename = "");
		void addUserToDb(Tenant tn);
		void deleteUser(Tenant tn);
		Tenant getUser(std::string login, std::string password);
		
		bool isDbLoaded;
		std::string filename = "";

		json& getJ();
	private:
		json j;
};