#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Split.h"

//���� ������������ ����������� ���� ����, ������� ��������� �� ������� �������, �� � �� ������ �� �������, �� � ����, ����� ��� ������� �������� �����. 

void main()
{
	setlocale(LC_ALL, "");
	int N = 10;
	int* array = new int[N];
	FillRand(10, 100, array, N);
	//��� ���������� � �������� ������������� ��� ����, ����� ����� ���� ������������ Print, ������� � �� ����� �������� ���� ���� ������, ���������� �� �� ����, � ����������� ������� Even/Odd[��� ���].
	int EvenSize = counterofsize(array, N, 'E');
	int OddSize = counterofsize(array, N, 'O');
	//��� � ������ ��� ������������ �������.
	int* Even = new int[EvenSize];
	int* Odd = new int[OddSize];
	//� ��� �������� ��� �������.
	FillEvenandOdd(array, N, Even, Odd, counterofsize);
	//����� ��������� ������� � �������, ����� ����, ��� ����� �������, ������ �� ��� ����� �� �����.
	Print(array, N);
	delete[] array;
	//��� ����� �������� ���������� �������.
	cout << EvenSize << "\t" << OddSize << endl;
	//��� ����� ���� ���������� �������� � �������.
	Print(Even, EvenSize);
	Print(Odd, OddSize);
	//������� �������, ��� ����� ���������.
	delete[] Even;
	delete[] Odd;
}