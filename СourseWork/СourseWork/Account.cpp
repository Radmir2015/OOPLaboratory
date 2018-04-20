#include "Account.h"
#include "Database.h"

Account::Account(std::string login, std::string password) {
	Database db("database.json");
	this->tn = db.getUser(login, password);
}
