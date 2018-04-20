#pragma once

#include "Global.h"
using namespace Global;

#include <string>

class Tenant {
	public:
		Tenant(std::string name = "", std::string surname = "");
		System::String^ intro();
		std::string name = "", surname = "";
};
