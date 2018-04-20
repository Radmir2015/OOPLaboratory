#pragma once

#include <string>
#include "Tenant.h"

class Account {
	public:
		Account(std::string login, std::string password);
		Tenant tn;
};