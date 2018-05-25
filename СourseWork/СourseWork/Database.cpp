#include "Database.h"

Database::Database() {

}

Database::Database(std::string filename) {
	this->filename = filename;
	std::ifstream file(filename);
	if (!file.is_open()) throw std::exception("File corrupted or didn't find");
	file >> this->j;
	this->isDbLoaded = true;
}

void Database::save(std::string filename) {
	if (filename == "" && this->filename != "")
		filename = this->filename;
	std::ofstream file(filename);
	file << std::setw(4) << this->j << std::endl;
}

json& Database::getJ() {
	return this->j;
}

Tenant Database::getUser(std::string login, std::string password) {
	for (auto& i : j["users"]) {
		if (i["auth"]["login"] == login && i["auth"]["password"] == password) {
			if (i["auth"].find("isAdmin") != i["auth"].end()) {
				Tenant tmp = Tenant(&i);
				tmp.isAdminMode = true;
				return tmp;
			}
			return Tenant(&i);
		}
	}

	/*for (int i = 0; i < j["users"].size(); i++) {
		if (j["users"][i]["auth"]["login"] == login && j["users"][i]["auth"]["password"] == password)
			return Tenant(&j["users"][i]);
	}*/
	
	throw std::exception("User isn't found...");

	//return Tenant();
}

//Landlord Database::getAdminUser(std::string login, std::string password) {
//	for (auto& i : j["users"]) {
//		if (i["auth"]["login"] == login && i["auth"]["password"] == password &&
//			i.at("auth").find("isAdmin") != i.at("auth").end())
//			return Landlord(&i);
//	}
//
//	throw std::exception("User isn't found...");
//}

void Database::addUserToDb(Tenant tn) {
	if (*(tn.getJ()) != 0)
		this->j["users"].push_back(*(tn.getJ()));
	else
		this->j["users"].push_back(tn.getGhost());
}

void Database::deleteUser(Tenant tn) {
	int index = -1;
	for (int i = 0; i < this->j["users"].size(); i++)
		if (this->j["users"][i] == *(tn.getJ())) {
			index = i;
			break;
		}
	if (index != -1)
		this->j["users"].erase(index);
	/*if (*(tn.j) != 0)
		*(tn.j) = nullptr;
	else
		tn.ghost = nullptr;*/
}