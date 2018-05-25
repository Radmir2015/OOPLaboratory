#pragma once

#include <string>
//#include "Tenant.h"
//#include "Landlord.h"
#include "Database.h"

#include "json.hpp"
using json = nlohmann::json;

class Account {
	public:
		Account();
		void connectToDb(std::string path);
		void login(std::string login, std::string password);
		void regist(std::string login, std::string password,
			std::string name, std::string surname, std::string father,
			std::string address, unsigned int area, unsigned int people, std::string facilities);
		std::vector<double> sendMeters(std::vector<std::vector<std::string>> map,
			std::vector<std::vector<double>> numbers, Tenant tn, json payment);
		void sendPay(std::vector<std::vector<std::string>> map,
			std::vector<std::vector<double>> numbers, Tenant tn, int unixtime);
		Tenant& getTn();
		Landlord& getLl();
		Database& getDb();
	private:
		Tenant tn;
		Landlord ll;
		Database db;
};