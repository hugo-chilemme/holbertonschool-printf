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
	long int val = va_arg(arg, long int);

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
long int int_size(int n)
{

	long int i = 0;

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
void parse_int(long int n, long int r, long int mul, long int *m)
{
	long int f = (n / mul) % 10;

	r -= f * mul;
	mul *= 10;
	*m = mul;

	if (r > 1)
		parse_int(n, r, mul, m);
	_putchar('0' + f);
	return;

}
