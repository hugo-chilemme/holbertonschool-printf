#include "main.h"

/**
* _print_str - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

void _print_str(va_list arg)
{
	char *s = va_arg(arg, char*);

	while (*s != '\0')
	{
		_putchar(*s++);
	}
}
