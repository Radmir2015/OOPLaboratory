#pragma once

#include <string>

using namespace std;

struct Date {
	int day, month, year;
};

class Student {
	public:
		Student() {
			name = ""; surname = "";
			orderNumber = ""; phoneNumber = ""; groupNumber = "";
			enterDate = {0, 0, 0}; birthDate = {0, 0, 0};
		}
		Student(string name = "", string surname = "", string orderNumber = "", string phoneNumber = "", string groupNumber = "", Date enterDate = {0, 0, 0}, Date birthDate = {0, 0, 0}) {
			this->name = name; this->surname = surname;
			this->orderNumber = orderNumber; this->phoneNumber = phoneNumber; this->groupNumber = groupNumber;
			this->enterDate = enterDate; this->birthDate = birthDate;
		}
		string getIntro() {
			return this->name + " " + this->surname;
		}
	private:
		string orderNumber, name, surname, phoneNumber, groupNumber;
		Date enterDate, birthDate;
};