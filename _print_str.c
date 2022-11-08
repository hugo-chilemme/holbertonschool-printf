#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <main.h>

/**
* _print_str - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

void _print_str(va_list arg)
{
	char *s = arg;

	while (*s != '\0')
	{
		_putchar(*s++);
	}
}
