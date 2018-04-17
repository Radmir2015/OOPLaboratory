#include "iostream"
#include "Student.h"
#include "InstituteGuy.h"

using namespace std;

void orderSearch(vector<Student> sts, string order) {
	auto t = getStudentByOrder(sts, order);
	cout << "Search order number: " + order << endl;
	if (get<0>(t))
		cout << "\tResult:\n\t\tSurname: " << get<1>(t) << "\n\t\tEnter Date: " << dateToString(get<2>(t)) << endl << endl;
	else
		cout << "\tStudent with that orderNumber hasn't found..." << endl << endl;
}

void beautifulSearch(vector<InstituteGuy> guys, string order) {
	auto searchResult = seekByOrder(guys, order);
	cout << "Search query: " + order + "\n";
	if (get<0>(searchResult))
		cout << "\tResult:\n\t\tGroup: " << get<1>(searchResult) << "\n\t\tInstitute: " << get<2>(searchResult) << "\n\t\tDepartment: " << get<3>(searchResult) << endl << endl;
	else
		cout << "\tStudent with that orderNumber hasn't found..." << endl << endl;
}

void formattedEnter(vector<Student> sts) {
	auto temp = inOneDate(sts);
	cout << "Did some students enter in one day?\n\t" << (get<0>(temp) ? "Yes, " + get<1>(temp).getIntro() + " and " + get<2>(temp).getIntro() + " did." : "No.") << endl << endl;

}

int main() {
	cout << "Akzhigitov Radmir (lab. OOP n. 1) 17.04.2018" << endl << endl;

	Student newOne("Petr", "Ivanov", "123234");
	Student newTwo("Maria", "Sokolova", "228", "8800", "123", { 17, 12, 2020 }, { 17, 12, 2000 });
	Student newThree("Semen", "Bita", "123", "234", "123", { 17, 12, 2020 });
	vector<Student> sts{ newOne, newTwo, newThree };

	orderSearch(sts, "300");
	orderSearch(sts, "228");

	formattedEnter(sts);

	InstituteGuy one("Pavel", "Chistyakov", "123");
	InstituteGuy two("Ivan", "Mindsmell", "228", "Cyber", "Computer Security", "8123234123", "1115");
	InstituteGuy three("Sasha", "Tudar", "1337", "IT", "Software Engineer", "88005553535", "0717");
	InstituteGuy four("Boris", "Godunov", "1596", "PandaHack", "Software Engineer", "213234234");
	vector<InstituteGuy> guys{ one, two, three, four };

	beautifulSearch(guys, "1337");
	beautifulSearch(guys, "2282");
	beautifulSearch(guys, "228");

	cout << "Do " << two.getIntro() << " and " << three.getIntro() << " study at same department? "
		 << (studyAtSameDepartment(two, three) ? "Yes, they do." : "No, they don't.") << endl;
	cout << "Do " << three.getIntro() << " and " << four.getIntro() << " study at same department? "
		 << (studyAtSameDepartment(three, four) ? "Yes, they do." : "No, they don't.") << endl;
	cout << endl;
	system("pause");
	return 0;
}