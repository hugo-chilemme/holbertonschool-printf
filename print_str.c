#include "main.h"


/**
 * _string_process - check the code
 * @arg: va_list
 * Return: Size of char.
 */
int _string_process(va_list arg)
{
	char *c = va_arg(arg, char*);

	return (_print_str(c));
}


/**
 * _print_str - check the code
 * @c: string
 * Return: Size of char.
 */
int _print_str(char *c)
{
	int i = 0;

	if (!c)
		return (_print_str("(null)"));

	while (c && c[i])
		_putchar(c[i++]);

	return (i);
}
