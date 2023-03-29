#pragma once
#include "randomize.h"
//«аполнение массива случайными значени€ми
template <typename T1>void FillRand(T1 start, T1 end, T1 array[], const int N)
{
	for (int i = 0; i < N; i++) array[i] = randomize(start, end);
}