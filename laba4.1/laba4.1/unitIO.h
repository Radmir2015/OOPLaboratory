#pragma once
#ifndef Student
#include "unitDef.h"
#endif

// проверка строки на число
bool isNumber(string str) {
	if (str == "") return 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] - '0' > 9 || str[i] - '0' < 0) return 0;
	return 1;
}

// ввод числа с проверкой на диапазон
int input(int min, int max) {
	string temp;
	bool flag = 0;
	while (!isNumber(temp) || stoi(temp) > max || stoi(temp) < min) {
		if (flag) cout << "Please input integer [" << min << ".." << max << "]: ";
		flag = 1;
		getline(cin, temp);
	}
	return stoi(temp);
}

// преобразование строки в число
bool strToInt(char* str, int& num) {
	try { num = stoi(str); return true; }
	catch (exception e) { return false; }
	return false;
}

// ввод даты с проверкой на базовые интервалы
void inputDate(Date& st) {
	char temp[256];
	int cx;
	bool flag = 0;
	bool secFlag = 0;
	while (true) {
		cx = 0;
		flag = 0;
		if (secFlag) cout << "Please enter right date format (dd mm yyyy): ";
		secFlag = 1;
		cin.getline(temp, 256);
		char* ptr = strtok(temp, " ");
		while (ptr != NULL) {
			try {
				int num = stoi(ptr);
				if (cx == 0)
					if (num >= 1 && num <= 31)
						st.day = num;
					else flag = 1;
					if (cx == 1)
						if (num >= 1 && num <= 12)
							st.month = num;
						else flag = 1;
						if (cx == 2)
							if (num >= 1900 && num <= 3000)
								st.year = num;
							else flag = 1;
							cx++;
			}
			catch (exception e) {
				flag = 1;
			}

			if (flag) break;

			ptr = strtok(NULL, " ");
		}
		if (flag == 0) return;
	}
}

// вывод всей структуры
void printStruct(Student* st, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Student: " << st[i].name << " " << st[i].surname << endl;
		cout << "Birth's date: " << st[i].birthDate.day << "." << st[i].birthDate.month << "." << st[i].birthDate.year << endl;
		cout << "Enter's date: " << st[i].enterDate.day << "." << st[i].enterDate.month << "." << st[i].enterDate.year << endl;
		cout << "Today's date: " << st[i].todayDate.day << "." << st[i].todayDate.month << "." << st[i].todayDate.year << endl;
		cout << "Overdue time: " << st[i].overdue << " years" << endl << endl;
	}
}

// ввод всех студентов
void getStruct(Student*& st, int size) {
	st = new Student[size];
	for (int i = 0; i < size; i++) {
		cout << "Student's name: "; cin >> st[i].name;
		cout << "Student's surname: "; cin >> st[i].surname;
		cout << "Student's order number: "; cin >> st[i].recordNumber;
		cout << "Student's phone number: "; cin >> st[i].phoneNumber;

		getchar();

		cout << "Student's birth date (dd mm yyyy): ";
		/*st[i].birthDate.day = input(1, 31);
		st[i].birthDate.month = input(1, 12);
		st[i].birthDate.year = input(1900, 3000);*/
		inputDate(st[i].birthDate);
		cout << "Student's enter date (dd mm yyyy): ";
		inputDate(st[i].enterDate);
		cout << "Student's today date (dd mm yyyy): ";
		inputDate(st[i].todayDate);

		cout << "Student's overdue (years): ";
		st[i].overdue = input(1, 20);
	}
}