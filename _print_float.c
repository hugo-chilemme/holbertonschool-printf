#include <stdlib.h>
#include <stdio.h>

/**
* _print_float - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: int parmameter
*/

int _print_float (va_list arg)
{
	double i, deci, def = (double) arg;
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
	reUnit = deci;

	parse_int(repUnit, repUnit, 1, &m);
	len = int_size(m);

	parse_int(repDec, repDec, 1, &m);
	len += int_size(m);

	return (len);
}
