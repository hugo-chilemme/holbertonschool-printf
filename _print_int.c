#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <main.h>

/**
* _print_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

void _print_int(va_list arg)
{
	int r = (int) arg / 10;

	if (r > 0)
		_print_int (r);

	_putchar('0' + (int) arg % 10);
}
