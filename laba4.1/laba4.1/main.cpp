#include "unitDef.h"
#include "unitOperations.h"
#include "unitIO.h"

int main()
{
	//Student* arr = new Student[3];
	//Student vasya = { "Pupkin", "Vasya", "22813378", "78005553535", { 11, 12, 1999 }, { 28, 8, 2017 }, { 31, 3, 2020 }, 2 };
	//cout << vasya.deleteFlag << endl;
	//Student petya = { "Popov", "Petya", "22813378", "78005553535", { 20, 8, 2000 }, { 28, 8, 2017 }, { 31, 3, 2028 }};
	//Student masha = { "Ivanova", "Maria", "22813378", "78005553535", { 3, 2, 1999 }, { 28, 8, 2017 }, { 31, 3, 2020 }};

	//Student arr[3] = { vasya, petya, masha };

	Student* arr = 0;

	cout << "Input number of students: ";
	int size = input(1, 100);

	getStruct(arr, size);

	//cout << vasya.surname << " " << vasya.deleteFlag << " " << (vasya.overdue = 6) << " " << vasya.deleteFlag << endl;

	printStruct(arr, size);

	selectionSort(arr, size, [](Student st) { return st.birthDate.year * 365 + st.birthDate.month * 30 + st.birthDate.day; });

	printStruct(arr, size);

	int size1;
	Student* lastStudents = 0;

	//getOverdued(arr, size, lastStudents, size1);
	cout << "Overdued..." << endl;
	Student* temp = getOverdued(arr, size, lastStudents, size1);
	printStruct(temp, size);

	cout << "Non-overdued..." << endl;
	printStruct(lastStudents, size1);

	system("pause");
	return 0;
}