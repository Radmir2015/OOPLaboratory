#include "Tenant.h"

#include "json.hpp"
using json = nlohmann::json;

Tenant::Tenant() {

}

Tenant::Tenant(json j) {
	this->ghost = j;
}

Tenant::Tenant(json* j) {
	this->j = j;
}

Tenant::Tenant(std::string name, std::string surname) {
	this->name = name;
	this->surname = surname;
}

void Tenant::addIntoJson(std::string path, std::string key) {
	(*j).at("privacy")[path] = key;
}

System::String^ Tenant::intro() {
	return toFormString((*j).at("privacy").at("name")) + " " + toFormString((*j).at("privacy").at("surname"));
}

System::String^ Tenant::test() {
	return toFormString(ghost["privacy"]["money"]);
}