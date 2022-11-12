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

	/* Check si le format existe */
	if (!format)
		return (-1);

	/* Prend la longueur de format */
	for (; format[len]; len++)
		;
	/*  VA START */
	va_start(a, format);

	/* Prend chaque lettre et check si il y a un % pour changer le format */
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
	/* si format est vide alors ça return -1 */
	if (totalLength == 0)
		return (-1);
	return (totalLength);
}
