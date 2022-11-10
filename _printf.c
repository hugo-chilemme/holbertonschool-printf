#include <stdarg.h>
#include "main.h"

/**
* _printf - Entry point...
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
				totalLength += _find_type(format[i + 1], a);
			i++;
		}
		else
			totalLength += _putchar(format[i]);
	}
	if (totalLength == 0)
		return (-1);
	return (totalLength);
}
