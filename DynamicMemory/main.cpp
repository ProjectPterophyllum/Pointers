#include "stdafx.h"
#include "Print.h"
#include "PushElemToArray.h"

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размера массива: "; cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	Print(arr, n);
	push_back(arr, n, rand() % 100);
	Print(arr, n);
	push_front(arr, n, rand() % 100);
	Print(arr, n);
	pop_back(arr, n);
	Print(arr, n);
	pop_front(arr, n);
	Print(arr, n);
	insert(arr, n, n/2, 26);
	Print(arr, n);
	erase(arr, n, 0);
	insert(arr, n, 10, 26);
	Print(arr, n);
	cout << endl;
	delete[] arr;
}