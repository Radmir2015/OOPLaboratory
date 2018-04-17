#pragma once

#include <string>
#include <tuple>
#include <vector>

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
		Student(string name, string surname = "", string orderNumber = "",
				string phoneNumber = "", string groupNumber = "",
				Date enterDate = {0, 0, 0}, Date birthDate = {0, 0, 0}) {
			this->name = name; this->surname = surname;
			this->orderNumber = orderNumber; this->phoneNumber = phoneNumber; this->groupNumber = groupNumber;
			this->enterDate = enterDate; this->birthDate = birthDate;
		}
		string getIntro() {
			return this->name + " " + this->surname;
		}
		string getOrderNumber() { return this->orderNumber; }
		string getSurname() { return this->surname; }
		string getGroupNumber() { return this->groupNumber; }
		Date getBirthDate() { return this->birthDate; }
		Date getEnterDate() { return this->enterDate; }
	private:
		string orderNumber, name, surname, phoneNumber, groupNumber;
		Date enterDate, birthDate;
};

// преобразование структуры даты в строковое представление
string dateToString(Date date, char delim = '.') {
	return to_string(date.day) + delim + to_string(date.month) + delim + to_string(date.year);
}

// проверка: была ли дата в объекте заполнена
bool isFilledDate(Date date) {
	return date.day != 0 && date.month != 0 && date.year != 0;
}

// получение фамилии и даты рождения из массива студентов с помощью номера зачетной книжки
tuple<bool, string, Date> getStudentByOrder(vector<Student> sts, string order) {
	tuple<bool, string, Date> temp;
	for (auto s : sts) {
		if (s.getOrderNumber() == order) {
			tuple<bool, string, Date> temp(true, s.getSurname(), s.getBirthDate());
			return temp;
		}
	}
	return temp;
}

// получение студентов, которые были зачислены в одну и ту же дату
tuple<bool, Student, Student> inOneDate(vector<Student> sts) {
	tuple<bool, Student, Student> temp;
	for (int i = 0; i < sts.size() - 1; i++)
		for (int j = i + 1; j < sts.size(); j++) {
			if (dateToString(sts[i].getEnterDate()) == dateToString(sts[j].getEnterDate()) && isFilledDate(sts[i].getEnterDate())) {
				tuple<bool, Student, Student> temp(true, sts[i], sts[j]);
				return temp;
			}
		}
	return temp;
}