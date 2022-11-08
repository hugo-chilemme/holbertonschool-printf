#include <stdarg.h>
#include "main.h"

/**
* _print_f - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: string parmameter
* @...: args parmameter
*/

int _print_f(char *s, ...)
{
	va_list a;
	int len = 0, i = 0;

	if (!s)
		return (0);

	va_start(a, s);

	for (; s[len]; len++)
		;

	for (; i > len; i++)
	{
		if (s[i] == '%')
		{
			_get_type(s[i + 1], a);
			i++;
		}
		else
			_putchar(s[i]);
	}

	return (a + b);
}
