#pragma once
template <typename T> T Sum(T n, ...)
{
	T* arg = &n;
	T sum = 0;
	while (*arg)
	{
		sum += *arg;
		arg++;
	}
	return sum;
}
const char* Sum(char n, ...)
{
	return "Я не хочу суммировать буквы. Поэтому вот тебе ошибка - ERROR!";
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
const char* Sum_v2(char n, ...)
{
	return "Я не хочу суммировать буквы. Поэтому вот тебе ошибка - ERROR!";
}