#include "main.h"

/**
* _print_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_int(va_list arg)
{
	return (_print_int_reverse((int) va_arg(arg, int), 0));
}

/**
 * _print_int_reverse - Entry point...
 * Return: Nothing
 * @i: number
 * @b: length
 */
int _print_int_reverse(int i, int b)
{
	int r = i / 10;

	_putchar('0' + (int) i % 10);

	if (r == 0)
		return (b + 1);
	return (_print_int_reverse(r, b + 1));
}
