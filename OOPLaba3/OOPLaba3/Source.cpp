#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

template<class T>
void createFile(string filename, vector<T>data) {
	ofstream file(filename, ios::trunc);
	if (file.is_open()) {
		for (int i = 0; i < data.size() - 1; i++)
			file << data[i] << "\n";
		file << data.back();
	}
	file.close();
}

template<class T>
void appendToFile(string filename, vector<T>data) {
	ofstream file(filename, ios::app);
	if (file.is_open()) {
		file << "\n";
		for (int i = 0; i < data.size() - 1; i++)
			file << data[i] << "\n";
		file << data.back();
	}
	file.close();
}

void printFile(string filename, string delim = "\n") {
	ifstream file(filename);
	string temp;
	if (file.is_open())
		while (!file.eof()) {
			getline(file, temp, '\n');
			cout << temp << delim;
		}
	file.close();
}

void deletedStringCopyFile(string name, string tempName, int lineNumber) {
	ifstream fin(name);
	ofstream fout(tempName);
	string temp;
	int i = 0;

	if (fin.is_open() && fout.is_open()) {
		while (!fin.eof()) {
			getline(fin, temp, '\n');
			if (lineNumber != i++)
				fout << temp << '\n';
		}
	}
	fin.close();
	fout.close();
	remove(name.c_str());
	rename(tempName.c_str(), name.c_str());
}

template<class T>
void writeToBinary(string path, vector<T>& data) {
	ofstream fout(path, ios::binary | ios::trunc);
	
	for (auto& i : data)
		fout.write((char*)(&i), sizeof(T));

	fout.close();
}

template<class T>
vector<T> readFromBinary(string path) {
	vector<T> total;
	ifstream fin(path, ios::in | ios::binary);
	while (!fin.eof()) {
		T temp;
		fin.read((char*)(&temp), sizeof(T));
		if (fin.eof()) break;
		total.push_back(temp);
	}
	fin.close();
	return total;
}

vector<string> getLines(string filename, string delim = "\n") {
	ifstream file(filename);
	vector<string> total;;
	string temp;
	if (file.is_open())
		while (!file.eof()) {
			getline(file, temp, '\n');
			total.push_back(temp);
		}
	file.close();
	return total;
}

class Abonement {
	public:
		Abonement() {};
		int id = 0;
		string f = "", i = "", o = "", address = "";
};

int main() {
	/*
	createFile("Hello.txt", vector<int>{1, 2, 5, 10});
	//printFile("Hello.txt");
	appendToFile("Hello.txt", vector<int>{3, 14, 15, 92});
	printFile("Hello.txt", " ");
	std::cout << std::endl;

	deletedStringCopyFile("Hello.txt", "temp.txt", 1);
	printFile("Hello.txt", " ");
	std::cout << std::endl;
	deletedStringCopyFile("Hello.txt", "temp.txt", 2);
	printFile("Hello.txt", " ");
	std::cout << std::endl;

	vector<double> numbers = { 2.45, 17e-2 };
	writeToBinary<double>("sample1.dat", numbers); //getLines("sample.txt")
	vector<int> ints = { 1, 17, 20 };
	writeToBinary<int>("sample2.dat", ints);
	//Abonement ab = {id = 12312, f = ""}
	//writeToBinary("sample2.txt", vector<Abonement>{ { 12343, "123", "234", "234", "4534fs" } });
	for (auto i : readFromBinary<int>("sample2.dat"))
		cout << i << endl;
	*/

	vector<Abonement> ab;
	
	ifstream file("sample.txt");
	while (!file.eof()) {
		Abonement temp;
		file >> temp.id;
		file >> temp.f >> temp.i >> temp.o;
		getline(file, temp.address, '\n');
		ab.push_back(temp);
	}

	for (auto i : ab) {
		cout << i.id << " " << i.f << " " << i.i << " " << i.o << " " << i.address << endl;
	}

	writeToBinary("sampleStruct.dat", ab);
	auto str = readFromBinary<Abonement>("sampleStruct.dat");

	for (auto i : str) {
		cout << i.f << " " << i.i << " " << i.o << " " << i.address << endl;
	}

	file.close();

	system("pause");
	return 0;
}