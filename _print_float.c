#include "main.h"

/**
* _print_float - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: int parmameter
*/

int _print_float (va_list arg)
{
	double i, deci, def = va_arg(arg, double);
	int repDec, repUnit, len, mult = 1;
	int m = 0;

	for (i = def; i > 1; i -= 1)
		;

	deci = def - i;

	while (def != (int) def)
	{
		mult *= 10;
		def *= mult;
	}

	repDec = (double) i * mult;
	repUnit = deci;

	parse_int((long int) repUnit, (long int) repUnit, 1, &m);
	len = int_size(m);
	_putchar('.');
	parse_int((long int) repDec, (long int) repDec, 1, &m);
	len += int_size(m);

	return (len);
}
