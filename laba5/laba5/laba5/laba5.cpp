// laba5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

// контроль вводимых значений
int input(int &number, int min = INT_FAST16_MIN, int max = INT_FAST16_MAX) {
	while (!(cin >> number) || (number < min || number > max)) {
		cout << "\nPlease input integer number [" << min << ".." << max << "]... Your choice's: ";
	}
	return number;
}

// кол-во единиц в двоичной записи числа
int amount1(int n) {
	int cx = 0;
	for (; n > 0; cx = (n % 2) ? cx + 1 : cx, n >>= 1);
	return cx;
}

// получение числа, в дв. представлении которого больше всего единиц, и кол-ва единиц в этом числе
void getMaxAmount(int amount, int &number, int &amountOf1) {
	int num = 0;
	for (int i = 0; i < amount; i++) {
		input(num);
		int am = amount1(num);
		amountOf1 = amountOf1 < am ? number = num, am : amountOf1;
	}
}

// содержит ли число num хотя бы одну цифру div
int consistNumber(int num, int div) {
	for (; num > 0; num /= 10)
		if (num % 10 == div)
			return 1;
	return 0;
}

// простое ли число
int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (!(n % i)) return 0;
	}
	return 1;
}

// кол-во чисел одновременно содержащих 7 и простых
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
	cout << "IKBO-07-17 Akzhigitov Radmir (Lab. 5, I variant) 06.03.18\n";
	int flag = 0;

	while (flag != 4) {
		cout << "1) Get amount of 1's from number\n2) Get number and amount where amount of 1's is max\n3) Get amount of prime and consisting 7 numbers\n4) Exit\n";

		input(flag, 1, 4);

		int inputted;

		switch (flag) {
			case 1: {
				cout << "Enter integer: ";
				cout << "Amount of 1's: " << amount1(input(inputted)) << "\n\n";

				system("pause");
				system("cls");
				break;
			}
			case 2: {
				int n, maxNum, maxAmount;
				cout << "Enter amount of integers: ";
				cin >> n;

				getMaxAmount(n, maxNum, maxAmount);
				cout << maxNum << " consists " << maxAmount << " 1's\n\n";

				system("pause");
				system("cls");
				break;
			}
			case 3: {
				int n;

				cout << "Enter amount of integers: ";
				cin >> n;

				cout << "Enter " << n << " integers: ";
				cout << "Amount of numbers: " << seq(n) << "\n\n";
				
				system("pause");
				system("cls");
				break;
			}
			case 4: break;
		}
	}

	system("pause");
	return 0;
}

