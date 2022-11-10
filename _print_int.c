#include "main.h"

/**
* _print_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_int(va_list arg)
{
	int m = 0;
	int val = va_arg(arg, int);

	val = val > 0 ? val : -val;

	if (val < 0)
	{
		_putchar('-');
		m++;
	}

	parse_int((int) va_arg(arg, int), (int) va_arg(arg, int), 1, &m);
	return (int_size(m));
}

/**
* int_size - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/
int int_size(int n)
{

	int i = 0;

	for (; n > 1; i++)
		n /= 10;

	return (i);
}

/**
 * parse_int - Entry point...
 * Return: Nothing
 * @n: number
 * @r: number max
 * @mul: multiplie
 * @m: pointer
 */
void parse_int(int n, int r, int mul, int *m)
{
	int f = (n / mul) % 10;

	r -= f * mul;
	mul *= 10;
	*m = mul;

	if (r > 1)
		parse_int(n, r, mul, m);
	_putchar('0' + f);
	return;

}
