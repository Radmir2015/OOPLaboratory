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
		int getUnpaidMonth(Tenant tn);
		json getAllPayments();
		std::vector<std::string> saveOutdated(int unixtime);

		bool getFinished();
		bool getStarted();

		void setFinished(bool value);
		void setStarted(bool value);
	private:
		json allPayments;

		bool finished = false;
		bool started = false;
};