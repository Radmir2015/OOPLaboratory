#include "Landlord.h"

Landlord::Landlord() {

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
	std::vector<double> result;
	for (int i = 0; i < map.size(); i++)
		if (payment.at(map[i][0]).at("type") == "meter")
			if (numbers[i][4] == 0)
				result.push_back(payment.at(map[i][0]).at("norm") * (int)tn.j->at("privacy").at("living people") * payment.at(map[i][0]).at("tariff"));
			else
				result.push_back(payment.at(map[i][0]).at("tariff") * numbers[i][4]);
		else
			result.push_back((int)tn.j->at("privacy").at("area") * payment.at(map[i][0]).at("tariff"));
	
	return result;
}