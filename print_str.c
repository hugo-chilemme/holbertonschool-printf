#include "main.h"

/**
 * _print_str - check the code
 * @arg: va_list
 * Return: Size of char.
 */
int _print_str(va_list arg)
{
	char *c = va_arg(arg, char*);
	int i = 0;

	while (c && c[i])
		_putchar(c[i++]);
	return (i);
}
