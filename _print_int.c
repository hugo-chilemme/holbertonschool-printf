#include "main.h"

/**
* _print_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

void _print_int(va_list arg)
{
	_print_int_reverse((int) va_arg(arg, int));
}

void _print_int_reverse(int i)
{
	int r = i / 10;
	if (r > 0)
		_print_int_reverse(r);

	_putchar('0' + (int) i % 10);
}
