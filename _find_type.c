#include "main.h"

/**
 * _find_type - check the code
 * @c: char
 * @arg: va_list
 * Return: Always 0.
 */
int _find_type(char c, va_list arg)
{
	formats list[] = {
		{"i", _print_int},
		{"d", _print_decimal},
		{"c", _print_char},
		{"s", _print_str},
		{NULL, NULL}
	};

	int len = 1;
	int index = 0;
	int slength = 0;

	for (; list[slength].t; slength++)
		;


	while (index < slength)
	{
		if (*list[index].t == c)
			return (list[index].f(arg));
		index++;
	}

	if (c != '%')
		len += _putchar('%');
	_putchar(c);
	return (len);
}
