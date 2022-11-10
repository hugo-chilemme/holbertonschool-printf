#include "main.h"

/**
* _print_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_int(va_list arg)
{
	int m = 1;
	int a = 0;
	int val = va_arg(arg, int);

	if (val < 0)
		a = _putchar('-');

	val = val > 0 ? val : -val;

	parse_int(val, val, 1, &m);
	return (int_size(m) + a);
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
