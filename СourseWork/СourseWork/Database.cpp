#include "Database.h"

Database::Database() {

}

Database::Database(std::string filename) {
	this->filename = filename;
	std::ifstream file(filename);
	file >> this->j;
	this->isDbLoaded = true;
}

void Database::save(std::string filename) {
	if (filename == "" && this->filename != "")
		filename = this->filename;
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
	
	throw std::exception("User isn't found...");

	//return Tenant();
}

void Database::addUserToDb(Tenant tn) {
	if (*(tn.j) != 0)
		this->j["users"].push_back(*(tn.j));
	else
		this->j["users"].push_back(tn.ghost);
}

void Database::deleteUser(Tenant tn) {
	if (*(tn.j) != 0)
		*(tn.j) = nullptr;
	else
		tn.ghost = nullptr;
}