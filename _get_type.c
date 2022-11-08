#include "main.h"

/**
 * sum_them_all - check the code
 * @n: number of array
 * Return: Always 0.
 */
void _get_type(char c, va_list arg)
{
	formats list[] = {
		{"i", _print_int},
		{"c", _print_char},
		{"s", _print_str},
	};


	int index = 0;
	
	while (index < 3)
	{
		if (*list[index].t == c)
		{
			list[index].f(arg);
			return 1;
		}
		index+=1;
	}
	return 0;
}
