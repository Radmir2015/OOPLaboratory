#include "Database.h"

Database::Database(std::string filename) {
	std::ifstream file(filename);
	file >> this->j;
}

Tenant Database::getUser(std::string login, std::string password) {
	for (auto i : j["users"]) {
		if (i["auth"]["login"] == login && i["auth"]["password"] == password)
			return Tenant(i["privacy"]["name"], i["privacy"]["surname"]);
	}
	return Tenant();
}
