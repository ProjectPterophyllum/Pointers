#pragma once
//Вывод массива в консоль.
template <typename T1>void Print(T1 array[], const int N)
{
	for (int i = 0; i < N; i++) cout << array[i] << " ";
	cout << endl;
}