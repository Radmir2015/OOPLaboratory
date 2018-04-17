#pragma once

#include "Student.h"

class InstituteGuy : public Student {
	public:
		InstituteGuy():Student() {
			this->instituteName = "";
			this->department = "";
		}
		InstituteGuy(string name, string surname = "", string orderNumber = "",
			string instituteName = "", string department = "", string phoneNumber = "", string groupNumber = "",
			Date enterDate = { 0, 0, 0 }, Date birthDate = { 0, 0, 0 })
			:Student(name, surname, orderNumber, phoneNumber, groupNumber, enterDate, birthDate) {
			this->instituteName = instituteName;
			this->department = department;
		};
		string getInstituteName() { return this->instituteName; }
		string getDepartment() { return this->department; }
	private:
		string instituteName, department;
};

// поиск в массиве по номеру книжки
tuple<bool, string, string, string> seekByOrder(vector<InstituteGuy> guys, string order) {
	tuple<bool, string, string, string> temp;
	for (auto guy : guys) {
		if (guy.getOrderNumber() == order) {
			tuple<bool, string, string, string> temp(true, guy.getGroupNumber(), guy.getInstituteName(), guy.getDepartment());
			return temp;
		}
	}
	return temp;
}

// учатся ли два студента института на одной кафедре
bool studyAtSameDepartment(InstituteGuy firstGuy, InstituteGuy secondGuy) {
	return firstGuy.getDepartment() == secondGuy.getDepartment();
}