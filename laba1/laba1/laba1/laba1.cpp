// laba1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "time.h"

using namespace std;

#define maxLength 96
#define lowLimit -100
#define highLimit 200

void manualEnter(int* arr, int n) {
	cout << "Enter whole array divided by spacebar: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array is entered successfully..." << endl;
}

void randomEnter(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = lowLimit + rand() % (highLimit - lowLimit + 1); // (-999 + 99 + 1); // -999 99
	}
}

void printArray(int* arr, int n) {
	cout << "Array's: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int findMax(int* arr, int n) {
	//int *tempArr = (int*)malloc(highLimit - lowLimit + 1);
	int tempArr[highLimit - lowLimit + 1];
	int max = lowLimit - 1;
	for (int i = 0; i < highLimit - lowLimit + 1; i++) { tempArr[i] = 0; }
	for (int i = 0; i < n; i++) {
		tempArr[arr[i] - lowLimit]++;
		if (tempArr[arr[i] - lowLimit] > 1) max = max < arr[i] ? arr[i] : max;
	}
	cout << endl;
	printArray(tempArr, highLimit - lowLimit + 1);
	//free(tempArr);
	return max;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int arr[maxLength];
	int n = 20;

	//manualEnter(arr, 5);
	randomEnter(arr, n);
	printArray(arr, n);

	int founded;

	if ((founded = findMax(arr, n)) == lowLimit - 1) {
		cout << "Number suited conditions doesn't found..." << endl;
	} else {
		cout << "Max of array which meet more than 1 time is " << founded << endl;
	}
	//printArray(arr, n);

	system("pause");
    return 0;
}

