#include "main.h"

/**
* _print_binary - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_binary(va_list arg)
{
<<<<<<< HEAD
	int bin = va_arg(arg, int);
	int binMax = 1;
	int binRes = 0;
	int binIndex = 0;

	if (bin < 0)
	{
		_putchar('-');
		bin *= -1;
	}
=======
        int bin = va_arg(arg, int);
        int binMax = 1;
        int binRes = 0;
        int binIndex = 0;
>>>>>>> ad010e8c5f2c1b03972b24fbd2a1ab05d55bb7a1

        if (bin < 0)
        {
                _putchar('-');
                bin *= -1;
        }

<<<<<<< HEAD
	while (binMax > 0)
	{
		binIndex += 1;
		if (binMax <= binRes)
		{
			_putchar('1');
			binRes -= binMax;
		}
		else
			_putchar('0');
		binMax /= 2;
	}
	return (binIndex);
=======
        while (binMax < bin)
                binMax *= 2;

        while (binMax > 0)
        {
                binIndex += 1;
                if (binMax <= binRes)
                {
                        _putchar('1');
                        binRes -= binMax;
                }
                else
                        _putchar('0');
                binMax /= 2;
        }
        return (binIndex);
>>>>>>> ad010e8c5f2c1b03972b24fbd2a1ab05d55bb7a1
}
