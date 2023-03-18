#pragma once
template <typename T> T Sum(T n, ...)
{
	T* arg = &n;
	T sum = 0;
	for (arg; *arg != 0; arg++) sum += *arg;
	return sum;
}
template <typename T> T Sum_v2(T n, ...)
{
	va_list arg;
	T i = n;
	T sum = 0;
	va_start(arg, n);
	while (i != NULL)
	{
		sum += i;
		i = va_arg(arg, T);
	}
	va_end(arg);
	return sum;
}