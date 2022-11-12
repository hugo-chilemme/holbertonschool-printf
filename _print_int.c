#include "main.h"

/**
* _print_int - Entry point...
* Description: 'Function qui execute les functions correct par rapport a l'arg'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_int(va_list arg)
{
	int m = 0;
	int a = 1;
	int val = va_arg(arg, int);

	if (val == INT_MIN)
		return (_print_INT_MIN());

	if (val > INT_MIN && val < INT_MAX)
		a = 0;

	if (val < INT_MIN)
		a += 1;

	if (val < INT_MIN + 1024)
		a += 1;

	if (val > INT_MAX - 1024 && val < INT_MAX)
		a += 1;

	if (val > INT_MAX)
		a += 1;

	if (val <= INT_MAX)
		a += 1;


	if (val < 0)
		a += _putchar('-');

	val = val > 0 ? val : val * -1;

	parse_int(val, val, 1, &m);
	return (int_size(m) + a);
}

/**
* int_size - Entry point...
* Description: 'Donne le n char par rapport au n de 0 dans le int'
* Return: Always 0 (Success)
* @n: int parmameter
*/
int int_size(int n)
{

	int i = 0;

	for (; n > 1; i++)
		n /= 10;

	return (i - 1);
}

/**
 * parse_int - Entry point...
 * Return: Nothing
 * @n: number
 * @r: number max
 * @mul: multiplie
 * @m: pointer
 */
/* Permet d'ecrire une chaine int */
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
