#include "stdafx.h"
#include "Print.h"
#include "PushElemToArray.h"

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������� �������: "; cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	Print(arr, n);
	push_back(arr, n, rand() % 100);
	Print(arr, n);
	cout << endl;
	delete[] arr;
}