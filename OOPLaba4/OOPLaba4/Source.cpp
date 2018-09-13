#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<class T>
class Iterator {
	public:
		Iterator() {}
		Iterator(T* iter) {
			this->iter = iter;
		}
		void operator==(Iterator elem) {
			this->iter = elem->iter;
		}
		void operator==(T* elem) {
			this->iter = elem;
		}
		Iterator operator++(int) {
			Iterator oldValue = *this;
			this->iter++;
			return oldValue;
		}
		Iterator operator--(int) {
			Iterator oldValue = *this;
			this->iter--;
			return oldValue;
		}
		Iterator& operator++() {
			this->iter++;
			return *this;
		}
		Iterator& operator--() {
			this->iter--;
			return *this;
		}

		friend bool operator!=(Iterator elem1, Iterator elem2) {
			return elem1.iter != elem2.iter;
		}

		T* getIter() {
			return this->iter;
		}
	private:
		T* iter  = 0;
};

template<class T>
class Stack {
	public:
		Stack() {}
		~Stack() { free(data); }
		void push(T element) {
			data = (T*)realloc(data, sizeof(T) * ++length);
			
			for (int i = length - 2; i >= 0; i--)
				data[i + 1] = data[i];
			data[0] = element;
		}
		T pop() {
			T temp = data[--length];
			data = (T*)realloc(data, sizeof(T) * length);

			return temp;
		}
		void print() {
			for (int i = 0; i < length; i++)
				cout << data[i] << " ";
			cout << endl;
		}
		int getLength() {
			return length;
		}
		T* begin() {
			return data;
		}
		T* end() {
			return data + length;
		}
	private:
		T* data = 0;
		int length = 0;
};

class Student {
	public:
		Student(const char f[255], const char i[255], const char group[255]) {
			strcpy_s(this->f, f);
			strcpy_s(this->i, i);
			strcpy_s(this->group, group);
		}

		friend ostream& operator<<(ostream& os, Student& st) {
			os << "Student: " << st.f << " " << st.i << "\nGroup: " << st.group << endl;
			return os;
		}

		Student& operator=(Student& st) {
			strcpy_s(this->f, st.f);
			strcpy_s(this->i, st.i);
			strcpy_s(this->group, st.group);

			return *this;
		}
	private:
		char  f[255],
			  i[255],
		  group[255];
};

int main() {
	Stack<int> st;

	st.push(2);
	st.push(2);
	st.push(8);

	st.print();

	st.pop();

	st.print();

	st.push(20);

	st.print();

	for (Iterator<int> it = st.begin(); it != Iterator<int>(st.end()); it++)
		cout << *it.getIter() << " ";

	cout << endl;

	Iterator<int> it = st.begin() + 1;
	*it.getIter() = 228;

	st.print();

	cout << st.getLength();
	cout << "\n\n";

	Student stud("Ivanov", "Ivan", "1");
	Student stud1("Petrov", "Petr", "2");
	Student stud2("Sergeyev", "Sergey", "1");

	Stack<Student> studStack;

	studStack.push(stud1);
	studStack.push(stud2);

	cout << "Students in stack:\n";
	studStack.print();

	studStack.pop();

	cout << "Students in stack after pop:\n";
	studStack.print();

	studStack.push(stud);

	cout << "Students in stack after push:\n";
	studStack.print();

	system("pause");

	return 0;
}