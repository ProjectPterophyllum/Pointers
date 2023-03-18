#include "stdafx.h"
#include "define.h"

//Главная функция
void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a; //объявление указателя "pa" и инициализация его адресом переменной "а"
	cout << a << endl; //вывод значения переменной 'a'
	cout << &a << endl;//взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl; //вывод адреса переменной 'a', хранящегося в указателе pa
	cout << *pa; 
#endif //POINTERS_BASICS
	const int n = 3;
	int arr[n] = { 3,2,8 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << tab;
	}
	cout << endl;
}