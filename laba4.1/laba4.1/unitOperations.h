#pragma once

#include "unitDef.h"


// ���������� ������� � ��������-����������
void selectionSort(Student* st, int size, int(*selector)(Student st))
{
	int min; // ��� ������ ������������ �������� � ��� ������
	for (int i = 0; i < size - 1; i++) {
		min = i; // ���������� ������ �������� ��������
				 // ���� ����������� �������, ����� ��������� �� ����� i-���
		for (int j = i + 1; j < size; j++) {  // ��� ��������� ��������� ����� i-���
			if (selector(st[j]) < selector(st[min])) // ���� ������� ������ ������������,
				min = j;       // ���������� ��� ������ � min
		}
		swap(st[i], st[min]); // ������ ������� i-�� � ����������� ��������
	}
}
// ��������� ������� "������������ ���������"
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