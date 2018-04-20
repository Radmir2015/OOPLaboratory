#include "Tenant.h"

Tenant::Tenant(std::string name, std::string surname) {
	this->name = name;
	this->surname = surname;
}

System::String^ Tenant::intro() {
	return toFormString(name + " " + surname);
}