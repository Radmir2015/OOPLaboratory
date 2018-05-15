#pragma once

#include <string>
#include <vector>
#include "Tenant.h"

#include "json.hpp"
using json = nlohmann::json;

class Landlord {
	public:
		Landlord();
		std::vector<double> getBill(std::vector<std::vector<std::string>> map,
			std::vector<std::vector<double>> numbers, Tenant tn, json payment);
		json allPayments;
};