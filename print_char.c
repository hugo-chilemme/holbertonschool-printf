#include "main.h"

/**
 * _print_char - check the code
 * @arg: va_list
 * Return: Size of char.
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}
