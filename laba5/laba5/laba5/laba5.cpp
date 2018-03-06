// laba5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream";

using namespace std;

int amount1(int n) {
	int cx = 0;
	for (; n > 0; cx = (n % 2) ? cx + 1 : cx, n >>= 1);
	return cx;
}

void getMaxAmount(int amount, int &number, int &amountOf1) {
	int num = 0;
	for (int i = 0; i < amount; i++) {
		cin >> num;
		int am = amount1(num);
		amountOf1 = amountOf1 < am ? number = num, am : amountOf1;
	}
}

int consistNumber(int num, int div) {
	for (; num > 0; (num % div == 0) ? return 1 : "", num /= 7);
	return 0;
}

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (!(n % i)) return 0;
	}
	return 1;
}

int seq(int n) {
	int cx = 0, num = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		cx = (consistNumber(num, 7) && isPrime(num)) ? cx + 1 : cx;
	}
	return cx;
}

int main()
{
	int number = 0, amountOf1 = 0;
	//getMaxAmount(3, number, amountOf1);
	//cout << number << " " << amountOf1;
	cout << seq(3);
	system("pause");
    return 0;
}

