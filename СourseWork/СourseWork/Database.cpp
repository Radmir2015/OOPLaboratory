#include "Database.h"

Database::Database() {

}

Database::Database(std::string filename) {
	std::ifstream file(filename);
	file >> this->j;
}

void Database::save(std::string filename) {
	std::ofstream file(filename);
	file << std::setw(4) << this->j << std::endl;
}

Tenant Database::getUser(std::string login, std::string password) {
	for (auto& i : j["users"]) {
		if (i["auth"]["login"] == login && i["auth"]["password"] == password)
			return Tenant(&i);
	}

	/*for (int i = 0; i < j["users"].size(); i++) {
		if (j["users"][i]["auth"]["login"] == login && j["users"][i]["auth"]["password"] == password)
			return Tenant(&j["users"][i]);
	}*/
	
	return Tenant();
}

void Database::addUserToDb(Tenant tn) {
	if (*(tn.j) != 0)
		this->j["users"].push_back(*(tn.j));
	else
		this->j["users"].push_back(tn.ghost);
}