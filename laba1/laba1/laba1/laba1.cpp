// laba1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"

using namespace std;

int main()
{
	//for (double i = 1.0 / 2; i < 1024; cout << (i *= 2) << " ");
	for (double i = 1.0 / 2; i < 1024; i *= 2, cout << i << " ");
	system("pause");
    return 0;
}

