//Тут все, что относится к разделению массива на Белое и Черное, Жизнь и Смерть, Четное и Нечетное.
#pragma once
//Счетчик размера массива, в зависимости от переменной choose считает либо количество четных ('E'), либо количество нечетных ('O') в массиве
int counterofsize(int array[], const int N, const char choose)
{
	int size = 0;
	for (int i = 0; i < N; i++)
	{
		switch (choose)
		{
		case 'E':
			array[i] % 2 == 0 ? size++ : size;
			break;
		case 'O':
			array[i] % 2 == 1 ? size++ : size;
			break;
		}
	}
	return size;
}
//Эта штука просто заполняет массивы четных и нечетных чисел. Тут я передал функцию counterofsize() в качестве аргумента.
void FillEvenandOdd(int array[], const int N, int Even[], int Odd[], int (*func)(int[], const int, const char))
{
	int n1 = 0, n2 = 0;
	for (int i = 0; i < N; i++)
	{
		array[i] % 2 == 0 ? Even[n1 < func(array, N, 'E') ? n1++ : n1] = array[i] : Odd[n1 < func(array, N, 'O') ? n2++ : n2] = array[i];
	}
}