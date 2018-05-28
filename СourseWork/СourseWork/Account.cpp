#include "Account.h"
//#include "Database.h"

Account::Account() {

}

Tenant& Account::getTn() {
	return this->tn;
}

Landlord& Account::getLl() {
	return this->ll;
}

Database& Account::getDb() {
	return this->db;
}

void Account::connectToDb(std::string path) {
	if (!this->db.isDbLoaded || path != this->db.filename) {
		Database db(path);
		this->db = db;
	}
}

void Account::login(std::string login, std::string password) {
	/*this->ll = this->db.getAdminUser(login, password);
	if (!this->ll.adminMode)*/
		this->tn = this->db.getUser(login, password);
}

void Account::regist(std::string login, std::string password, std::string name, std::string surname,
	std::string father, std::string address, unsigned int area, unsigned int people,
	std::vector<std::string> facilities) {
	/*json person = R"(
		{
            "auth": {
                "login": "",
                "password": ""
            },
            "privacy": {
                "name": "",
                "surname": "",
				"fathersname": "",
				"address: "",
				"area": 0,
				"livingpeople": 0,
				"facilities": ""
            }
        }
	)"_json;*/
	/*json person = {
		{"auth", {
			{"login", ""},
			{"password", ""}
		},
		"privacy", {
			{"name", ""},
			{"surname", ""},
			{"father's name", ""},
			{"address", ""},
			{"area", 0},
			{"living people", 0},
			{"facilities", ""}
		}
		}
	};*/

	for (auto i : db.getJ()["users"]) {
		if (i["auth"]["login"] == login)
			throw std::exception("Account with such login already exists, select another");
	}

	json person;

	person["auth"]["login"] = login;
	person["auth"]["password"] = password;
	person["privacy"]["name"] = name;
	person["privacy"]["surname"] = surname;
	person["privacy"]["father's name"] = father;
	person["privacy"]["address"] = address;
	person["privacy"]["area"] = area;
	person["privacy"]["living people"] = people;
	//person["privacy"]["facilities"] = facilities;

	person["pays"]["needToPay"] = facilities;

	Tenant temp(&person);

	this->db.addUserToDb(temp);
	this->tn = this->db.getUser(login, password);
}

std::vector<double> Account::sendMeters(std::vector<std::vector<std::string>> map,
										std::vector<std::vector<double>> numbers, Tenant tn, json payment) {
	return this->ll.getBill(map, numbers, tn, payment);
	// bill = tariff * pokazaniya
	// pok == 0 -> bill = norm * living people * tariff
	// type == f -> bill = area * tariff
}

void Account::sendPay(std::vector<std::vector<std::string>> map,
	std::vector<std::vector<double>> numbers, Tenant tn, int unixtime) {
	this->ll.acceptPay(map, numbers, tn, unixtime);
}
