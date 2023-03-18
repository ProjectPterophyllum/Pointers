#pragma once
template <typename T> T Sum(T n, ...)
{
	T* arg = &n;
	T sum = 0;
	for (arg; *arg != 0; arg++) sum += (*arg);
	return sum;
}