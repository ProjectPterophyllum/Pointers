#include "stdafx.h"
//Генерация случайного числа из диапазона
int randomize(int start, int end)
{
	int random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}
double randomize(double start, double end)
{
	double random = 0;
	random = start + ((double)rand() / (double)RAND_MAX) * (end - start + 0.01);
	return random;
}
char randomize(char start, char end)
{
	char random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}