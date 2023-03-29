//��� ���, ��� ��������� � ���������� ������� �� ����� � ������, ����� � ������, ������ � ��������.
#pragma once
//������� ������� �������, � ����������� �� ���������� choose ������� ���� ���������� ������ ('E'), ���� ���������� �������� ('O') � �������
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
//��� ����� ������ ��������� ������� ������ � �������� �����. ��� � ������� ������� counterofsize() � �������� ���������.
void FillEvenandOdd(int array[], const int N, int Even[], int Odd[], int (*func)(int[], const int, const char))
{
	int n1 = 0, n2 = 0;
	for (int i = 0; i < N; i++)
	{
		array[i] % 2 == 0 ? Even[n1 < func(array, N, 'E') ? n1++ : n1] = array[i] : Odd[n1 < func(array, N, 'O') ? n2++ : n2] = array[i];
	}
}