#pragma once

#include <string>
#include "Tenant.h"
#include "Landlord.h"
#include "Database.h"

#include "json.hpp"
using json = nlohmann::json;

class Account {
	public:
		Account();
		void connectToDb(std::string path);
		void login(std::string login, std::string password);
		void regist(std::string login, std::string password, std::string money);
		Tenant createUser(std::string login, std::string password, std::string money);
		Tenant tn;
		Landlord ll;
		Database db;
};