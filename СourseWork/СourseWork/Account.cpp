#include "Account.h"
#include "Database.h"

Account::Account() {

}

void Account::connectToDb(std::string path) {
	Database db(path);
	this->db = db;
}

void Account::login(std::string login, std::string password) {
	this->tn = this->db.getUser(login, password);
}

void Account::regist(std::string login, std::string password, std::string money) {
	json person = R"(
		{
            "auth": {
                "login": "",
                "password": ""
            },
            "privacy": {
                "money": "",
                "name": "",
                "surname": ""
            }
        }
	)"_json;
	person["auth"]["login"] = login;
	person["auth"]["password"] = password;
	person["privacy"]["money"] = money;

	Tenant temp(&person);
	//temp.j = &person;

	this->db.addUserToDb(temp);
	this->tn = this->db.getUser(login, password);
}

Tenant Account::createUser(std::string login, std::string password, std::string money) {
	json person = R"(
		{
            "auth": {
                "login": "",
                "password": ""
            },
            "privacy": {
                "money": "",
                "name": "",
                "surname": ""
            }
        }
	)"_json;
	person["auth"]["login"] = login;
	person["auth"]["password"] = password;
	person["privacy"]["money"] = money;
	return Tenant(person);
}