#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include <string>

using namespace std;

// ��������� ���� ��� ����������� ���
struct Date {
	int day : 6;
	int month : 5;
	int year;
};

// ��������� ������� ��� ����������� ��������� ������� ��� �������������
struct Student {
	string surname, name, recordNumber, phoneNumber;
	Date birthDate, enterDate, todayDate;

	int overdue = 6;

	//(bool)(*deleteF)(Student st) = [](Student st) { return st.todayDate.year - st.enterDate.year > st.overdue; };

	int deleteFlag = todayDate.year - enterDate.year - overdue;
};