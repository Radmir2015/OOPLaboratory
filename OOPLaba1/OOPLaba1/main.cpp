#include "iostream"
#include "Student.h"

using namespace std;

int main() {
	Student* newOne = new Student("Petr", "Ivanov");
	cout << newOne->getIntro() << endl;
	system("pause");
	return 0;
}