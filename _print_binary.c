#include "main.h"

/**
* _print_binary - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/
int _print_binary(va_list arg)
{
	int bin = va_arg(arg, int);
        int binMax = 1;
        int binRes = 0;
        int binIndex = 0;

        if (bin < 0)
        {
                _putchar('-');
                bin *= -1;
        }

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
}
