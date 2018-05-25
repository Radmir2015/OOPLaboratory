#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "Tenant.h"

#include "json.hpp"
using json = nlohmann::json;

class Landlord {
	public:
		Landlord();
		std::vector<double> getBill(std::vector<std::vector<std::string>> map,
			std::vector<std::vector<double>> numbers, Tenant tn, json payment);
		void acceptPay(std::vector<std::vector<std::string>> map,
			std::vector<std::vector<double>> numbers, Tenant tn, int unixtime);
		void savePayments(std::string path);
		bool finished = false;
		bool started = false;
	private:
		json allPayments;
};