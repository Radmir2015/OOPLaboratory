#pragma once

#include "unitDef.h"


// сортировка выбором с функцией-селектором
void selectionSort(Student* st, int size, int(*selector)(Student st))
{
	int min; // для поиска минимального элемента и для обмена
	for (int i = 0; i < size - 1; i++) {
		min = i; // запоминаем индекс текущего элемента
				 // ищем минимальный элемент, чтобы поместить на место i-ого
		for (int j = i + 1; j < size; j++) {  // для остальных элементов после i-ого
			if (selector(st[j]) < selector(st[min])) // если элемент меньше минимального,
				min = j;       // запоминаем его индекс в min
		}
		swap(st[i], st[min]); // меняем местами i-ый и минимальный элементы
	}
}
// получение массива "просроченных студентов"
Student* getOverdued(Student* st, int& size, Student*& nonOverdued, int& sizeNonOverdued) {
	Student* overdued = new Student[size];
	nonOverdued = new Student[size];
	int cx = 0, cx1 = 0;
	for (int i = 0; i < size; i++) {
		if (st[i].deleteFlag > 0) {
			overdued[cx++] = st[i];
		}
		else {
			nonOverdued[cx1++] = st[i];
		}
	}
	size = cx;
	sizeNonOverdued = cx1;
	return overdued;
}