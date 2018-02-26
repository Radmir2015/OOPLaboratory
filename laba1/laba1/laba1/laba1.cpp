// laba1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "time.h"

using namespace std;

#define maxLength 96
#define lowLimit -10
#define highLimit 10

void manualEnter(int *arr, int n) {
	cout << "Enter whole array divided by spacebar: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Array is entered successfully..." << endl;
}

int* randomEnter(int *arr, int n, int low = lowLimit, int high = highLimit) {
	for (int i = 0; i < n; i++) {
		arr[i] = low + rand() % (high - low + 1); // (-999 + 99 + 1); // -999 99
	}
	return arr;
}

void printArray(int *arr, int n) {
	cout << "Array's: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int findMax(int *arr, int n) {
	//int *tempArr = (int*)malloc(highLimit - lowLimit + 1);
	int tempArr[highLimit - lowLimit + 1];
	int max = lowLimit - 1;
	for (int i = 0; i < highLimit - lowLimit + 1; tempArr[i++] = 0);
	for (int i = 0; i < n; i++) {
		tempArr[arr[i] - lowLimit]++;
		if (tempArr[arr[i] - lowLimit] > 1) max = max < arr[i] ? arr[i] : max;
		//max = (tempArr[arr[i] - lowLimit] > 1) ? (max < arr[i] ? arr[i] : max) : max;
	}

	cout << endl;
	printArray(tempArr, highLimit - lowLimit + 1);
	//free(tempArr);
	return max;
}

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (!(n % i)) return 0;
	}
	return 1;
}

void createPrimeArr(int *arrIN, int lengthIN, int *&arrOUT, int &lengthOUT) {
	for (int i = 0; i < lengthIN; i++) {
		if (isPrime(arrIN[i])) {
			arrOUT = (int*)realloc(arrOUT, sizeof(int) * ++lengthOUT);
			arrOUT[lengthOUT - 1] = arrIN[i];
		}
	}
}

int* bubbleSort(int *arr, int length, int startInx = -1, int endInx = -1) {
	//if (startInx > 0 && endInx > 0)
	//	if (endInx > length - 1) endInx = length - 1;
	//	//else endInx += 1;
	//if (startInx < 0 && endInx < 0) {
	//	startInx = 0;
	//	endInx = length;
	//}
	//if (startInx < 0 && endInx >= 0)
	//	if (endInx > length - 1) {
	//		startInx = 0;
	//		endInx = length - 1;
	//	}
	//	else startInx = 0;
	//if (startInx >= 0 && endInx < 0)
	//	if (startInx < length) endInx = length;
	//	else {
	//		startInx = 0;
	//		endInx = length;
	//	}
	//if (startInx > endInx) swap(startInx, endInx);

	if (startInx < 0 && endInx < 0) {
		startInx = 0;
		endInx = length;
	}
	
	for (int i = startInx; i < endInx; i++)
		for (int j = startInx; j < endInx - 1; j++)
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
	return arr;
}

int getMinimumIndex(int *arr, int n) {
	int min = arr[0];
	int minIndex = 0;
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int getLastMinimumIndex(int *arr, int n) {
	int min = arr[n - 1];
	int minIndex = n - 1;
	for (int i = n - 1; i > 0; i--) {
		if (min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int getMaximumIndex(int *arr, int n) {
	int max = arr[0];
	int maxIndex = 0;
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

void deleteItem(int *&arr, int &length, int n) {
	for (int i = n; i < length - 1; i++) {
		arr[i] = arr[i + 1];
	}
	arr = (int*)realloc(arr, sizeof(int) * (length - 1));
	length--;
}

int getSumOfDigits(int n) {
	int res = 0;
	do {
		res += n % 10;
	} while ((n /= 10) > 0);
	return res;
}

void deleteDigitsSum7(int *&arr, int &length) {
	for (int i = 0; i < length; i++) {
		if (getSumOfDigits(arr[i]) == 7) deleteItem(arr, length, i);
	}
}

void copyArray(int *arr, int start, int lengthOfCopy, int *&arrOut) {
	for (int i = start; i < start + lengthOfCopy; i++) {
		arrOut[i - start] = arr[i];
	}
}

void ascendingSequence(int *arr, int lengthIn, int *&arrOut, int &lengthOut) {
	int subLength = 0, temp = 0, start = 0, tempStart = 0;
	for (int i = 0; i < lengthIn; i++) {
		if (i == 0 || arr[i - 1] % 2) {
			tempStart = i;
		}
		if (!(arr[i] % 2)) temp++;
		if (i == lengthIn - 1 || arr[i + 1] % 2) {
			if (temp > subLength) {
				start = tempStart;
				subLength = temp;
			}
			temp = 0;
		}
	}
	lengthOut = subLength;
	arrOut = (int*)realloc(arrOut, sizeof(int) * lengthOut);
	copyArray(arr, start, subLength, arrOut);
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

	int lengthA = 30;
	int *A = (int*)malloc(sizeof(int) * lengthA);

	randomEnter(A, lengthA, 2, 100);
	printArray(A, lengthA);
	
	int *B = NULL;
	int lengthB = 0;

	createPrimeArr(A, lengthA, B, lengthB);
	printArray(B, lengthB);

	//B = bubbleSort(B, lengthB);
	//printArray(B, lengthB);

	//int K[6] = { 1, 4, 5, 3, 1, 2 };

	cout << getMinimumIndex(B, lengthB) << " " << getLastMinimumIndex(B, lengthB) << "\n";

	B = bubbleSort(B, lengthB, getMinimumIndex(B, lengthB), getLastMinimumIndex(B, lengthB));
	printArray(B, lengthB);

	/*printArray(bubbleSort(K, 6, getMinimumIndex(K, 6), getLastMinimumIndex(K, 6)), 6);
	printArray(bubbleSort(K, 6), 6);*/

	cout << endl;
	printArray(A, lengthA);
	deleteDigitsSum7(A, lengthA);
	printArray(A, lengthA);

	int *seqArr = NULL, lengthSeq = 0;
	//int arra[8] = { 2, 4, 6, 3, 2, 4, 6, 4 };
	//ascendingSequence(arra, 8, seqArr, lengthSeq);

	ascendingSequence(A, lengthA, seqArr, lengthSeq);

	cout << "\n Longest ascending subsequence:\n";
	printArray(seqArr, lengthSeq);
	
	free(seqArr);
	free(B);
	free(A);

	system("pause");
    return 0;
}

