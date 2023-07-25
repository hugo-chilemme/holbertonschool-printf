#include "main.h"

/**
* _printf - Same with printf function
* @format: string to remplace %s, %c etc...
* Return: Always size of output
*/
int _printf(const char *format, ...)
{
	va_list args;
	int ss = 0;
	int (*execute_operator)(va_list);
	int size = 0;

	char currChar;
	char nextChar;

	if (!format || (format[0] == '%' && strlen(format) == 1))
		return (-1);

	va_start(args, format);

	while (format[ss])
	{
		currChar = format[ss];
		nextChar = format[ss += 1];
		execute_operator = get_operator(nextChar);

		if (currChar != '%' || !nextChar || !execute_operator)
		{
			size += _putchar(currChar);
			if (currChar == '%' && nextChar == '%')
				ss += 1;
			continue;
		}
		size += execute_operator(args);
		ss += 1;
	}

	va_end(args);
	return (size);
}
