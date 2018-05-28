#include "Landlord.h"

Landlord::Landlord() {
	std::ifstream file("payments.json");
	if (file.is_open())
		file >> this->allPayments;
}

std::vector<double> Landlord::getBill(std::vector<std::vector<std::string>> map,
	std::vector<std::vector<double>> numbers, Tenant tn, json payment) {
	/*for (auto i : map)
		this->allPayments.push_back({
			{"sendor", (std::string)tn.j->at("name") + " " + (std::string)tn.j->at("surname")},
			{}
			})*/
	// bill = tariff * pokazaniya
	// pok == 0 -> bill = norm * living people * tariff
	// type == f -> bill = area * tariff
	this->finished = false;
	this->started = true;
	std::vector<double> result;
	for (int i = 0; i < map.size(); i++)
		if (payment.at(map[i][0]).at("type") == "meter")
			if (numbers[i][4] == 0 || payment.at(map[i][0]).count("tariff") == 0)
				result.push_back(payment.at(map[i][0]).at("norm") * (int)tn.getJ()->at("privacy").at("living people") * payment.at(map[i][0]).at("tariff"));
			else
				result.push_back(payment.at(map[i][0]).at("tariff") * numbers[i][4]);
		else
			result.push_back((int)tn.getJ()->at("privacy").at("area") * payment.at(map[i][0]).at("tariff"));
	
	return result;
}

void Landlord::acceptPay(std::vector<std::vector<std::string>> map,
	std::vector<std::vector<double>> numbers, Tenant tn, int unixtime) {
	for (auto i : map) {
		this->allPayments.push_back({
			{ "sender", tn.getJ()->at("privacy")["name"].get<std::string>() + " " + tn.getJ()->at("privacy")["surname"].get<std::string>() },
			{ "login", tn.getJ()->at("auth")["login"] },
			{ "payments", i[0]},
			{ "tariff", i[1]},
			{ "norm", i[2]},
			{ "type", i[3]},
			{ "meters", i[4]},
			{ "check", i[5]},
			{ "unixtime", unixtime}
			});
	}
	this->started = false;
	this->finished = true;
}

void Landlord::savePayments(std::string path) {
	std::ofstream file(path);
	file << std::setw(4) << this->allPayments << std::endl;
}

int Landlord::getUnpaidMonth(Tenant tn) {
	int time = 0;
	for (auto i : this->allPayments)
		if (tn.getJ()->at("auth")["login"] == i["login"])
			if (i["unixtime"] > time)
				time = (int)i["unixtime"];
	return time;
}

json Landlord::getAllPayments() {
	return this->allPayments;
}