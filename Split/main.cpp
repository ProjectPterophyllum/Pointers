#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Split.h"

//Если использовать возможности того кода, который относится ко второму заданию, то я бы сделал по другому, но я хочу, чтобы это задание осталось таким. 

void main()
{
	setlocale(LC_ALL, "");
	int N = 10;
	int* array = new int[N];
	FillRand(10, 100, array, N);
	//Эти переменные я создавал исключительно для того, чтобы можно было использовать Print, который я не хотел изменять ради этой задачи, изначально их не было, я использовал функцию Even/Odd[вот тут].
	int EvenSize = counterofsize(array, N, 'E');
	int OddSize = counterofsize(array, N, 'O');
	//Тут я создал два динамических массива.
	int* Even = new int[EvenSize];
	int* Odd = new int[OddSize];
	//А тут заполнил эти массивы.
	FillEvenandOdd(array, N, Even, Odd, counterofsize);
	//Вывод основного массива в консоль, после чего, его можно удалять, дальше он мне здесь не нужен.
	Print(array, N);
	delete[] array;
	//Это вывод значений переменных размера.
	cout << EvenSize << "\t" << OddSize << endl;
	//Это вывод двух полученных массивов в консоль.
	Print(Even, EvenSize);
	Print(Odd, OddSize);
	//Удаляем массивы, это конец программы.
	delete[] Even;
	delete[] Odd;
}