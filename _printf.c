#include <stdarg.h>
#include "main.h"

/**
* _print_f - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @format: string parmameter
* @...: args parmameter
*/

int _printf(const char *format, ...)
{
	va_list a;
	int len = 0, i = 0;
	int totalLength = 0;

	if (!format)
		return (-1);

	for (; format[len]; len++)
		;

	va_start(a, format);

	for (; i < len; i++)
	{
		if (format[i] == '%')
		{	
			if (format[i + 1])
				totalLength += _get_type(format[i + 1], a);
			i++;
		}
		else
		{
			_putchar(format[i]);
			totalLength++;
		}
	}
	return (totalLength);
}
