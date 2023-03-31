#pragma once
//Добавление элемента в конец массива.
template <typename T1>void push_back(T1*& arr, int& N, T1 NewElem)
{
	T1* arr2 = new T1[N + 1];
	for (int i = 0; i < N; i++) arr2[i] = arr[i];
	arr2[N] = NewElem;
	N++;
	delete[] arr;
	arr = arr2;
}