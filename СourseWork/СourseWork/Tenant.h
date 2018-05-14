#pragma once

#include "Global.h"
using namespace Global;

#include <string>
#include <vector>

#include "json.hpp"
using json = nlohmann::json;

class Tenant {
	public:
		Tenant();
		Tenant(json* j);
		Tenant(json j);
		Tenant(std::string name, std::string surname);
		void addIntoJson(std::string path, std::string key);
		std::vector<std::string> getNeedToPay();
		System::String^ intro();
		System::String^ test();
		std::string name = "", surname = "";
		json* j;
		json ghost;
};
