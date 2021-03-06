// integrateFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

typedef double(*func)(double);

// рекурсивная функция интегрирования методом трапеции
// параметры: (функция, интервалы a, b, точность, кол-во разбиений, просчет в глубину или вернуть значение первого прохода)
double integrate(func f, double a, double b, double epsilon = 0, long n = 100, int deep = 1) {
	double sum = 0;
	double step = (b - a) / n; // длина шага разбиения
	for (int i = 0; i < n; i++) {
		sum += step * (f(i * step) + f((i + 1) * step)) / 2;
	}
	cout << "Value of integral: " << sum << endl;
	if (!deep) return sum;
	double accuracy = abs(sum - integrate(f, a, b, epsilon, n * 2, 0));
	cout << "Accuracy of " << n << " steps: " << accuracy << endl << endl;
	return (accuracy < epsilon) ? sum : integrate(f, a, b, epsilon, n * 2);
}

int main()
{
	func function = [](double x) { return 7 / (x * x - 101); };
	cout << "Integrate's result: " << integrate(function, 0, 10, 1e-2, 5) << endl;
	system("pause");
    return 0;
}

