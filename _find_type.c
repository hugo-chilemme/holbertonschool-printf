#include "main.h"

/**
 * _find_type - check the code
 * @n: number of array
 * Return: Always 0.
 */
int _find_type(char c, va_list arg)
{
	formats list[] = {
		{"i", _print_int},
		{"c", _print_char},
		{"s", _print_str},
	};

	int len = 0;
	int index = 0;

	while (index < 3)
	{
		if (*list[index].t == c)
			return (list[index].f(arg));
		index++;
	}

	if (c != '%')
	{
		_putchar('%');
		len++;
	}
	len++;
	_putchar(c);
	return (len);
}
