#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "Windows.h"
#include "ctype.h"

using namespace std;

char* vowels = "уеыаоэ€июЄeyuioa";
const int maxLength = 100;

void russianOutput(char* str) {
	setlocale(LC_ALL, ".866");
	cout << str;
	setlocale(LC_ALL, "RUS");
}

int getLength(char* str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
		length++;
	return length;
}

int indexOf(char ch, char* string) {
	for (int i = 0; i < getLength(string); i++)
		if (string[i] == ch) return i;
	return -1;
}

int indexOf(char* str, char** strArr, int size) {
	for (int i = 0; i < size; i++)
		if (!strcmp(str, strArr[i]))
			return i;
	return -1;
}

char* deleteVowels(char* str, char* vw = vowels) {
	//char* temp = (char*)malloc(sizeof(char) * maxLength);
	char* temp = new char[getLength(str)];
	int cx = 0;
	for (int i = 0; i < getLength(str); i++)
		if (indexOf(str[i], vw) < 0)
			temp[cx++] = str[i];
	temp[cx] = '\0';
	
	return temp;
}

char* getCharArray(int length, const char delim = '\n') {
	char* temp = new char[length];
	int i = 0;
	for (; i < length; i++) {
		temp[i] = cin.get();
		if (temp[i] == delim) break;
	}
	temp[i] = '\0';

	return temp;
}

char* getWord(char* str, char*& newStr, char* delim = " ") {
	char* word = new char[strlen(str)];

	int cx = 0;
	int i = 0;

	while (str[i] != '\0' && indexOf(str[i], delim) >= 0) {
		i++;
	}

	while (str[i] != '\0' && indexOf(str[i], delim) < 0) {
		word[cx++] = str[i++];
	}

	newStr = new char[strlen(str) - cx];
	word[cx] = '\0';

	cx = 0;

	while (str[i] != '\0') {
		newStr[cx++] = str[i++];
	}

	newStr[cx] = '\0';

	return word;
}

int isNumber(char* str) {
	for (int i = 0; i < strlen(str); i++)
		if (str[i] - '0' < 0 || str[i] - '0' > 9) return 0;
	return 1;
}

void append(int*& arr, int& size, int number) {
	arr = (int*)realloc(arr, sizeof(int) * ++size);
	arr[size - 1] = number;
}

void print(int* arr, int size, char* delim = ", ") {
	cout << "[" << arr[0];
	for (int i = 1; i < size - 1; i++)
		cout << delim << arr[i];
	cout << delim <<
		arr[size - 1] << "]";
}

void print(char** arr, int size, char* delim = ", ") {
	cout << "[\"" << arr[0] << "\"";
	for (int i = 1; i < size - 1; i++)
		cout << delim << "\"" << arr[i] << "\"";
	cout << delim << "\"" << arr[size - 1] << "\"]";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char* str;

	str = getCharArray(maxLength);

	char* string;

	string = deleteVowels(str);

	cout << string;
	delete[] string;
	delete[] str;*/

	char* str = "привет 123,   как 67,21  как дела 12,привете,привет 211 21,как";
	char* newStr = 0;

	char* word = 0;
	
	/*for (int i = 0; i < 10; i++) {
		word = getWord(str, newStr);
		str = newStr;
		cout << word << endl << str << endl << strlen(word) << endl << strlen(str) << endl << endl;
	}*/

	int* ints = 0;
	int intsLength = 0;

	char** dictionaryKeys = 0; int dictionaryLength = 0;
	int* dictionaryValues = 0;

	int cx = 0;

	char* newString = new char[strlen(str)];

	while ((word = getWord(str, newStr, " ,")) && strlen(str) != 0) {
		str = newStr;
		//cout << word << endl << str << endl << isNumber(word) << endl;
		//cout << word << " " << isNumber(word) << endl;

		if (isNumber(word))
			append(ints, intsLength, stoi(word));

		cout << word << " " << indexOf(word, dictionaryKeys, cx) << endl;

		if (indexOf(word, dictionaryKeys, cx) >= 0)
			dictionaryValues[indexOf(word, dictionaryKeys, cx)]++;
		else {
			dictionaryValues = (int*)realloc(dictionaryValues, sizeof(int) * ++cx);
			dictionaryValues[cx - 1] = 0;

			dictionaryKeys = (char**)realloc(dictionaryKeys, sizeof(char*) * cx);
			//dictionaryKeys[cx - 1] = (char*)malloc(dictionaryKeys[cx - 1], sizeof(char) * strlen(word));
			dictionaryKeys[cx - 1] = new char[strlen(word)];
			//cout << cx << " " << strlen(word) << " ";
			dictionaryKeys[cx - 1] = word;
			//cout << word << endl;
		}
	}

	print(ints, intsLength);
	print(dictionaryKeys, cx);
	print(dictionaryValues, cx);

	//delete[] str; delete[] string;

	delete[] ints;
	//delete[] word;
	delete[] dictionaryKeys; delete[] dictionaryValues;

	system("pause");
	return 0;
}